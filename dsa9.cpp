#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    // don't cal size by size=sizeof(arr)/sizeof(int) becoz it will give whole size not the size actually used
    cout<<endl;
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){
    //  array => similar type of item
    //        => contigous location
    //        => index access
    //        => name of array describes its first location
    //        => index starts from '0'=> 0 to (n-1)


    int num[3]={1,2,3};
    int array[50]={0}; // value at every index is '0' 
    int arr[50]={3}; // only works for '0' // except for 0th index other indexes value is '0'
    int arrr[4]; // garbage value stored
    int one[15]={1,2,3}; // except for first three index other indexes value is '0'

    cout<<"value at index 0 "<<array[0]<<endl;
    cout<<"value at index 10 "<<array[10]<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[10]<<endl;
    cout<<arrr[100]<<endl;
    arrr[100]=30;
    cout<<arrr[100]<<endl;

    // nth index access karne ke liye mujhe at least n+1 terms ka array banana padega

    for(int i=0;i<50;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl<<endl;

    for(int i=0;i<60;i++){
        cout<<one[i]<<" ";
    }

    printArray(one,15);

    char ch[5]={'a','b','c','d','e'};
    cout<<ch[3]<<endl;
    
    for(int i=0;i<5;i++){
        cout<<ch[i]<<" ";
    }
    double firstDouble[6];
    float firstFloat[6];
    bool firstBool[9];




} 