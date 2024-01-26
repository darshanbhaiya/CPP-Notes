#include<iostream>
using namespace std;

// count prime
// sieve of eratosthenes
// 1. mark all as prime from 2 to n
// 2. mark all as un prime which comes in table of prime selected and then go to next prime and repeat step 2

// class Solution {
// public:
//     int countPrimes(int n) {
        
//         int count =0;
//         vector<bool> prime(n+1,true);

//         prime[0]=prime[1]=false;

//         for(int i=2;i<n;i++){
//             if(prime[i]){
//                 count++;
//                 for(int j=i*2;j<n;j=j+i){
//                     prime[j]=false;
//                 }
//             }
//         }

//         return count;
//     }
// };

// TC O( n log(log n) )


// _______________________________________________________________________________________________



// HCF/GCD

int gcd(int a,int b){
    if(a==0)
        return b;

    if(b==0)
        return a;

    while(a!=b){
        if(a>b)
            a=a-b;
        else
            b=b-a;    
    }        

    return a;
}


int main(){
    int a,b;
    cout<<"enter 2 numbers: ";
    cin>>a>>b;

    cout<<"GCD is : "<<gcd(a,b);
}


// _______________________________________________________________________________________________

// modulo mathematics/arihematics

    // (a+b)%m = a%m + b%m;
    // a%m - b%m = (a-b)%m;
    // (a%m) * (b%m) = (a*b)%m;
    // ((a%m)%m)%m ... = a%m

// _______________________________________________________________________________________________


// fast exponentiation

// int modularExponentiation(int x, int n, int m) {
// 	int result=1;

// 	while(n>0){
// 		// odd
// 		if(n&1){
// 				result=(1LL * (result)%m * (x)%m)%m;
// 		}

// 		x=(1LL *(x)%m * (x)%m)%m;
// 		n=n>>1;   // less expensive as compared to n=n/2;
// 	}
// 	return result;
// }

