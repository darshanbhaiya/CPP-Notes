#include<iostream>
using namespace std;

// MAP => data stored in key value pair
//     => keys are unique
//     => each key points to unique element only
//     => values can be same but keys will be always different

#include<map>

int main(){
  map<int,string> m;

  m[1]="darshan";
  m[13]="hai";
  m[2]="badmash";
  m.insert({0,"pagal"});
  
  // stored in ordered manner by default wrt keys
  // for unorder un ordered map is used

  for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
  }cout<<endl;


  cout<<"count or 13 present or not : "<<m.count(13)<<endl;
  cout<<"count or -13 present or not : "<<m.count(-13)<<endl;

  cout<<"after erase "<<endl;
  m.erase(13);
  for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
  }cout<<endl;


  // find returns iterator of that particular element 
  auto it=m.find(1);
  for(auto i=it;i!=m.end();i++){
    cout<<(*i).first<<" "<<(*i).second<<endl;
  }


  // erase, count, find, insert => O(log n)

   cout<<"Empty or not: "<<m.empty()<<endl;
   cout<<"size: "<<m.size()<<endl;

}