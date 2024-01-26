#include<iostream>
#include "darshan.cpp" // to include darshan class from darshan.cpp
using namespace std;


/*

    OOPS => programming technique/paradime jaha aap ki chhze object ke around revolve karti hai
         => increase redability, managibility, extensibility

    object => entity => 1) state/property
                     => 2) behaviour

    class => user defined datatype

    object => instance of class

*/

// class className{ };

// hero type ki ek class
class hero{

    // properties
    char name[40]; // by default private

    private:
    int cash;

    public:
    int level;

    void print(){
        cout<<"cash of hero: "<<cash<<endl; // private cash can be accessed within class
    }

    
    int health;


    // getter
    int getCash(){
        return cash;
    }
    // getter
    int getHealth(){
        return health;
    }

    // setter
    void setCash(int c,char password){ 
        // is password is known then only one can change value
        if(password=='A'){ 
            cash=c;
        }
            
    }

    // void setCash(int cash){ 
    //     cash=cash;   // => don't do this , it sets again garbage value
    // }


    // setter
    void setHealth(int h){
        health=h;
    }

    // constructor => called automatically while object creation
                // => when written inbuild conctructor is not considered
                // => same name as class
                // => => no return type

    // default constructor
    hero(){
        cout<<"constructor called"<<endl;
    }

    // parameterised constructor
    hero(int health){
        //health=health; // braces ke ander ke health ke ander uski hi value ko daal diya // health having nearest scope is accessed
        this->health=health; // current object ke health mai parameterised health daal di
       
        cout<<"address of current object(this): "<<this<<endl;
    }

    // parameterised constructor
    hero(int health, int cash){
         this->health=health; // current object ke health mai parameterised health daal di
         this->cash=cash;

    }
};

class emptyClass{
    // empty class => no property
};

class heroo{
    public:
     int income;
     int awards;

     heroo(int income){
        this->income=income;
     } 

    // creating our copy constructer

    // pass by value
    // heroo (heroo temp){
    //     // temp is statically allocated
    //     this->income=temp.income;         => gives error (refer notes)
    //     this-> awards=temp.awards;

    // }

    // pass by reference
    heroo (heroo &temp){
        // temp is statically allocated
        cout<<"copy constructor is called"<<endl;
        this->income=temp.income;         
        this-> awards=temp.awards;
    }
};


