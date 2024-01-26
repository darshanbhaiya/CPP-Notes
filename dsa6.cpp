#include<iostream>
using namespace std;
#include<math.h>

int main(){
  // decimal to binary
  int n,c,ans=0,tempAns=0,i=0;
  cout<<"Enter a number : ";
  cin>>n;

  cout<<"1 for decimal to binary"<<endl;
  cout<<"2 for binary to decimal"<<endl;
  cout<<"Enter choice : ";
  cin>>c;
// for positive numbers only
 switch(c){
 
    case 1:
        // decimal to binary
        if(n>=0){
        while(n!=0){
            int bit=n&1;
            n=n>>1;
            ans=(bit*pow(10,i))+ans;
            i++;
        }
        }
        else{
            cout<<"Nahi aata bhai"<<endl;
        }
        cout<<"Binary is : "<<ans;  
        break; 

    case 2: 
        // binary to decimal
        while(n!=0){
            int digit=n%10;
            if(digit==1)
              ans=ans+pow(2,i);
            n=n/10;
            i++;
        }
        cout<<"Decimal is : "<<ans;  
        break;
 }  
}