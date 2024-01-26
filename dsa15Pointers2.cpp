#include<iostream>
using namespace std;

int main(){

    int arr[10]={0,1,2,3,4};
    // arr => array name , arr => address of first element in an array
    cout<<"address of first memory block (a[0]) is: "<<arr<<endl;
    cout<<"address of second memory block (a[1]) is: "<<arr+1<<endl; 
    // address in arr increases by the size of int as it is of type int // like going to next integer // arr++

    // & => address of operator
    // * => value at

    cout<<"address of first memory block (a[0]) is: "<<&arr[0]<<endl;
    cout<<"value at first memory block (a[0]) is: "<<arr[0]<<endl;
    cout<<"value at first memory block (a[0]) is: "<<*arr<<endl;
    cout<<"value at first memory block (a[0]) +1 is: "<<(*arr)+1<<endl;
    cout<<"value at second memory block (a[1]) is: "<<*(arr+1)<<endl;

    // internal working
    //  arr[4] = *(arr+4) // arr[i]=*(arr+i)
    cout<<"arr[4]: "<<arr[4]<<" "<<*(arr+4)<<endl;

    int i=4;
    // therefore we can say 4[arr]=*(4+arr) // i[arr]=*(i+arr)
    cout<<"i[arr]: "<<i[arr]<<" "<<*(i+arr)<<endl;

    // differences b/w array and pointers

    int *p=&arr[0]; // or int *p=arr;

    // difference 1 => both are pointer pointing to same location and having address but different size
    cout<<"size of arr: "<<sizeof(arr)<<endl; // 40 bytes // poore array ka size print hota hai
    cout<<"size of p: "<<sizeof(p)<<endl; // 8 bytes // only 'p' mean pointer ka size print hota hai
    cout<<"size of *p: "<<sizeof(*p)<<endl; // 4 bytes // only size of first element
    cout<<"size of &p: "<<sizeof(&p)<<endl; // 8 bytes // size of address
    cout<<"size of *arr: "<<sizeof(*arr)<<endl; // 4 bytes // only size of first element
    cout<<"size of &arr: "<<sizeof(&arr)<<endl; // 8 bytes // size of address
    cout<<"&arr and arr: "<<&arr<<" "<<arr<<endl; // &arr=arr // both are of same address

    // difference 2 => &arr prints address of first element and &p prints its own address
    cout<<"arr and &arr and &arr[0]: "<<arr<<" "<<&arr<<" "<<&arr[0]<<endl;
    cout<<"p and &p and &p[0]: "<<p<<" "<<&p<<" "<<&p[0]<<endl;

    // symbol table content cannot be changed
    // in symbol table => variables like arr, i, p are mapped with a address

    // arr=arr+1; // error
    
    cout<<"p before increment: "<<p<<endl;
    p=p+1; // p value increases by the size of int as it is of type int // changes its value not its own address
    cout<<"p after increment: "<<p<<endl;
    // (&p)=(&p)+1;  // error => can't change its own address as it is mapped in symbol table

    // character arrays

    int ar[5]={1,2,3,4,5};
    char ch[6]="abcde"; // last one is "\0"

    cout<<"printing ar: "<<ar<<endl; // address is printed
    cout<<"printing ch: "<<ch<<endl; // string is printed

    // for character and integer array cout function is differently implemented

    char *c=&ch[0];
    cout<<"printing c: "<<c<<endl; // it doesn't print address , it prints whole string starting from 0

    char *c1=&ch[2];
    cout<<"printing c1: "<<c1<<endl; // it doesn't print address , it prints whole string starting from 1

    char temp='z';
    char *pt1=&temp;
    cout<<"pt1: "<<pt1<<endl; 
    // temp is a variable it doesn't have '\0' , printing will continue unless it finds '\0' weather it is a garbage value



    char chh[6]="abcdf";
    // temporary memory of six blocks is allocated to abcdf\0 and this temperory memory is copied into chh created later
    char *cc="abcde"; // don't do this
    // temporary memory of six blocks is allocated to abcde\0 and address of 'a' which is in temporary memory is stored in cc // risky as temp memory data can be changed

    cout<<"printing chh: "<<chh<<endl;
    cout<<"printing cc: "<<cc<<endl;











}