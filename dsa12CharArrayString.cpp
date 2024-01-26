#include<iostream>
using namespace std;

// in function original character array changes but string remain same

// no need to pass size
int getLength(char str[]){
    int l=0;
    for(int i=0;str[i]!='\0';i++){
        l++;
    }
    return l;
} 

void getReverse(char str[]){
    int s=0;
    int e=getLength(str)-1;

    while(s<e){
        swap(str[s++],str[e--]);
    }
    
}

char toLowerCase(char ch){
    if(ch>='a' && ch<='z')
       return ch;
    else
       return ch-'A'+'a';   

    // upper case to lower case => ch-'A'+'a'   
    // lower case to upper case => ch-'a'+'A'   
    // char to number => ch-'0'   eg: '1' to 1
    // difference + case we want = resultant character
}

bool checkPalindrome(char str[]){
    int s=0;
    int e=getLength(str)-1;

    while(s<e){
        if(toLowerCase(str[s++])!=toLowerCase(str[e--]))
          return 0;
    } 

    return 1;
}

string reverseTillSpace(string s){

    int st=0;
    int e=0;

    for(int i=0;i<s.length();i++){
        
        while(s[i]!=' ' && i<s.length())
           i++;

        e=i-1;

        while(st<e){
            swap(s[st++],s[e--]);
        }

        st=i+1;
    }
    return s;
}

char getMaxOccuringCharacter(string s){
    
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch>='a' && ch<='z'){
            int n=ch-'a';
            arr[n]++;
        }
        else{
            int n=ch-'A';
            arr[n]++;
        }
    }

    int maxi=-1;
    int ans=-1;
    for(int i=0;i<26;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
            ans=i;
        }
    }

    return char(ans+'a');

    // TC=O(n) SC=O(1)
}

int main(){
    // string => 1D char array

    char name[10];
    cout<<"enter name : ";
    cin>>name;

    // cin stop execution when space( ) , tab(\t) , newline/enter(\n)
    // use cin.getline(str,len);
    
    cout<<"tera name : "<<name<<endl;

    // |d|a|r|s|h|a|n|\0| | | 

    // "\0" => NULL character => added by default +> ASCII(0) => used as terminator

    // |d|a|r|\0|s|h|a|n|\0| | |  => only dar will be printed

    name[5]='\0';
    cout<<"tera name : "<<name<<endl;
    cout<<name[6]<<endl;

    // cal length of string
    cout<<"Length of name: "<<getLength(name)<<endl;

    // reverse a string
    getReverse(name);
    cout<<"reversed name: "<<name<<endl;

    // palindrome => aba , abcba => reverse is same

    char palin[20];
    cout<<"enter a string to check palindrome : ";
    cin>>palin;

    cout<<"palindrome or not : "<<checkPalindrome(palin)<<endl;

    cout<<"character to lower case is : "<<toLowerCase('D')<<endl;
    cout<<"character to lower case is : "<<toLowerCase('d')<<endl;

    // pre defined function
    cout<<"alphanumeric : "<<iswalnum('a')<<endl;
    cout<<"alphanumeric : "<<iswalnum('$')<<endl;
    // If the ch is an alphanumeric character, then a non-zero value is returned.
    // If it is not then 0 is returned.

    cout<<'1'-'0'<<endl; // char to number => ch-'0'   eg: '1' to 1
    cout<<char('B'-'A'+'a')<<endl; 
    cout<<'B'-'A'+'a'<<endl;
    

    string s;
    string str="darshan";

    // |d|a|r|s|h|a|n|\0|
    // std::string stores its data internally in the form of a null terminated C-string, but in normal usage
    //  doesn't allow you to access the null terminator

    cout<<"length: "<<str.length()<<endl;

    // to add character in string
    // str.push_back("bhaiya"); // error

    str.push_back('b');
    str.push_back('b');
    cout<<"str: "<<str<<endl;
    str.pop_back();
    cout<<"str: "<<str<<endl;
    
    // difference between char array and string

    // The difference between character array & string is ,
    // the string ended with a '\0' but incase of character array there are no null point is available.

    str[3]='\0';
    cout<<"str after [3]=\0 : "<<str<<endl;

   cout<<"s: "<<s<<endl;

   // to create empty string
   string e="";
   cout<<"e: "<<e<<endl;

   string mchar;
   cout<<"enter a string to find max occuring character: ";
   cin>>mchar;

   cout<<"max occuring char is: "<<getMaxOccuringCharacter(mchar)<<endl;

   // for character array
   // length => int len = strlen(str);
   // compare => strcmp(s1,s2)    => a positive value if the first differing character in lhs is greater than the corresponding character in rhs.
                                // => a negative value if the first differing character in lhs is less than the corresponding character in rhs.
                                // => 0 if lhs and rhs are equal
   // copy => strcpy(destination,source);


   // for string
   // length => s.lenth()
   // compare => str1.compare(str2)    => Returns 0 if both the strings are the same.
                                //     => Returns < 0 (less than zero) if the value of the character of the first string is smaller as compared to the second string input.
                                //     => Results out to be > 0 (greater than zero) when the second string is greater in comparison.
   // copy => s1=s2;


    // very very imp
    // in a function => if we change string => original string remain as it is
    // in a function => if we change char array => original char array changes

    // so we have to return a string if we make changes in a string


   string dar="My name is Darshan";
   cout<<"reverse till space :"<<reverseTillSpace(dar)<<endl;

   string dars="darshanbhaiya";
   cout<<"dars[5]: "<<dars[5]<<endl;

   char daddan[20]="darshanbhaiya";
   cout<<"daddan[5]: "<<daddan[5]<<endl;

}




