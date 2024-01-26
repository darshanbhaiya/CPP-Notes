#include<iostream>
using namespace std;

class human{
    public:
        int height;
        int weight;
        int age;

        int getAge(){
            return this->age;
        }
        void setAge(int age){
            this->age=age;
        }

    private:
        int deathRate;

    protected:
        int birthRate;    


};


// male inherits human in public mode
class male:public human{

    public:
     string color;

     void sleep(){
        cout<<"soo ra hu bhai mai !!"<<endl;
     }


    // birth rate is now protected  => cannot be accessed outside function
    int getbirthRate(){
        return this->birthRate;
     }


    // death rate is not accessible
    // int getbirthRate(){
    //     return this->deathRate;      => error
    //  }


};  


// female inherits human in protected mode
class female:protected human{

    public:
     string color;

     void sleep(){
        cout<<"soo ra hu bhai mai !!"<<endl;
     }

     // height, weight, age are now protected => cannot be accessed outside function

     int getHeight(){
        return this->height;
     }

    // birth rate is now protected  => cannot be accessed outside function
    int getbirthRate(){
        return this->birthRate;
     }


    // death rate is not accessible
    // int getbirthRate(){
    //     return this->deathRate;   //  => error
    //  }



};

// trans inherits human in private mode
class trans:private human{

    public:
     string color;

     void sleep(){
        cout<<"soo ra hu bhai mai !!"<<endl;
     }

    // height, weight, age are now private => cannot be accessed outside function

     int getHeight(){
        return this->height;
     }

    // birth rate is now private  => cannot be accessed outside function
    int getbirthRate(){
        return this->birthRate;
    }


    // death rate is not accessible
    // int getbirthRate(){
    //     return this->deathRate;   //  => error
    //  }



};












int main(){

/*

    Inheritance : parent class ke saare properties and functions child class mai aa jayenge

    class parentClass{ };

    class childClass: accessModifier parentClass{ };

    Access Specifiers => 
                Public: The members that are public in the base class are derived as public in the derived class if derived publicly. These are accessible from anywhere outside the class.
                Private: Public or protected members of the base class become private members of the derived class when inherited privately. Private members are never inherited. 
                Protected: The protected members cannot be accessed outside the class, but they can be inherited.

    Protected : => kind of similar to private
                => can be accessed within same class but not outside the class
                => but child class can access it which private doesn't allow


*/

    male m1;
    cout<<"m1 age: "<<m1.age<<endl; // male inherits human so male can access all data members of human
    m1.weight=74;
    cout<<"m1 weight: "<<m1.weight<<endl; // public(parent class datamember) + public(child class mode) => public(child class datamember)

    cout<<"m1 height: "<<m1.height<<endl;
    cout<<"m1 color: "<<m1.color<<endl; // can also access its own properties

    m1.sleep(); // can access its own function
    m1.setAge(20); // male inherits human so male can access all functions of human
    cout<<"m1 age: "<<m1.getAge()<<endl;

/*

  Mode of inheritance : 

             Base class member |      Public        |   Protected       |   Private
             Access Specifier  |                    |                   |
             -----------------------------------------------------------------------------
             Public            | Public             | Protected         | Private
             Protected         | Protected          | Protected         | Private
             Private           | Not Accessible     | Not Accessible    | Not Accessible 




             Key points from the above table 

                    Private members are never inherited.
                    If publicly inherited, public members will be public and protected members will be protected.
                    If we inherit under a protected specifier, public and protected members become protected.
                    Protected members cannot be accessed in the driver function directly, just like private members; they can be accessed using other public or private or protected member functions.

            public: can be used outside class and in sub class        
            private: cannot be used outside class and not in sub class        
            protected: cannot be used outside class but in sub class        

*/

    // cout<<m1.income<<endl; // in accessible => as private data inherited publically

    female f1;
    // cout<<"f1 height: "<<f1.height<<endl; // 'height' is protected so cannot be accessed directly
    cout<<"f1 height: "<<f1.getHeight()<<endl; // public(parent class datamember) + protected(child class mode) => protected(child class datamember)

    trans t1;
    // cout<<"t1 height: "<<t1.height<<endl; // 'height' is private so cannot be accessed directly
    cout<<"t1 height: "<<t1.getHeight()<<endl; // public(parent class datamember) + private(child class mode) => private(child class datamember)




    male m2;
    // cout<<"m1 birthRate: "<<m1.birthRate<<endl; // 'birthRate' is protected so cannot be accessed directly
    cout<<"m1 birthRate: "<<m1.getbirthRate()<<endl; // protected(parent class datamember) + public(child class mode) => protected(child class datamember)

    female f2;
    // cout<<"f2 birthRate: "<<f2.birthRate<<endl; // 'birthRate' is protected so cannot be accessed directly
    cout<<"f2 birthRate: "<<f2.getbirthRate()<<endl; // protected(parent class datamember) + protected(child class mode) => protected(child class datamember)

    trans t2;
    // cout<<"t2 birthRate: "<<t2.birthRate<<endl; // 'birthRate' is private so cannot be accessed directly
    cout<<"t2 birthRate: "<<t2.getbirthRate()<<endl; // protected(parent class datamember) + private(child class mode) => private(child class datamember)




    male m3;
    // cout<<"m3 deathRate: "<<m3.deathRate<<endl; // 'deathRate' cannot be accessed
    // cout<<"m3 deathRate: "<<m3.getdeathRate()<<endl; // private(parent class datamember) + public(child class mode) => cannot be accessed
    female f3;
    // cout<<"f3 deathRate: "<<f3.deathRate<<endl; // 'deathRate' cannot be accessed
    // cout<<"f3 birthRate: "<<f3.getdeathRate()<<endl; // private(parent class datamember) + protected(child class mode) => cannot be accessed
    trans t3;
    // cout<<"t3 deathRate: "<<t3.deathRate<<endl; // 'deathRate' cannot be accessed
    // cout<<"t3 deathRate: "<<t3.getdeathRate()<<endl; // private(parent class datamember) + private(child class mode) => cannot be accessed


}