#include<iostream>
using namespace std;


// single inheritance
class animal{
    public:
        int age;
        int weight;

        void shout(){
            cout<<"animal making noice"<<endl;
        }

};

class dog:public animal{

};

// multi level inheritance

class germanShepherd:public dog{

};


// multiple inheritance
class human{
    public:
        string color;

    void speak(){
            cout<<"humans making noice"<<endl;
        }    


};

class darshan:public animal,public human{

};


// hierarchical inheritance
class A{
    public:
    void fun1(){
        cout<<"inside function 1"<<endl;
    }
};
class B:public A{
    public:
    void fun2(){
        cout<<"inside function 2"<<endl;
    }
};
class C:public A{
    public:
    void fun3(){
        cout<<"inside function 3"<<endl;
    }
};



 // hybrid inheritance
 class E{
    public:
    void fun4(){
        cout<<"inside function 4"<<endl;
    }
};

 class F:public A,public E{
    public:
    void fun5(){
        cout<<"inside function 5"<<endl;
    }
};



// Inheritance Ambugity
class X{
    public:
    void fun(){
        cout<<"inside function of class X"<<endl;
    }
};
class Y{
    public:
    void fun(){
        cout<<"inside function of class Y"<<endl;
    }
};
class Z:public X,public Y{
    public:
    void fun(){
        cout<<"inside function of class Z"<<endl;
    }
};

int main(){

/*

    Types of inheritance  // refer notes
    1)single inheritance
    2)multi level inheritance
    3)multiple inheritance
    4)hierarchical inheritance => one class serve as parent class for more than one class
    5)hybrid inheritance => combination of more than one type of inheritance


*/  
    // single inheritance
    dog d;
    cout<<"dog speaking: ";
    d.shout();
    cout<<"dog age: "<<d.age;

    // multi level inheritance
    germanShepherd g;
    cout<<"germanShepherd speaking: ";
    g.shout();

    // multiple inheritance
    darshan dar;
    cout<<"dar speaking: ";
    dar.speak();
    cout<<"dar shouting: ";
    dar.shout();

    // hierarchical inheritance
    A o1;
    cout<<"o1.fun1(): ";
    o1.fun1();

    B o2;
    cout<<"o2.fun1(): ";
    o2.fun1();
    cout<<"o2.fun2(): ";
    o2.fun2();

    C o3;
    cout<<"o3.fun1(): ";
    o3.fun1();
    cout<<"o3.fun3(): ";
    o3.fun3();

    // hybrid inheritance => khud samaj le bhai

/*

inheritance ambugity : refer notes
            obj.X::fun(); => use scope resolution operator to solve it


*/

    Z obj;
    obj.fun(); // error ambigious request if fun() is not mentioned in Z

    obj.X::fun();
    obj.Y::fun();
    obj.Z::fun();

}