#include<iostream>
using namespace std;

// set => stores unique elements only
//     => cannot modify, only insert or delete
//     => elements fetched in sorted manner

// unordered set => fast
//               => elements fetched in random manner

#include<set>

int main(){

    set<int> s;

    s.insert(5); //O(log n)
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(2);
    s.insert(5);

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    s.erase(s.begin());
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    // s.erase(s.begin()+2); // error

    set<int>::iterator it=s.begin();
    it++;

    s.erase(it);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"count or 5 present or not : " <<s.count(5)<<endl;
    cout<<"count or -5 present or not : " <<s.count(-5)<<endl;

    // find => if found return its iterator or address of it
    set<int>::iterator itr=s.find(5);
    cout<<"value present at itr : "<<*itr<<endl;

    s.insert(7);
    s.insert(8);

    for(auto i=itr;i!=s.end();i++){
        cout<<*i<<" ";
    }cout<<endl;

    // insert, count, erase, find => O(log n)

     cout<<"Empty or not: "<<s.empty()<<endl;
     cout<<"size: "<<s.size()<<endl;
     cout<<"max size set can hold: "<<s.max_size()<<endl;
     //O(1)

    cout << "s after removal of elements less than 7 :  ";
    s.erase(s.begin(), s.find(7));
    for (auto i = s.begin(); i != s.end(); i++) {
        cout << *i << " ";
    }
} 