#include<iostream>
using namespace std;
int main(){
// Increment/Decrement operator
//     i++ post increment => use karne ke baad badhao => pehele use karo fir badhao
//     ++i pre increment => use karne ke pehele badhao => pehele badhao fir use karo
//     i-- post drcrement
//     --i pre decrement

//     i++/++i  i=i+1 i+=1

  int i=1;
  int a=i++; // pehele use karo fir badhao a=1 then i incremented to 2
  cout<<i<<" "<<a<<endl;

  int j=3,b=2,sum;
  sum=j+(b++); //3+2 then b incremented to 3
  cout<<sum<<" "<<j<<" "<<b<<endl;

  int k=1;
  int c=++k; // pehe increment then use karo 
  cout<<k<<" "<<c<<endl;

  int l=3,d=2,summ; 
  summ=l+(++d); // increment then add
  cout<<summ<<" "<<l<<" "<<d<<endl; 
  
  int z=7;
  cout<<(++z)<<endl;
  //8 z=8
  cout<<(z++)<<endl;
  //8 z=9
  cout<<(z--)<<endl;
  //9 z=8
  cout<<(--z)<<endl;
  //7 z=7





 }