// STL => standard template library

#include<iostream>
using namespace std;


// array

#include<array>
int main(){
    //int basic[3]={1,2,3};

    //   <datatype,size> name
    array<int,4> a={1,2,3,4};
    // its implementation  is done by fixed size static array
    
    // tells us how many elements are there in the data structure
    int size=a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Element at index 2: "<<a.at(2)<<endl;
    cout<<"Empty or not: "<<a.empty()<<endl;

    a[3]=7;

    cout<<"First element: "<<a.front()<<endl;
    cout<<"Last element: "<<a.back()<<endl;

    // all operations in O(1)

}