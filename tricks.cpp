#include<iostream>
using namespace std;

int main(){

    // always check edge cases
    
    // &1 => 1 even number
    // &1 => 0 odd number
    // &1 => to find last bit

    // to remove last bit of a number => n&1 => n>>1
    // to remove last digit of a number => n%10 => n/10  => ans[0,10-1] or ans[0,m-1] for n/m
    
    // int/int=int

    // INT_MIN => store min value(-2^31) in range of int ((-2)^(31)) to (2^31)-1
    // INT_MAX => store max value(2^31-1) in range of int ((-2)^(31)) to (2^31)-1
 
    //  mini=min(mini,num[i]);
    //  maxi=max(maxi,num[i]);
    //  swap(arr[start],arr[end]);
 
    // isalnum('$')
    // If the ch is an alphanumeric character, then a non-zero value is returned.
    // If it is not then 0 is returned.


    // (char)tolower('A')
    // (char)toupper('A')
 
    // if the character passed is an uppercase alphabet, then the tolower() function converts an 
    // uppercase alphabet to a lowercase alphabet. This function does not affect another lowercase 
    // character, special symbol, or digit.
     
    // int boolean=islower('a') 
    // int boolean=isupper('B')

    // isupper() Function: This function is used to check if the argument contains any uppercase 
    // letters such as A, B, C, D, …, Z. 
   
    // convert to string =>  string cnt=to_string(count);


    // for 2D vector
    //  vector<vector<int>>& matrix
    //  int row=matrix.size();
    //  int col=matrix[0].size(); // kisi row ka size
     

    //  to map mid with index in 2D array like in binary search
    //  int mid=start+(end-start)/2;
    //  int element=matrix[mid/col][mid%col];
 

    // modulo mathematics/arihematics
    // (a+b)%m = a%m + b%m;
    // a%m - b%m = (a-b)%m;
    // (a%m) * (b%m) = (a*b)%m;
    // ((a%m)%m)%m ... = a%m

    // x=(1LL *(x)%m * (x)%m)%m;  Type cast into '1 long long'
    // result=(1LL * (result)%m * (x)%m)%m;

    // integer 32 => 2^31 => 10^9


    // vector<vector <int>> visited=m; => try to initialise 2D vector with a size
    // vector<vector<int>> vec(row); 


    // sum+=b[j--]-'0'; // string to int
    // char ch='0' + 1 // int to char

    // sum of two binary numbers
    // result=to_string(sum%2)+result;
    // carry=sum/2;


    // unordered_set<int> set1(arr1.begin(), arr1.end());
    // if (set1.find(num) != set1.end()) {
    //         result.push_back(num);
    //         set1.erase(num);  // To avoid duplicates in the result
    // }
 


    // initializer list
    // Box(T d) : data(d) {} in the C++ code is part of a constructor that uses initializer list syntax. 
    // This is the initializer list. It initializes the member variable data with the value of the parameter d. In this case, data is being initialized directly using d before the constructor body is executed.
    // Efficient Initialization: It allows the member variable data to be initialized directly rather than assigned a value after it is constructed. This can be more efficient, especially for complex data types, since it avoids the temporary creation of a default object before assignment.
    // Consistency: For certain data members (like constants or references), using an initializer list is the only way to initialize them.
 
 
 }





