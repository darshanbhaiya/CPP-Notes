#include<iostream>
using namespace std;

// priority queue => first element will be greatest(max_heap) => max or min element will be popped
//   max_heap => max element will come out (default)
//   min_heap => min element will come out


#include<queue>

int main(){

    //max heap
    priority_queue<int> maxi;  // by default max heap ka bana => jab bhi element fetch karenge toh greatest element pop hoga

    //min heap

    priority_queue<int,vector<int>,greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    // size is reducing
    // for(int i=0;i<maxi.size();i++){
    //     cout<<maxi.top()<<" ";
    //     maxi.pop();
    // }cout<<endl;

    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;



    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

   cout<<"Empty or not: "<<maxi.empty()<<endl;
}