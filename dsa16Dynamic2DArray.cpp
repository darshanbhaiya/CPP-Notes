#include<iostream>
using namespace std;

int main(){
    // 2D array creation using heap memory

    int row,col;
    // cin>>row>>col; // dynamic input
    row=3;
    col=4;

    // creation
    int **arr=new int*[row]; // no. of rows ke size ka ek array of pointers create hua jo address save karega rows ka

    for(int i=0;i<row;i++){
        arr[i]=new int[col]; // har ek block ke corresponting ek row create hogi of size column
                             // jiska address us block mai store hoga
                             // note : new int[col] returns address of that row
    }

    // creation done

    // input
    cout<<"enter "<<row*col<<" elements: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];  

        }
    }

    // output
    cout<<row*col<<" elements are: "<<endl;;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";  
        }
         cout<<endl;
    }

    // always free heap memory after use manually

    // releasing memory
     for(int i=0;i<row;i++){
        delete []arr[i]; // deleting actual rows // [] array del karna hai , konsa => arr[i]
     }
     delete []arr; // deleting pointer to that rows // [] array del karna hai , konsa => arr

}



// Memory leakage occurs in C++ when programmers allocates memory by using new keyword and forgets
//      to deallocate the memory by using delete() function or delete[] operator. 



// jaggered array => create dynamically


