#include<iostream>
using namespace std;

int factorial(int n){
    // sab se pehele base case likho
    if(n==0)
        return 1;

    // recursive relation
    return n*factorial(n-1);
    
}

int twoKiPower(int n){
    // base case
    if(n==0)
        return 1;

    // recursive relation
    return 2*twoKiPower(n-1);
       
}

void countingStraight(int n){
    // base case
    if(n==0)
        return;

    // recursive relation
    countingStraight(n-1);
    // processing
    cout<<n<<" ";
     

    // Head recursion
}

void countingReverse(int n){
    // base case
    if(n==0)
        return;

    // processing
    cout<<n<<" ";
    // recursive relation
    countingReverse(n-1);
      

    // Tail Recursion
}



int main(){

    // recursion => when a function calls itself directly or indirectly
    // eg: 
        // int a(){
        //     b();
        // }

        // int b(){
        //     a();
        // }


    //  recursion => bigger/complex problem solution depend on smaller problem of same type => use recursion
                //=> eg: 4!(badi prob)=4*(3!) => 3!(choti problem)

    // recursive relation => f(n)= c f(m)

    // base case/condition => situation we know and and there we have to stop
                    //     => return likhna mandatory hai

    // recursion => base case (rukjao) + recurance/recursive relation => both mandatory
            //   => write first ( base case) then recusive relation

    // if base case not written => segementation fault => call tab tak chalta hai jab tak stack overflow nahi ho jaata
    // stack full => segementation fault
    // eg: 
            // memory full => stack over flow => segementation fault => hence base case is mandatory
            // ...
            // fact(-999999999)
            // ...
            // fact(-1)
            // fact(0)
            // fact(1)
            // fact(2)
            // ...
            // fact(6)
            // main() => n=6
            // STACK => function call stack / recursive call stack

    // function calls from original case till base case        
    // small problem return a value to solve bigger problem from base case towards original case

    // recursion => base case (mandatory) + recursive relation (mandatory) + processing (not mandatory)
                                                                        // => print,update

    /*
            func(){                                                                 func(){
                Base Case                                                               Base Case
                Processing                                                              Recursive Relationship
                Recursive Relationship                                                  Processing 
            }                                                                       }
            
            // Tail Recursion                                                      // Head Recursion                                                                  
    
    */


    int n=5;

    // factorial
    cout<<"factorial of 5: "<<factorial(n)<<endl;
    cout<<"factorial of 0: "<<factorial(0)<<endl;

    // 2 ki poower n
    cout<<"2 ki power of 5: "<<twoKiPower(n)<<endl;
    cout<<"2 ki power of 0: "<<twoKiPower(0)<<endl;

    // print counting 5 4 3 2 1
    cout<<"counting reverse: ";
    countingReverse(n);
    cout<<endl;

    // print counting 1 2 3 4 5
    cout<<"counting straight: ";
    countingStraight(n);
    cout<<endl;





    
}