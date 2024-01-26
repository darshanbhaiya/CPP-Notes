#include<iostream>
using namespace std;

void print(int *p){

    // here it is pass by value , we just passed the address
    // pass by value mai copy create hoti hai
    cout<<"address passed: "<<p<<endl;
    cout<<"value at address: "<<*p<<endl;
}

void update(int *p){
    (*p)=(*p)+1;
    p=p+1; 
    // just address is passed
    // new p created in update updates not the original ptr
    // here p act as pass by value => changing p doesnt affect ptr
    // but changing at p affect value
    cout<<"inside: "<<p<<endl;
}


// array is not passed just pointer to array is pass
// call by reference
// same as int getSum(int *arr,int n)
int getSum(int arr[],int n){
    cout<<"size of arr in function: "<<sizeof(arr)<<endl; // will give size of address ie 8 bytes
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=i[arr];
        // sum+=arr[i]; // can also be written as => arr[i] = i[arr] = *(arr+i)
    }
    return sum;
}

void updateeee(int *p){
    *p=*p*2;
}


int main(){
    int value=5;
    int *ptr=&value;
    print(ptr);

    cout<<"ptr and value before update: "<<ptr<<" "<<*ptr<<endl;
    update(ptr);
    cout<<"ptr and value after update: "<<ptr<<" "<<*ptr<<endl;
    
    int arr[5]={1,2,3,4,5};
    cout<<"sum is: "<<getSum(arr,5)<<endl;

    cout<<"size of arr in main: "<<sizeof(arr)<<endl; // will give size of array ie 20 bytes


    // benefit of sending pointer in place of whole array => we can send part of array
    cout<<"sum is: "<<getSum(arr+3,2)<<endl;

    int d=10;
    updateeee(&d);
    cout<<"d: "<<d<<endl; // d is updated

}

