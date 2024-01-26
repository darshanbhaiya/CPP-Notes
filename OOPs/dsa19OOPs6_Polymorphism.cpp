#include<iostream>
using namespace std;

class A{
    public:
    // function overloading
    void sayHello(){
        cout<<"Hello darshan !!"<<endl;
    }

    // int sayHello(){
    //     cout<<"Hello darshan !!"<<endl;  // => error
    //     return 1;
    // }

    void sayHello(string name){
        cout<<"Hello darshan !! "<<name<<" is my friend"<<endl;
    }

    void sayHello(char ch){
        cout<<"Hello darshan !! "<<ch<<" is my friend"<<endl;
    }
    
    int sayHello(string name,int n){
        cout<<"Hello darshan !! "<<name<<" is my friend"<<endl;
        return n;
    }


};


class B{

    public:
        int a;
        int b;

        // operator overloding
        void operator+ (B &obj){
            int value1=this->a; // first operand is current object
            int value2=obj.a;   // second operand is input argument
            cout<<"output : "<<value2-value1<<endl;
            cout<<"ding ding ding "<<endl;

         }// we overloaded '+'

         void operator() (){
            cout<<"mai bracket hu: "<<this->a<<endl; // jisbhi object ne call kiya hai uski 'a' wali value print kar dena
          }// we overloaded '()'
};


// method overriding
class parent{
    public:
        void fun(){
            cout<<"inside parent class"<<endl;
        }
};

class child:public parent{
    public:
        void fun(){
            cout<<"inside child class"<<endl;
        }
};

int main(){

/*
    polymorphism => many + forms => existing in multiple forms

        two types 
            1) compile time or static polymorphism : compile time mai pata hai ki kya cheez kis kis form mai exist karti hai
                        i) function overloading => functions with same name => same function ko multiple form mai likhna hai
                                => should have different no. of arguments
                                => function that differ only in their return types cannot be overloaded
                                => should have different types of arguments
                                => if same, arguments can be placed in different order
                                => there should be difference in signature of function(in arguments)

                        ii) operator overloading =>  use operator to do some other task(custom task) eg: use '+' to print "hello darshan" => load = apne hisab se kaam karana hai
                                => '+' does add,concatinate now use '+' to print "hello world" or custom kaam
                                => eg: use '+' for subtracting two integers
                                => syntax =>    return_type operator symbol (){

                                                    } 
                                => refer notes


            2) runtime time or dynamic polymorphism => run time mai pata hai ki kya cheez kis kis form mai exist karti hai
                        i) method overriding or function overriding
                            => same method in parent and child class => child class method is implemented
                            => we do it becoz we want implementation of that function according to our child class (custom implementation)
                            rules: same name, same parameter, possible through inheritance only
                            // refer notes
                            => for eg: speak in animal and bark in dog
                        


*/    



// function overloading

A obj;
obj.sayHello();
obj.sayHello("sujal");

B obj1,obj2;

obj1.a=4;
obj2.a=7;

obj1+obj2; // obj1 pass as current object and obj2 pass as input parameter // such operations can be defined for classes on our accord
obj1(); // called by object 'obj1' => act as current object (this)

child o;
o.fun(); 






}