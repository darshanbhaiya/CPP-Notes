#include<iostream>
using namespace std;


// function signature
int power(int num1,int num2){
    //cout<<a<<endl;  'a' can't be accessed

    int ans=1;
    for(int i=1;i<=num2;i++){
        ans=ans*num1;
    }

    return ans;
}

bool isEven(int a){
    if(a&1)
      return 0;
    return 1;
}

int factorial(int n){
  int fact=1;

//   if(n==0)
//     return fact;   if not written still works

  for(int i=1;i<=n;i++)
    fact=fact*i;
  return fact;  
}

int nCr(int n,int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}

void printCounting(int n){
    for(int i=1;i<=n;i++)
      cout<<i<<" ";
    cout<<endl;  

    return; // return 'can' be used in void just to return flow
}

bool isPrime(int n){
    if(n==0)
      return 0;

    for(int i=2;i<n;i++){
        if(n%i==0)
          return 0;
    }

    return 1;
}

int setBits(int a,int b){
    int count=0;

    while(a!=0 || b!=0){
        int bit=a&1;
        if(bit==1)
          count++;
        a=a>>1;  

        int bitt=b&1;
        if(bitt==1)
          count++;
        b=b>>1;  
    }
    return count;

}

int fibonnaci(int n){
    if(n==1)
      return 0;
    if(n==2)
      return 1;

    int a=0,b=1,fibo;

    for(int i=1;i<=(n-2);i++){
        fibo=a+b;
        a=b;
        b=fibo;
    }    

    return fibo;
}

void dummy(int n){
    n++;
    cout<<"n is "<<n<<endl;
}

int main(){
    // Functions
    // return-type function-name arguments/parameters
    // body => return

    // return-type void/int/char/float/string/bool

    int a,b;
    cout<<"Enter numbers : ";
    cin>>a>>b;
    
    int answer=power(a,b);
    cout<<"Answer is : "<<answer<<endl;
    
    cout<<"Enter number : ";
    int num;
    cin>>num;

    if(isEven(num))
      cout<<"Even number"<<endl;
    else
      cout<<"Odd number"<<endl;
      
    int c,d;
    cout<<"Enter numbers : ";
    cin>>c>>d;

    int answerr=nCr(c,d);
    cout<<"nCr is : "<<answerr<<endl;

    cout<<"Enter number : ";
    int numm;
    cin>>numm;
      
    printCounting(numm);  

    cout<<"Enter number : ";
    int nummm;
    cin>>nummm;

    if(isPrime(nummm))
      cout<<"Prime number"<<endl;
    else
      cout<<"Not a prime number"<<endl;

    int e,f;
    cout<<"Enter numbers : ";
    cin>>e>>f;
    
    int answerrr=setBits(e,f);
    cout<<"Total set Bits : "<<answerrr<<endl;

    cout<<"Enter number : ";
    int nummmm;
    cin>>nummmm;

    cout<<"Fiboo : "<<fibonnaci(nummmm)<<endl;



    cout<<"Enter number : ";
    int nummmmu;
    cin>>nummmmu;
    
    dummy(nummmmu);
    cout<<"number n is "<<(nummmmu)<<endl;




}