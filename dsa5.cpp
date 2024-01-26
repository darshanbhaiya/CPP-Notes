#include<iostream>
using namespace std;

int main(){
    // for(initialization(one time);condition;updation(increment-decrement)) 
    // initilization(one time) => condition =>  body  => updation(increment/decrement) => condition => Body ...     => condition is false    
   
    // nothing is compulsory

    //while(true){condition}

    // break; from currentt nearest loop
    // continue; to skip remaining part of code or to skip particular iteration

    //for(int a=0,b=1,c==1;a<=0 && c>=1 && b<=1;a++,b++,c--)

    for(int i=1;i<3;++i){
       cout<<i<<" ";
    }
    // will go normally only

   cout<<endl<<"---------"<<endl;

    // fibonacci series  0 1 1 2 3 5 8 13 21 ...

    int a=0,b=1,sum;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=10;i++){
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
      
    }
    
    cout<<endl<<"---------"<<endl;

    // prime number
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool isprime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime==1)
      cout<<"is prime"<<endl;
    else
      cout<<"not prime"<<endl;  

     cout<<endl<<"---------"<<endl;

    for(int i=0;i<5;i++){
        cout<<i<<" ";
        cout<<"hi"<<" "<<"hey"<<" "<<endl;
        continue;
        cout<<"reply to kar de"<<endl;
        
    }

    cout<<endl<<"---------"<<endl;

    // variables and scope
    
    int f=3;
    cout<<f<<endl;

    if(true){
        int f=5,g=0;
        cout<<f<<endl;
    }
    cout<<f<<endl;
    // cout<<g<<endl;  //error out of scope

    //int f=9; // redefinition not allowed

    int q=-95;

    for(int q=1;q<=2;q++){
        cout<<q<<" ";
    }
    cout<<endl<<q<<endl;
    


    int m=1;
    if(1){
        int m=2;
        if(1){
            int m=3;
            if(1){
                int m=4;
                if(1){
                    cout<<m<<endl;
                    // ek block mai same variable nahi bana sakte
                    // ek block ke annder dusre block mai same variable bana sakte , if created it will be used otherwise original will be used

                }
            }
        }
    }

    // operator precedence => use bracket
    // how to check if last bit is one (n&1)



}

