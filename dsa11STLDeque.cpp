#include<iostream>
using namespace std;

// deque , double ended queue => push and pop operation at start and end
//   => no contiguous memory
//   => dynamic
//   => random access possible
//   front| | | | | |back

#include<deque>

int main(){
   deque<int> d;
   
   d.push_back(1);
   d.push_front(2);

   for(int i:d){
    cout<<i<<" ";
   }cout<<endl;
   
   d.pop_back();

   for(int i:d){
    cout<<i<<" ";
   }cout<<"pop back"<<endl;
   
   d.pop_front();

   for(int i:d){
    cout<<i<<" ";
   }cout<<"pop front"<<endl;

   d.push_back(1);
   d.push_front(2);
   d.push_front(5);

   cout<<"Element at index 0: "<<d.at(0)<<endl;
   cout<<"Element at index 1: "<<d.at(1)<<endl;
   cout<<"Element at index 2: "<<d.at(2)<<endl;
   cout<<"Empty or not: "<<d.empty()<<endl;

   d[2]=7;

   cout<<"First element: "<<d.front()<<endl;
   cout<<"Last element: "<<d.back()<<endl; 

    cout<<"Size before erase: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);  // d.erase(start,end) => del elments for start till end-1
    // here it deletes first element
    cout<<"Size after erase: "<<d.size()<<endl;

   for(int i:d){
    cout<<i<<" ";
   }cout<<endl;
   
   // size after erase is changed
   // max_size before and after erase is not changed
  

  // each function complexity O(1)
 
}

/*
begin => This function returns a bidirectional iterator pointing to the first element.

Input  : myvector{1, 2, 3, 4, 5};
         myvector.begin();
Output : returns an iterator to the element 1

Input  : myvector{"This", "is", "Geeksforgeeks"};
         myvector.begin();
Output : returns an iterator to the element This


end => This function returns a bidirectional iterator pointing to next to last element.

Input  : myvector{1, 2, 3, 4, 5};
         myvector.end();
Output : returns an iterator after 5

Input  : myvector{"computer", "science", "portal"};
         myvector.end();
Output : returns an iterator after portal


erase() => function is used to remove elements from a container from the specified position or range.

vector_name.erase(position);    for deletion at specific position
vector_name.erase(starting_position, ending_position);    // for deletion in range
*/