int main(){

    // like int i;
    // to make object of a class
    hero h1; // => hero type ka object bana diya => instantiate an object

    cout<<"size of hero: "<<sizeof(hero)<<endl; // => size of all properties
    cout<<"size of h1: "<<sizeof(h1)<<endl; //  => size of all properties
    // see padding and greedy alignment in case of char it gives size '8' for it sometimes

    // empty class => no property
    emptyClass ec;
    cout<<"size of emptyClass: "<<sizeof(emptyClass)<<endl; // 1 => for identification  / to keep track => size of properties
    cout<<"size of ec: "<<sizeof(ec)<<endl; // 1 => for identification of object / to keep track => size of properties

    // class imported from external file
    darshan d1;
    cout<<"size of darshan: "<<sizeof(darshan)<<endl; 
    cout<<"size of d1: "<<sizeof(d1)<<endl; 
    bhaiya b1;
    cout<<"size of bhaiya: "<<sizeof(bhaiya)<<endl; 
    cout<<"size of b1: "<<sizeof(b1)<<endl; 

    // to access properties / data members => dot(".") operator

    // cout<<"health of h1 is : "<<h1.health<<endl; 
    // cout<<"level of h1 is : "<<h1.level<<endl;

    // access modifiers => public, private, protected => for propreties/data members and behaviours/functions
    // by default within class private is assigned

    /*
    
    public : can be used anywhere => within or outside the class

    private : can be accessed within class only

    protected : => kind of similar to private
                => can be accessed within same class but not outside the class
                => but child class can access it which private doesn't allow
    
    */
    cout<<"health of h1 is : "<<h1.health<<endl; // garbage value
    cout<<"level of h1 is : "<<h1.level<<endl; // garbage value
    // cout<<"cash of h1 is : "<<h1.cash<<endl; // private can't be accessed

    // set values
    h1.health=70;
    h1.level=4;
    // h1.cash=5; // private => in accessible
    cout<<"health of h1 is : "<<h1.health<<endl; 
    cout<<"level of h1 is : "<<h1.level<<endl;

    // getter and setter (mostly for private)
    h1.setCash(4000000,'A');
    cout<<"cash of h1 is : "<<h1.getCash()<<endl;


    // static allocation => staticly created
    hero a;
    // dynamic allocation => dynamically created
    hero *b=new hero;
    (*b).health=20;
    (*b).setCash(6000000,'A');
    cout<<"health of b is : "<<(*b).health<<endl; 
    cout<<"cash of b is : "<<(*b).getCash()<<endl;

    // b => address => address.getCash() => galat hai
    //(*b) => at address => atAddress.getCash() => sahi hai

    // alternate implementation
    b->health=50;
    b->setCash(8000000,'A');
    cout<<"health of b is : "<<b->health<<endl; 
    cout<<"cash of b is : "<<b->getCash()<<endl;


    // object created statically
    hero h2; // => when object is created , constructor is called first

    /* 
    
    constructor => invoke while object creation
                => no return type
                => same name as class
                => no input parameter => default constructor
                => h2.hero() is called automatically behind the scenes
                => if not written default constructor is already created
                => once we create constructor , inbuild constructer created by compiler dies and our is used
                => default constructor : 

    */

   // object created dynamically
   hero *h3=new hero; // here also constructor is called when created dynamically

   hero *h4=new hero(); // same cheez ho ri hai using brackets

   /*
   
   parameterised constructor : 
                    => multiple parameterised constructor can be created having differences in parameters
                    => agar ek bhi constructor bana liya toh inbuild constructor or default constructor made by compiler hat jaata hai they doesn't exist
                        for eg: if parameterised constructor bana liya toh default constructor without parameter wala made by compiler hat jaata hai and it gives error


   'this' keyword => input parameter and data member have same name
                  => current object ka address this ke ander store hota hai
                  => it is a pointer which points current object
                  => to access current object data member and function

   hero(int health){
    health=health; // braces ke ander ke health ke ander uski hi value ko daal diya // health having nearest scope is accessed

   }

   h1 ke 'health' ke ander 'parameterised health' daal do
   => h1 ke 'health' comes from 'this->health'
   
   */

    hero h5(10); // static way
    cout<<"address of object(&h5): "<<&h5<<endl;
    cout<<"health of h5 is : "<<h5.health<<endl; 
    cout<<"cash of h5: ";
    h5.print(); // garbage value

    hero *h6=new hero(12); // dynamic way
    
    hero h7(10,11);

    hero *h8=new hero(12,15);
    cout<<"health of h8 is : "<<(*h8).health<<endl; 
    cout<<"cash of h8 is : "<<(*h8).getCash()<<endl;
    cout<<"cash of h8: ";
    h8->print(); // 15

    //heroo h9; // agar ek bhi constructor bana liya toh inbuild constructor or default constructor made by compiler hat jaata hai they doesn't exist and it gives error
                // bina parameter wala constructor call hoga but it doesn't exist as we have made parameterised constructor
    heroo h9(10); // works


    /*
    
    copy constructer => created at object creation
                     => copy of object
                     => created automattically by compiler => copies every thing
                     // refer notes

                     our copy constructor copies only mentioned items by us
                     => once we create our own copy constructor , inbuild copy constructer created by compiler dies and our is used
    
    */

    hero c1(20,33);
    hero c2(c1); // c2 is a copy of c1 // copy constructor is called
                 // c2.health=c1.health
                 // c2.cash=c1.cash
    cout<<"cash of c2: "; c2.print();             
    cout<<"health of c2: "<<c2.health<<endl;             
    cout<<"level of c2: "<<c2.level<<endl;             
    cout<<"level of c1: "<<c1.level<<endl;    

    // creating our own copy constructor // our copy constructor copies only mentioned items by us
    heroo c3(44);
    heroo c4(c3);              
    cout<<"income of c3: "<<c3.income<<endl;             
    cout<<"income of c4: "<<c4.income<<endl;             
    cout<<"awards of c3: "<<c3.awards<<endl;             
    cout<<"awards of c4: "<<c4.awards<<endl;  

    // can also be written as  // to call copy constructor         
    heroo c5=c4;
    cout<<"income of c5: "<<c5.income<<endl;             
    cout<<"awards of c5: "<<c5.awards<<endl;     

    
   



}