#include<iostream>
using namespace std;


void update1(int **p){
    p=p+1;  // no change in original // pass by value
    cout<<"inside function p: "<<p<<endl;

}


void update2(int **p){
    *p=*p+1;
    cout<<"inside function *p: "<<*p<<endl;

}

void update3(int **p){

    **p=**p+1;
    cout<<"inside function **p: "<<**p<<endl;
}

int main(){
    int value=5;
    int *ptr=&value; // pointer corresponding to value
    // why not pointer ptr=&value;
        // =>pata lagta hai kis type ke data ko point kar raha hai
        // =>kitni byte ko consider karna hai

    int **ptr2=&ptr; // double pointer corresponding to ptr    
    int ***ptr3=&ptr2; // double pointer corresponding to ptr2
                        // ...
        

    // jis bhi value ke corresponding ek pointer banana hoga uska datatype likh do exact aur ek star laga do

    cout<<"printing &value: "<<&value<<endl;

    cout<<"printing ptr: "<<ptr<<endl;
    cout<<"printing &ptr: "<<&ptr<<endl;

    cout<<"printing ptr2: "<<ptr2<<endl;
    cout<<"printing &ptr2: "<<&ptr2<<endl;

    cout<<"printing ptr3: "<<ptr3<<endl;
    cout<<"printing &ptr3: "<<&ptr3<<endl;

    cout<<"printing *ptr: "<<*ptr<<endl;
    cout<<"printing *ptr2: "<<*ptr2<<endl;
    cout<<"printing *ptr3: "<<*ptr3<<endl;

    cout<<"printing **ptr2: "<<**ptr2<<endl;
    cout<<"printing **ptr3: "<<**ptr3<<endl;

    cout<<"printing ***ptr3: "<<***ptr3<<endl;


    // function and pointer
    cout<<endl<<endl;
    cout<<"**** ptr2 is passed ****"<<endl;
    cout <<" value before: "<<value<<endl;
    cout <<" ptr before: "<<ptr<<endl;
    cout <<" ptr2 before: "<<ptr2<<endl;
    //update1(ptr2);  // no change
    cout <<" value after: "<<value<<endl;
    cout <<" ptr after: "<<ptr<<endl;
    cout <<" ptr2 after: "<<ptr2<<endl;
    cout<<endl<<endl;


    cout<<endl<<endl;
    cout<<"**** ptr2 is passed ****"<<endl;
    cout <<" value before: "<<value<<endl;
    cout <<" ptr before: "<<ptr<<endl;
    cout <<" ptr2 before: "<<ptr2<<endl;
    update2(ptr2); // ptr is changed
    cout <<" value after: "<<value<<endl;
    cout <<" ptr after: "<<ptr<<endl;
    cout <<" ptr2 after: "<<ptr2<<endl;
    cout<<endl<<endl;


    cout<<endl<<endl;
    cout<<"**** ptr2 is passed ****"<<endl;
    cout <<" value before: "<<value<<endl;
    cout <<" ptr before: "<<ptr<<endl;
    cout <<" ptr2 before: "<<ptr2<<endl;
    update3(ptr2); // comment update2 then run // value is updated
    cout <<" value after: "<<value<<endl;
    cout <<" ptr after: "<<ptr<<endl;
    cout <<" ptr2 after: "<<ptr2<<endl;
    cout<<endl<<endl;

    


}        