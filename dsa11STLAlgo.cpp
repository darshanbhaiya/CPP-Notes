#include<iostream>
#include<vector>
using namespace std;

// array mai location and vector mai iterator

#include<algorithm>

int main(){
    vector<int> v={1,3,6,7,8};
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    // arrary must be sorted
    cout<<"Binary Search finding 5: "<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<"Binary Search finging 6: "<<binary_search(v.begin(),v.end(),6)<<endl;
    
    // array must be sorted
    cout<<"Lower Bound : "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper Bound : "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=3;
    int b=5;

    cout<<"max : "<<max(a,b)<<endl;
    cout<<"min : "<<min(a,b)<<endl;

    swap(a,b);
    cout<<a<<" "<<b<<endl;

    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<"string : "<<s<<endl;
    

    // It rotates the order of the elements in the range [first, last], 
    // in such a way that the element pointed by the middle becomes the new first

    // Left Rotation: To rotate left, we need to add the vector index. For example, you have to rotate the vector left 3 times. 
    //         The 3rd index of the vector becomes the first element. vec.begin() + 3 will rotate vector 3 times left.
    // Right Rotation: To rotate right, we need to subtract the vector index. For example, you have to rotate the vector right 3 times. 
    //         The 3th last index of the vector becomes the first element. vec.begin()+vec.size()-3 will rotate vector 3 times right.

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    //sort works on intro sort => combination of three algo => (quick, heap, insertion) sort

}


// Iterator lower_bound (Iterator first, Iterator last, const val)  
// lower_bound returns an iterator pointing to the first element in the range [first,last) 
// which has a value not less than ‘val’  and if the value is not present in the vector then 
// it returns the end iterator.
// => vo element ya usse just bada element

// Iterator upper_bound (Iterator first, Iterator last, const val)
// upper_bound returns an iterator pointing to the first element in the range [first,last) 
// which has a value greater than ‘val’  and if the value is not present in the vector then 
// it returns the end iterator.
// => just bada element