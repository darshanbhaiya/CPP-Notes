#include<iostream>
#include<string.h>
using namespace std;

class hero{
    public :
        int health;
        char level;
        char *name;
        static int timeToComplete;

        hero(){
            cout<<"simple constructor is called"<<endl;
            name=new char[40];
        }

        hero(int health){
            this->health=health;
        }

        hero(int health,char level){
            this->health=health;
            this->level=level;
        }

        // default copy constructer is used => shallow copy

        void setName(char name[]){
            strcpy(this->name,name);
        }

        void print(){
            cout<<endl;
            cout<<"[ "<<name<<", "<<level<<", "<<health<<" ]";
            cout<<endl;
        }

        // destructor
        ~hero(){
            cout<<"destructor bhai called"<<endl;
        }

        static int kutchBhi(){
            // cout<<this->health<<endl; // error // can access only static members // 'this' not allowed
            cout<<" : inside static function : "; 
            return timeToComplete; // can access only static members


        }
};



int hero::timeToComplete=5;

int main(){

    /*

    H.W.
    "const" keyword : in object creation, in const function, in data member types
    initialisation list
    
    */

   /* 
   
   static keyword : => dataMember belongs to class
                    => property independent of object
                    => doesn't need object to access it
                    => can be also accessed using object => chal jata hai => but not recommended 
                                    => becoz it doesn't belong to object but to whole class
                    => common for all objects

                    // syntax to access the variable
                    initialise => dataType className :: dataMemberName = value;
                    // initialised outside the class

                    :: => scope resolution operator

   */

  cout<<"time to complete : "<<hero::timeToComplete<<endl; // doesn't need object to access it

  hero h1;
  cout<<"time to complete (h1): "<<h1.timeToComplete<<endl; // can be also accessed using object

  hero h2;
  h2.timeToComplete=10;

  cout<<"time to complete (h1): "<<h1.timeToComplete<<endl; // changed becoz it is same for whole class
  cout<<"time to complete (h2): "<<h2.timeToComplete<<endl;
  
  /*
  
  static function : => no need to create object to call it => use class name to call it
                    => this keyword nahi hota => becoz this => pointer to current object
                                => par yaha current object hi nahi hai
                    => can access only static members
                    => can be also called using object => chal jata hai => but not recommended 
                                    => becoz it doesn't belong to object but to whole class

  
  */

  cout<<"static function call: "<<hero::kutchBhi()<<endl;
  cout<<"static function call: "<<h1.kutchBhi()<<endl; // can be also called using object



}