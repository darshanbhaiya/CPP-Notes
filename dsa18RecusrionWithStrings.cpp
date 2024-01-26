#include<iostream>
using namespace std;

// pass by reference
void reverse(string &str,int s,int e){
    // base case
    if(s>e)
        return;
    // processing 
    swap(str[s],str[e]);    
    // recursive call
    reverse(str,++s,--e);
}

// str.length() returns unsigned int => when it is zero it returns biggest value => so type cast it with (int)
// using one pointer.
void reversee(string &str,int s){
    // base case
    if(s>(int)str.length()-s-1)
        return;
    // processing 
    swap(str[s],str[(int)str.length()-s-1]);    
    // recursive call
    reversee(str,++s);
}

// using one pointer.
void reverseee(string &str,int e){
    // base case
    if((int)str.length()-e-1>e)
        return;
    // processing 
    swap(str[(int)str.length()-e-1],str[e]);    
    // recursive call
    reverseee(str,--e);
}

void reverseeee(string &str,int length){
    // base case
    if((int)str.length()-length>length-1)
        return;
    // processing 
    swap(str[(int)str.length()-length],str[length-1]);    
    // recursive call
    reverseeee(str,--length);
}


bool checkPalindrome(string &str,int s,int e){
    // base case
    if(s>e)
        return 1;
    
    if(str[s]!=str[e])
        return 0;
    // recursive call
    
    return checkPalindrome(str,++s,--e);
}


bool checkPalindromee(string &str,int length){
    // base case
    if((int)str.length()-length>length-1)
        return 1;
    
    if(str[(int)str.length()-length]!=str[length-1])
        return 0;
    // recursive call
    return checkPalindromee(str,--length);
}



// refer basic maths notes
int power(int a,int b){
    // base case
    if(b==0)
        return 1;
    if(b==1) // not necessary
        return a;
    int answer=power(a,b/2);
    if(b&1)
        return a*answer*answer;
    return answer*answer;    

}

void bubbleSort(int *arr,int size){
    // base case
    if(size==0 || size==1)
        return;
    // largest element ko last mai pohochao
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    }    

    bubbleSort(arr,size-1);

}


int main(){

    // give reverse of string using recursion

    string name="darshan";

    reverse(name,0,name.length()-1); // start index  end index
    cout<<"reverse : "<<name<<endl;

    reversee(name,0); // start index
    cout<<"reverse (one pointer): "<<name<<endl;

    reverseee(name,name.length()-1); // end index
    cout<<"reverse (one pointer): "<<name<<endl;

    reverseeee(name,name.length()); // length
    cout<<"reverse (one pointer): "<<name<<endl;

    string pal="baab";

    cout<<"check palindrome : "<<checkPalindrome(pal,0,pal.length()-1)<<endl;

    cout<<"check palindrome (one pointer): "<<checkPalindromee(pal,pal.length())<<endl;

    int a=2,b=4;
    cout<<"a to the power b: "<<power(a,b)<<endl;

    int arr[5]={2,5,1,6,9};
    bubbleSort(arr,5);
    cout<<"sorted array: ";
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

}