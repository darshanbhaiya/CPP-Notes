#include<iostream>
using namespace std;

 int main(){
//     switch(expression){
//         case constant:
                // constant can be integer or character
                // float string not allowed
//           break;

//         case constant:
//            break;

//         default :
               // not mandatory
            
//     }


// if switch case is used in infinite lop we can use exit() to break it
// continue statement not valid in switch case
char ch='1';
int num=1;
switch(ch){
    case 1:
      {cout<<"Number One"<<endl;}
      break;

    case '1':
      cout<<"Character One"<<endl;
      switch(num*2){
        case 2:
        cout<<"Number 2"<<endl; 
        
        case 1:
          cout<<"Number 1"<<endl;
      }
      break;

    default :
      cout<<"It is default case";    

}

//calculator
int a,b;
cout<<"Enter value of a and b : ";
cin>>a>>b;

char op; 
cout<<"Enter operator : ";
cin>>op;

switch(op){
    case '+': cout <<a+b; break;
    case '-': cout <<a-b; break;
    case '*': cout <<a*b; break;
    case '/': cout <<a/b; break;
    case '%': cout <<a%b; break;
    default : cout <<"Enter valid operator";
}


cout<<endl;
int amt;
cout<<"Enter amount : ";
cin>>amt;

switch(100){
    case 100:
      cout<<amt/100<<" notes"<<endl;
      amt=amt-((amt/100)*100);   // int/int=int
     
    case 50:
      cout<<amt/50<<" notes"<<endl;
      amt=amt-((amt/50)*50);
      
    case 20:
      cout<<amt/20<<" notes"<<endl;
      amt=amt-((amt/20)*20);

    case 1:
      cout<<amt/1<<" notes"<<endl;
      amt=amt-((amt/1)*1);
      
}
cout<<amt<<endl;

}