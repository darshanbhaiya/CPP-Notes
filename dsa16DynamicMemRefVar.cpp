#include<iostream>
using namespace std;

// passed by value => copy create hui hai
// new memory is created for that copied variable
// changes in that won't affect original
void update1(int n){
    n++;
}



// passed by reference => diff name but same address
// n is referenced variable => same memory location but different name
void update2(int &n){
    n++;
}


// a, num , ans are local variable
// once function is executed they are destroyed
// very very bad practice
// returns nothing
// they may get changed or can't be accessed
int& func(int a){
    int num=a;
    num++;
    int &ans=num;
    cout<<"size of Ref var: "<<sizeof(ans)<<endl;
    return ans;
}



// n, ptr are local variable
// once function is executed they are destroyed
// very very bad practice
// returns nothing
// they may get changed or can't be accessed
int *funn(int n){
    int *ptr=&n;
    return ptr;
}



int getSum(int *arr, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i]; // arr[i]=*(arr+i)
    }
    return sum;

}




int main(){
    // reference variable => ek cheez (same memory) aur do naam

    int i=5;
    int &j=i; // way to create reference variable

    i++;
    j++;

    cout<<"i and &i: "<<i<<" "<<&i<<endl;
    cout<<"j and &j: "<<j<<" "<<&j<<endl;
    // same value and address

    int n=5;

    cout<<"before u1: "<<n<<endl;
    update1(n);
    cout<<"after u1: "<<n<<endl;

    cout<<"before u2: "<<n<<endl;
    update2(n);
    cout<<"after u2: "<<n<<endl;

  /*

    int &ans=func(n); // bad practice
    cout<<"ans: "<<ans<<endl;
    cout<<"n: "<<n<<endl;

    int s=6;
    int *ptr=funn(s); // bad practice
    cout<<"*ptr: "<<*ptr<<endl;

    // becoz of this code error if given further so it is commented
    // as un authorized memory accessed or virus
*/

    int size;
    // cin>>size; let
    size=5;
    int arr[size]; // bad practice // creating variable size array
    // run time pe bata rahe array kitna bada hoga
    // size compile time pe pata hona chahiye

    // program starts by assignation of memory into two types stack and heap
    // stack is small and heap is big
    // array ko memory stack se allocate hoti hai
    // if size is known already , size is allocated accordingly for stack at compile time
    // if we give size at run time program may crash due to less size of stack

    // we were using stack to allocate memory for int i=5 ; int arr[10] ; char ch;

    // we use heap memory to make variable size array
    // we use 'new' keyword to use heap memory

    // stack memory => static allocation
    // heap memory => dynamic memory allocation

    new char; // this statement return an address of block in heap memory created for a character
              // we can't give name in heap memory
              // so we use pointer to access that location

    char *ch=new char;  // in this way we allocate memory in heap and use pointer to access it
                        // pointer is created in stack only
                        // in this case in total 9 byte of memory is used


    // pointer take 8 byte in 64 bit system                    
    // pointer take 4 byte in 32 bit system                

    int *intt=new int;  // in this case in total 12 byte of memory is used
                        // pointer is created in stack
                        // integer is created in heap

    
    int *ary=new int[6]; // in this case in total 32 byte of memory is used
                         // pointer is created in stack => static allocation
                         // array is created in heap => dynamic memory allocation




    int sizze;
    // cin>>sizze;
    sizze=6;
    int *arry=new int[sizze]; // good practice // creating variable size array
    cout<<"Enter 6 elements: ";
    for(int i=0;i<sizze;i++){
        cin>>arry[i];
    }

    cout<<"print arry sum: "<<getSum(arry,sizze)<<endl;

    // dif b/w static          and           dynamic allcation

    // int arr[50];                        int *arr=new int[50];
    //    200 bytes (stack)                    208 bytes (200 heap , 8 stack)

/*
    // case 1
    while(true){
        int i=5; // => memory created and freed => at a moment 4 byte memory is used; => static allocatiom
    }



    // case 2
    while(true){
        int *i=new int; // => dynamic allocatiom
        // 8 byte stack and 4 byte heap
        // after one round stack is freed but heap is not freed
        // at n round = 8 bytes + 4*n bytes

        // program crash
    }


    
    // in static allocation => memory is automatically freed after its life
    // in dynamic allocation => memory has to be freed manually => use 'delete' keyword to release it

    while(true){
        int *i=new int; // => dynamic allocatiom
        // 8 byte stack and 4 byte heap
        delete i; // syntax to delete single element
        // now after one round stack is freed automatically but heap is freed manually
        // at n round = 8 bytes + 4 bytes
    }

    int *arrray=new int[50];
    delete []arrray; // syntax for array deletion

    // always free heap memory after use manually


*/






/*

    // void ponter => A void pointer is a pointer that has no associated data type with it. 
                    // A void pointer can hold an address of any type and can be typecasted to any type.

                    eg: int a = 10;
                        char b = 'x';
                    
                        // void pointer holds address of int 'a'
                        void* p = &a;
                        // void pointer holds address of char 'b'
                        p = &b;

                        
    // address typecasting

*/

}