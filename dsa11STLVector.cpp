#include<iostream>
using namespace std;

//  vector
//      => dynamic array(change its size)
//      => store in contiguous memory location
//      => as soon as it is filled , it doubles its size => creates new array and copies old elements
//      => 

#include<vector>

int main(){
    //    <datatype> => initialize with 0 size
    vector<int> v;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(1); // add element 1
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(2); // add element 2
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(3); // add element 3
    cout<<"Capacity : "<<v.capacity()<<endl;

    cout<<"Size: "<<v.size()<<endl;
   
   // there is difference between size and capacity

    cout<<"Element at index 2: "<<v.at(2)<<endl;
    cout<<"Empty or not: "<<v.empty()<<endl;

    v[2]=7;

    cout<<"First element: "<<v.front()<<endl;
    cout<<"Last element: "<<v.back()<<endl;

    cout<<"Last element before pop: "<<v.back()<<endl;

    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back(); // remove last element

    cout<<"Last element after pop: "<<v.back()<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;


    // size changes nut capacity remains same
    cout<<"Size and Capacity before clear: "<<v.size()<<" "<<v.capacity()<<endl;
    v.clear();
    cout<<"Size and Capacity before clear: "<<v.size()<<" "<<v.capacity()<<endl;

   // initialize vector with capacity 5 and initial values of all with 1 by default is zero
   vector<int> a(5,1);
   for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size and Capacity of a: "<<a.size()<<" "<<a.capacity()<<endl;

    vector<int> b(5);
   for(int i:b){
        cout<<i<<" ";
    }cout<<endl;

   // copy vector "a" in "c"
   vector<int> c(a);
   for(int i:c){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> vi={1,3,6,7};
    for(int i:vi){
        cout<<i<<" ";
    }cout<<endl;


    vector<bool> vec(22);  // vector  of size 22
    // vector<bool> prime(n+1,true); // vector of size n+1 and marked all as true

   


}