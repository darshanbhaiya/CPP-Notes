#include<iostream>
using namespace std;

int main(){
  //  int n;
  //  cout<<"Enter value on n : ";
  //  cin>>n;
  //  cout<<"Value of n is : "<<n<<endl;


  //  if(n==4)
  //   cout<<"i love you darshan"<<endl;


  //  if(n>0)
  //   cout<<"n is positive"<<endl;
  //  else if(n<0)
  //   cout<<"n is negative"<<endl;
  //  else
  //   cout<<" n is shunya"<<endl;

  //  int a,b;
  //  cout<<"Enter value of a and b : ";
  //  cin>>a>>b;
  //  cout<<"value of a nd b is : "<<a<<" "<<b<<endl;

   

  //  // cin doesn't read "_"(space), "\t"(tab), "\n"(enter) as input

  //  int c,d,e;
  //  cout<<"Enter value of cde : ";
  //  // .get takes char and as it is defined as int it convert it into its askii value
  //  c= cin.get();//it takes first char 
  //  d= cin.get();//it takes second char
  //  e= cin.get();//it takes third char
  //  // char may be \n or tab or space anything
  //  cout<<"value of c is : "<<c<<endl;
  //  cout<<"value of d is : "<<d<<endl;
  //  cout<<"value of e is : "<<e<<endl;
  
   char ch;
   cout<<"Enter ch : ";
   cin>>ch;

   if(ch>='a' && ch<='z'){
     cout<<"it is lower case";
   }
   else if(ch>='A' && ch<='Z'){
     cout<<"it is upper case";  
   }
   else if(ch>='0' && ch<='9'){
     cout<<"it is a number";
   }
   else{
     cout<<"it is a symbol";
   }
  
}