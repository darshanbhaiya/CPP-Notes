#include<iostream>
using namespace std;

// queue => line (FIFO)

#include<queue>

int main(){

    queue<string> q;

    q.push("darshan");
    q.push("loves");
    q.push("pataNahi");

    cout<<"first element : "<<q.front()<<endl;
    q.pop(); // first element is popped
    cout<<"first element : "<<q.front()<<endl;
    
    cout<<"size after popped : "<<q.size()<<endl;

    cout<<"Empty or not: "<<q.empty()<<endl;

//    l[2]=7; => not working here


// O(1) TC for each operation


}
    