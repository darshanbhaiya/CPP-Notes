#include<iostream>
using namespace std;

void printArray(int a[],int n){
    cout<<"Array elements are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void priAltSwap(int a[],int n){
    for(int i=0;i<(n-1);i=i+2){
        swap(a[i],a[i+1]);
    }

    printArray(a,n);
}

void sort01(int a[],int n){
  int i=0;
  int j=n-1;

  while(i<j){
    while(a[i]==0 && i<j){
        i++;
    }
    while(a[j]==1 && i<j){
        j--;
    }
    if(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
  }

  printArray(a,n);
}

int main(){
    int a[50];
    int n;

    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    priAltSwap(a,n);
    sort01(a,n);

    return 0;
}