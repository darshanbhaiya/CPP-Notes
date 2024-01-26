#include<iostream>
using namespace std;

// doubly linked list
//     => two pointer front and back
//     => no direct access
    
#include<list>

int main(){

    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

   //cout<<"Element at index 2: "<<l.at(2)<<endl; => not working here
   cout<<"Empty or not: "<<l.empty()<<endl;

   //l[2]=7; => not working here

   cout<<"First element: "<<l.front()<<endl;
   cout<<"Last element: "<<l.back()<<endl; 

  // erase TC => O(n)

   l.erase(l.begin());
   cout<<"after erase : ";
   for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.push_back(1);
    l.push_front(2);
    l.pop_back();
    l.pop_front();

   for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

  cout<<"size of list : "<<l.size()<<endl;

  // copy list
  list<int> n(l);
  
   for(int i:n){
        cout<<i<<" ";
    }cout<<endl;

  // 5 element with each 100
  list<int> m(5,100);

   for(int i:m){
        cout<<i<<" ";
    }cout<<endl;
}