#include<iostream>
using namespace std;


// update in function changes array in main becoz we passed address
void update(int arr[],int n){
              // address received
    cout<<endl<<"inside update"<<endl;
    arr[0]=120;
    // update made on address
    // hence original array changed
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
    cout<<endl<<"inside update end"<<endl;  
}

int getMin(int num[],int n){
    int mini=INT_MAX;

    for(int i=0;i<n;i++){
        // if(num[i]<min)
        //   min=num[i];

        mini=min(mini,num[i]);
    }

    return mini;
}

int getMax(int num[],int n){
    int maxi=INT_MIN;

    for(int i=0;i<n;i++){
        // if(num[i]>max)
        //   max=num[i];

        maxi=max(maxi,num[i]);
    }

    return maxi;
}

bool search(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key)
          return 1;
    }
    return 0;      
}

void printArray(int arr[],int n){
   cout<<endl;
   for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
   cout<<endl;    
}

void reverse(int arr[],int n){
    int start=0;
    int end=n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

int main(){
    int size;
    cout<<"Enter array size : ";
    cin>>size;

   // int num[size]; // Ghatiyaa Practice
   int num[50];
   cout<<"Enter "<<size<<" elements : ";
   for(int i=0;i<size;i++)
     cin>>num[i];

    cout<<"Max is : "<<getMax(num,size)<<endl; 
    cout<<"Min is : "<<getMin(num,size)<<endl; 


    // scope of array
    int arr[3]={1,2,3};
    // arr represent base address and name of array
    update(arr,3);
         // we passed address

    cout<<endl<<"inside main"<<endl;
    for(int i=0;i<3;i++)
      cout<<arr[i]<<" ";
    cout<<endl<<"inside main end"<<endl<<endl; 

    int array[10]={1,2,3,4,5,6,7,8,9,0};
    // search if 7 is present or not
    bool found=search(array,10,11);
    if(found)
      cout<<"Found"<<endl;
    else
      cout<<"Not Found"<<endl;  


    int a1[6]={1,2,3,4,5,6};
    int a2[5]={1,2,3,4,5};

    reverse(a1,6);
    reverse(a2,5);
    
    printArray(a1,6);
    printArray(a2,5);


}