#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;


int main(){

    unordered_map<string,int> m; 
    // keys are unique

    // insertion

    pair<string,int> pair1=make_pair("babbar",3);
    m.insert(pair1);

    pair<string,int> pair2("darshan",4);
    m.insert(pair2);

    m["doordarshan"]=5; // first time creation 

    // updation
    m["doordarshan"]=8; // then updation

    // searching or find
    cout<<"babbar: "<<m["babbar"]<<endl;
    cout<<"darshan: "<<m.at("darshan")<<endl;

    // cout<<"unknown_key: "<<m.at("unknown_key")<<endl;
    // gives error => out_of_range'

    m["unknown_key"]; // creates an key with value 0
    cout<<"unknown_key: "<<m.at("unknown_key")<<endl;
  
    // size
    cout<<"size of m: "<<m.size()<<endl; // no. of keys

    // to check presence of a key
    cout<<"to check weather darshan is present or not: "<<m.count("darshan")<<endl;
    cout<<"to check weather barshan is present or not: "<<m.count("barshan")<<endl;

    // erase
    m.erase("doordarshan");
    cout<<"size of m: "<<m.size()<<endl;

    // to access each element
    cout<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    
    // iterator
    unordered_map<string,int> :: iterator it=m.begin();
    while(it!= m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    cout<<endl;

    // in unordered map things are printed random => O(1)
    // in map (ordered map) things are printed in ascending order => based on BST => O(log(n))

    map<string,int> maa;
    maa["bhaiya"]=8;
    maa["aa"]=2;
    for(auto i:maa){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;


}