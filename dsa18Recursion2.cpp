#include<iostream>
using namespace std;

void reachHome(int src,int dest){
    cout<<"source: "<<src<<" :: destination: "<<dest<<endl;
    // base case
    if(src==dest){
        cout<<"Pohoch Gaya !!!"<<endl;
        return;
    }

    // processing : ek step aage badh jao
    src++;

    //recursive call
    reachHome(src,dest);
}

int fibonnaci(int n){
    // base case
    if( n==0 ) // 0th term
        return 0;
    if( n==1 ) // 1st term
        return 1;

    // recursive relation
    return fibonnaci(n-1)+fibonnaci(n-2);    

}

int fibonnaciii(int n){
    // base case
    if( n==1 ) // 1st term
        return 0;
    if( n==2 ) // 2nd term
        return 1;

    // recursive relation
    return fibonnaciii(n-1)+fibonnaciii(n-2);    

}

// refer notes
int climbStairs(int n) {
        
        if(n<0)
            return 0;

        if(n==0)
            return 1;

        return climbStairs(n-1)+climbStairs(n-2);        
    }

void sayDigits(int n){
    // base case
    if(n==0)
        return;

    // recursive call
    sayDigits(n/10);    

    // processing
    int digit=n%10;

    switch(digit){
        case 0 : cout<<"zero"<<" "; break;
        case 1 : cout<<"one"<<" "; break;
        case 2 : cout<<"two"<<" "; break;
        case 3 : cout<<"three"<<" "; break;
        case 4 : cout<<"four"<<" "; break;
        case 5 : cout<<"five"<<" "; break;
        case 6 : cout<<"six"<<" "; break;
        case 7 : cout<<"seven"<<" "; break;
        case 8 : cout<<"eight"<<" "; break;
        case 9 : cout<<"nine"<<" "; break;
    }    
    
}    

void sayDigitss(int n,string arr[]){
    // base case
    if(n==0)
        return;

    // recursive call
    sayDigitss(n/10,arr);    

    // processing
    int digit=n%10;
    cout<<arr[digit]<<" ";

    
    
}    

int main(){

    int src=1;
    int dest=11;

    reachHome(src,dest);

    // Fibonnaci numbers 0 1 1 2 3 5 8 13 ...
    // give nth fibonnaci number from 0th index => f(n)=f(n-1)+f(n-2)

    int n=5;
    cout<<"nth fibonnaci no starting fro 0th: "<<fibonnaci(n)<<endl;

    // give nth fibonnaci number from 1st index => f(n)=f(n-1)+f(n-2)
    cout<<"nth fibonnaci no starting from 1st: "<<fibonnaciii(n)<<endl;

    // climbStair Problem
    // https://leetcode.com/problems/climbing-stairs/submissions/1145013801/

    cout<<"possible combinations to climb n stairs: "<<climbStairs(n)<<endl;


    cout<<"T1 :: say digits 412: ";
    sayDigits(412);
    cout<<endl;
 
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<"T2 :: say digits 412: ";
    sayDigitss(412,arr);
    cout<<endl;



    

}


// technique to solve recursion => solve one case and check base cases , rest all leave on recursion


