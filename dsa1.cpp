#include<iostream>
using namespace std;
int main(){
    cout<<"hello darshan"<<endl;
    cout<<"\n";

    int a=123;
    cout<<a<<endl;
    // int range pow(2,31) to pow(2,31)-1
    char b='v';
    // b='ab'; error
    cout<<b<<endl;

    bool bl=false;
    cout<<bl<<endl;

    float f=1.2;
    cout<<f<<endl;

    double d=1.23;
    cout<<d<<endl;

    int size=sizeof(bl);
    cout<<"size of bl is : "<<size<<" in bytes"<<endl;

    // Typecasting
    int c='c';
    cout<<c<<endl;//99
    char ch=99;
    cout<<ch<<endl;//c (implicit type casting)
    char c1=123456; //more than 1byte
    cout<<c1<<endl; //last byte of integer i.e. @ is printed with warning

    unsigned int i1=100;
    unsigned int i2=-100;
    unsigned int i5=0;

    cout<<i5<<endl;
    cout<<i1<<endl;
    cout<<i2<<endl;// it will take two's compliment as positive number

    cout<<"*********"<<endl;
    float e=2/5;// int by int is int only
    cout<<e<<endl;

    float h=2.0/5;// float by int is float only
    cout<<h<<endl;

    int g=2.0/5;// float by int is float only but data type is int
    cout<<g<<endl;

    int i3=2;
    int i4=3;
    
    bool first=(i2==i3);
    cout<<first<<endl;
 
    // == > < >= <= != relational operator
    // = assignment operator

    // logical operator
    // && and
    // || or
    // ! not => true ka false && false ka true
    int j=!4; // any number other than zero is treated as 1 or true
    cout<<"j="<<j<<endl;
    
    int l=0;
    cout<<!l<<endl;

    int z=!-4; // any number other than zero is treated as 1 or true
    cout<<"z="<<z<<endl;
}