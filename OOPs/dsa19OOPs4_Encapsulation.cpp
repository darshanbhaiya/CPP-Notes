#include<iostream>
using namespace std;

class student{

    // encapsulation
    private:
        string name;
        int age;
        int height;

    public :
        int getAge(){
            return this->age;
        }    


};

int main(){

    /*
    datamembers = properties = states
    functions = methods = behaviour

    Encapsulation => wrapping up data members and functions => single entity coming => encapsulationn achieved
                  => functions and data members wrapped in a capsule ( cxapsule = class)

        Fully encapsulated class => all data members marked as private
                                 => data members can be accessed only in same class
                                 => no other class can access it directy

        Advantages => information / data hiding => security increases
                   => if we want we can make class read only => getter banao , setter mat banao
                   => code reusability
                   => helps in unit testing

    
    
    */

   student s1;
   cout<<"age of s1: "<<s1.getAge()<<endl;
   cout<<"sab sahi chal raha hai"<<endl;

}