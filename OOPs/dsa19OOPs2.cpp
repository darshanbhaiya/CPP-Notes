#include<iostream>
#include<string.h>
using namespace std;

class hero{
    public :
        int health;
        char level;
        char *name;

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
};


class heroo{
    public :
        int health;
        char level;
        char *name;

        heroo(){
            cout<<"simple constructor is called"<<endl;
            name=new char[40];
        }

        heroo(int health){
            this->health=health;
        }

        heroo(int health,char level){
            this->health=health;
            this->level=level;
        }

        // making our own copy constrycter => deep copy
        heroo(heroo &temp){
            cout<<"copy constructer called"<<endl;

            char *ch=new char[strlen(temp.name)+1]; // +1 for null character // temp is not a pointer => temp and object(let h1) have same memory block with same name
            strcpy(ch,temp.name);
            this->name=ch;

            this->health=temp.health;
            this->level=temp.level;
        }

        void setName(char name[]){
            strcpy(this->name,name);
        }

        void print(){
            cout<<endl;
            cout<<"[ "<<name<<", "<<level<<", "<<health<<" ]";
            cout<<endl;
        }
};



int main(){

    /*

     shallow and deep copy

     shallow copy => made by default copy constructor
                  => refer notes 

     deep copy => refer notes             
    
    */

   cout<<endl<<"SHALLOW COPY"<<endl;
   // shallow copy

   hero h1;

   h1.health=4;
   h1.level='D';
   char name[8]="darshan";
   h1.setName(name);

   h1.print();

   // use default copy constructer
   hero h2(h1);
   h2.print();

   h1.name[0]='X';

   h1.print();
   h2.print(); // name is also changed in h2 // shallow copy // refer notes

   cout<<endl<<"DEEP COPY"<<endl;
   // deep copy

   heroo h3;

   h3.health=4;
   h3.level='D';
   h3.setName(name);

   h3.print();

   // use default copy constructer
   heroo h4(h3);
   h4.print();

   h3.name[0]='X';

   h3.print();
   h4.print(); // name is not changed in h4 // deep copy // refer notes

   cout<<endl<<"COPY ASSIGNMENT OPERATOR"<<endl;
   /*
    copy assignment operator => '='
                             => to copy already created objects
                             => refer notes
   
   */

   hero a(10,'A');
   char sname[10]="bhaiya";
   a.name=sname;

   hero b(20,'B');
   char ssname[10]="dhaiya";
   b.name=ssname;

   a.print();
   b.print();

   a=b; // copy assignment operator
                // ye sab hua hai
                // a.name=b.name; => shallow copy
                // a.health=b.health;
                // a.level=b.level;

   a.print();
   b.print();

   a.name[0]='x';

   a.print();
   b.print();


   cout<<endl<<"DESTRUCTOR"<<endl;

   /*
   
    destructor => to deallocate memory
               => when object are just going to be out of scope destructors are called automatically
                     {
                        hero a;
                        // created


                        // just going to be out of scope => destructor called automatically
                     } 
               => after class is created , destructor is also created  automaticxaly  
               => name same as class name => ~className(){ }
               => no return type    
               => no input parameter

               => for statically created objects , destructors are called automatically
               => for dynamically created objects , destructors have to be called manually

               => once you create your own destructor , destructor created automatically while creating class dies
   
   */

  // static creation
  hero x;
  // dynamic creation
  hero *y=new hero; // or hero *y=new hero();

   



delete y; // destructor called to delete dynamically created object manually
// destructor called atomatically for " static objects " only

// constructor and destructor are called only "once" for an object while creation and destruction resp.


}