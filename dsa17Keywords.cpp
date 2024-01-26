#include<iostream>
using namespace std;

// #include => pre processor directive => compile hone se pehele <file> code mai lakar copy kar di jayegi

// Macros
    // #define => used to define/create macro

    // if we used 3.14 at 100 places and now 3.14 is changed to 3.99 so we had to change it everywhere

    // double pi=3.14; => storage allocated => minimal performance issue
    // can be change by someone

    // #define PI 3.14 => no (;) => we created micro named PI

    // macro => a piece of code in a program that is replaced by value of macro

    // macro value cannot be changed // easy code maintainence // no extra memory used

    // read GFG article on macros

#define PI 3.14 // before compilation PI is replace by 3.14 => speedy and no extra memory used

// ______________________________________________________________________________________________________

// Local variable

    // function has a life between { ... } in which it is defined
    // it is freed after '}'



// ______________________________________________________________________________________________________

// Global Variable

    // share variable b/w functions => can be done by reference variable and global variable
    // same memory block can be accessed by multiple functions
    // variable which has life within whole program

int score=15;    // bad practice
                 // any one can change it and change will reflect every where
                 // use reference variable

void b(int &i){
    cout<<"i in b: "<<i<<endl;
    cout<<"score in b: "<<score<<endl;
    score++;
}

void a(int &i){
    cout<<"i in a: "<<i<<endl;
    cout<<"score in a: "<<score<<endl;
    b(i);
    
}    

// ______________________________________________________________________________________________________

// Inline functions

    // => used to reduce function call overhead
    // => function call stack mai add hota hai toh performance reduce hoti hai (minimal performance reduce hot hai) => function call overhead
    
    // stack
    // func()  => a,b  => memory usage and time => performance hit
    // main    => a,b

inline int getMax(int &a, int &b){
    return (a>b)?a:b;
}    

    // if function body is of one line make it inline => compiler maan jayega
    // if function body is of 2-3 line => compiler ki marzi
    // if function body is of greater than 3 line => compiler bolega nikal jaa => nai bana ra inline

    // what inline do
    // before compilation getMax(a,b) is replace by (a>b)?a:b
    // funcction is replaced by function ki body

    // increases readability
    // new storage and function call are reduced
    // no extra memory usage and no function call overhead

    //  inlining is only a request to the compiler, not a command. The compiler can ignore the request for inlining. 



// ______________________________________________________________________________________________________

// defaullt arguments

// make third argument optional
// if passed => consider it , if not => consider default

// important note => default arguments start from rightmost parameter/ argument
                                                    // =>void print(int arr[],int size=5,int start) => wrong
                                                    // =>void print(int arr[],int size,int start=2) => right
                                                    // =>void print(int arr[],int size=5,int start=2) => right
// can make all parameter default

void print(int arr[],int size,int start=2){
    // if not passed in function call consider start as 2
    cout<<"print : ";
    for(int i=start;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



// ______________________________________________________________________________________________________

// constant variable

        // The const variable cannot be left un-initialized at the time of the assignment.
        // It cannot be assigned value anywhere in the program.
        // Explicit value needed to be provided to the constant variable at the time of declaration of the constant variable.
        // refer gfg



int main(){
    // macros
    int r=5;
    float area=PI*r*r;
    cout<<"area: "<<area<<endl;

    // PI=PI+1; // error // macro cannot be changed


    // global variable
    int i=5;
    cout<<"i in main: "<<i<<endl;
    a(i);
    cout<<"score in main: "<<score<<endl;



    // local variable
    int x=5; // this 'x' is local variable for main func
    {
        int x=4;
        cout<<"x: "<<x<<endl; // this 'x' is local variable for this { ... }
        // new 'x' will have life within this braces
        // in this braces new 'x' will be used
    }
    cout<<"x: "<<x<<endl;


    // ternary operator

    // if(){

    // }
    // else(){

    // }

    // =====>  (condition) ? (if true toh kya answer) : ( if false toh kya answer) ;



    // Inline functions

    int a=1,b=2;
    int ans=0;
    ans=getMax(a,b); // getMax replaced by function body before compilation
    cout<<"ans: "<<ans<<endl;

    a=a+3;
    b=b+1;

    ans=getMax(a,b); // getMax replaced by function body before compilation
    cout<<"ans: "<<ans<<endl;


    // defaullt arguments

    int arr[5]={1,2,3,4,5};
    int size=5;
    print(arr,size,0);
    print(arr,size);


   // constant variable
   const int y = 10;
   
   int dar=5;  
   const int* j = &dar;

   dar=dar+1; // dar cab be changed
              // but address stored in j can'y be changed

    // y=y+1; //error // value can't be changed          



    


}