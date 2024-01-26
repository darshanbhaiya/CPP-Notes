#include<iostream>
using namespace std;

// stack => plates(LIFO)

#include<stack>

int main(){
    stack<string> s;

    s.push("darshan");
    s.push("loves");
    s.push("pataNahi");

    cout<<"Top element : "<<s.top()<<endl;
    s.pop(); // last element will be popped
    cout<<"Top element : "<<s.top()<<endl;

    cout<<"size of stack : "<<s.size()<<endl;
    
    cout<<"Empty or not: "<<s.empty()<<endl;

//    l[2]=7; => not working here
//    cout<<"First element: "<<s.front()<<endl; => not working here
//    cout<<"Last element: "<<s.back()<<endl;  => not working here


}
      

