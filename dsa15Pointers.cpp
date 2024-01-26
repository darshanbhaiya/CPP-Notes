#include<iostream>
using namespace std;

int main(){

    int a=4;
    cout<<a<<endl;

    // address of operator => &
    cout<<"address of a is : "<<&a<<endl;
    // address is hexadecimal => 0 1 2 ... 9 a b c d e f

    // pointer => stores the address

    int *ptr=&a;

    cout<<"printing ptr: "<<ptr<<endl;

    // int *ptr; // wrong practice => kisi ko bhi point kar sakta
    // pointer to int is created and pointing to some garbage address

    // now 'ptr' and 'a' are both pointing to same thing
    // i.e. (*ptr)++ = a++

    // int *ptr => ptr is a pointer to int => ptr is pointing towards integer => integer type pointer
    // char *ptr=&ch; => ptr is pointing towards a character => character type pointer

    double d=4.2;
    double *p1=&d ; // => ptr is a pointer to double
    cout<<"printing p1: "<<p1<<endl;
    cout<<"value at address present in p1: "<<*p1<<endl;

    cout<<"value of ptr which is a address (ptr): "<<ptr<<endl;
    cout<<"value at address stored in ptr (*ptr): "<<*ptr<<endl; // => ptr pe jo address hai uss address par ki value bata do => value at address pointed by ptr
    // * => de reference operator => (*ptr) = a
    cout<<"address of ptr (&ptr) : "<<&ptr<<endl;

    // call by value and call by reference
    // if i do (*ptr++) then 'a' will be automatically increased by 1 => call by reference

    cout<<"size of pointer: "<<sizeof(ptr)<<endl; // 8 byte
    cout<<"size of pointer: "<<sizeof(p1)<<endl; // 8 byte
    // every type of pointer has same size as it stores address only

    int *pt=0; // null pointer // no such memory exist // segmentation fault
    

    int *p2=&a;
    cout<<"printing p2: "<<p2<<endl;
    cout<<"value at address present in p2: "<<*p2<<endl;

    int *p3=0;
    p3=&a; // different way to initialise
    cout<<"printing p3: "<<p3<<endl;
    cout<<"value at address present in p3: "<<*p3<<endl;

    int num=5;

    int b=num;
    b++;
    cout<<"num: "<<num<<endl; // no change

    int *p4=&num;
    int c=*p4;
    c++;
    cout<<"num: "<<num<<endl; // no change

    int *p5=&num;
    (*p5)++;    // does't work if written like *p5++ or (*p5++)
    cout<<"num: "<<num<<endl; // change
    (*p5)=(*p5)*2;
    cout<<"num: "<<num<<endl; // change

    // copying one pointer into another
    int *p6=p5;
    cout<<"p5 and p6: "<<p5<<" "<<p6<<endl;
    cout<<"*p5 and *p6 and num: "<<*p5<<" "<<*p6<<" "<<num<<endl;

    // important concept
    int i=3;
    int *t=&i;
    cout<<"*t++: "<<(*t)++<<endl; // always use brackets otherwise it give errors
    cout<<"i: "<<i<<endl;

    (*t)=(*t)+1; // value at address stored in t increases
    cout<<"i: "<<i<<endl;

    cout<<"t: "<<t<<endl;
    t=t+1; // address in t increases by the size of int as it is of type int // like going to next integer // t++ 
    cout<<"t: "<<t<<endl;
    // in case of array it goes to next element of an array












}