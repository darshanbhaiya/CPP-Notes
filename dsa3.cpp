#include<iostream>
using namespace std;

int main(){  
    
    //Bitwise operator 
    // AND -> &
    // OR -> |
    // NOT -> ~
    // XOR -> ^

    int a=4,b=6;

    cout<<"a&b = "<<(a&b)<<endl;//give brackets
    cout<<"a|b = "<<(a|b)<<endl;
    cout<<"~a = "<<~a<<endl;    // int is of 4bytes so 32 bits will be inverted
    cout<<"a^b = "<<(a^b)<<endl;
    
    // 1 is also called set bit

    // Left shift
    cout<<(5<<1)<<endl;
    cout<<(3<<3)<<endl;
    // 5<<1 = 5 ko 1 baar left shift kar do  ...101=...1010 no. becomes double
    // 3<<2 = 3 ko 2 baar left shift kar do  ...11=...1100  no. becomes eight times
    //                                                 but for big numbers it becomes negative
    // jitne bar left shift karte utne baar no. 2 se multiplt hota , but for bigger no.s it becomes -tive becoz last bit becomes one
    
    // Right shift
    // 15>>1 = 15 ko right shift karo 1 baar ...11110=...1111 no. becomesa half once i.e 7
    // 5>>2 = 5 ko do baar right shift karo  ...101=...001 no. becomes half twice i.e. 1
    // jitne bar right shift karte utne baar no. 2 se divide hota 
    cout<<(15>>1)<<endl;
    cout<<(5>>2)<<endl;

    // in left and right shift for positive no. padding is done with '0'
    // i.e new spaces replaced by 0

    // in left and right shift for negative no. padding is 'compiler dependent'
    // i.e new spaces replaced by 0 or 1

    
}