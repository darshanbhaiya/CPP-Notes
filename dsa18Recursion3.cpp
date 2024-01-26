#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){ //arr[] => it is a pointer => *arr
    // base case
    // if array size is 0 or 1 array is sorted
    if(size==0 || size==1)
        return true;

    if(arr[0]>arr[1]) // not soeted
        return false;
    else
        return isSorted(arr+1,size-1);

}

int sum(int *arr,int size){ 
    if(size==0)
        return 0;
    if(size==1) // acc to me arr+1 should't cause error => otherwise unnecessary
        return arr[0];
    return arr[0]+sum(arr+1,size-1);

}

bool linearSearch(int *arr,int size,int x){ 
    if(size==0)
        return 0;
    if(size==1) // acc to me arr+1 should't cause error => otherwise unnecessary
        return (arr[0]==x);
    if(arr[0]==x)
        return 1;
    else        
        return linearSearch(arr+1,size-1,x);

}

void print(int *arr,int st,int ed){
    cout<<"printing: ";
    for(int i=st;i<=ed;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarySearch(int *arr,int st,int ed,int k){
    // base case => element not found
    if(st>ed)
        return 0;

    int mid=st+(ed-st)/2;

    if(arr[mid]==k)  // element found
        return 1;

    //print(arr,st,ed);
    //cout<<mid<<" "<<endl;    

    if(arr[mid]>k)
        return binarySearch(arr,st,mid-1,k);    
    else
        return binarySearch(arr,mid+1,ed,k);     

}

int main(){

    // write a function to check weather a array is sorted or not using recursion
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={1,2,3,5,4};
    cout<<"arr1 is sorted or not: "<<isSorted(arr1,5)<<endl;
    cout<<"arr2 is sorted or not: "<<isSorted(arr2,5)<<endl;

    // sum of array using recursion
    cout<<"sum of arr1 : "<<sum(arr1,5)<<endl;

    // linear search using recursion
    int key=59;
    cout<<"element present in arr1 or not (linear search): "<<linearSearch(arr1,5,key)<<endl;

    // binary search using recursion
       // array must be sorted
    cout<<"element present in arr1 or not (binary search): "<<binarySearch(arr1,0,4,key)<<endl;   


}









































