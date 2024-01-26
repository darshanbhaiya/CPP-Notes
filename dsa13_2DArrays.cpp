#include<iostream>
using namespace std;


/*


// input and output
int main(){
    int arr[3][4]; //arr[rows][columns]
    int arrr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}; // row wise input
    int arrrr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}}; // konse row mai konse element

    for(int row=0;row<3;row++){// < rows
        for(int col=0;col<4;col++){// < columns
            cout<<arrrr[row][col]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"enter 12 elements row wise: ";

    // row wise input
    for(int row=0;row<3;row++){// < rows
        for(int col=0;col<4;col++){// < columns
            cin>>arr[row][col];
        }
    }
    for(int row=0;row<3;row++){// < rows
        for(int col=0;col<4;col++){// < columns
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter 12 elements column wise: ";
    // cloumn wise input
    for(int col=0;col<4;col++){// < columns
        for(int row=0;row<3;row++){// < rows
            cin>>arr[row][col];
        }
    }
    for(int row=0;row<3;row++){// < columns
        for(int j=0;j<4;j++){// < rows
            cout<<arr[row][j]<<" ";
        }
        cout<<endl;
    }
    

}
*/



// <-------------------------------------------------------------------------------->


// we have to specify atleast no. of columns in 2D array while passing as a parameter
bool isPresent(int arr[][4],int key,int roww,int coll){
    for(int row=0;row<roww;row++){// < rows
        for(int col=0;col<coll;col++){// < columns
           if(arr[row][col]==key){
                return 1;
           }
        }
    }
    return 0;
}

void printRowWiseSum(int arr[][4],int roww,int coll){
    cout<<"printing sum of rows: ";
    for(int row=0;row<roww;row++){// < rows
        int sum=0;
        for(int col=0;col<coll;col++){// < columns
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

void printLargestRowWiseSum(int arr[][4],int roww,int coll){
    int maxi=INT_MIN;
    int rowIndex=-1;
    for(int row=0;row<roww;row++){// < rows
        int sum=0;
        for(int col=0;col<coll;col++){// < columns
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=row;
        }
    }
    cout<<"maximun sum is:"<<maxi<<" whose row index is: "<<rowIndex<<endl;
}

void printColumnWiseSum(int arr[][4],int roww,int coll){
    cout<<"printing sum of columns: ";
   for(int col=0;col<coll;col++){// < columns
        int sum=0;
        for(int row=0;row<roww;row++){// < rows
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[3][4];
    cout<<"enter 12 elements row wise: ";

    // row wise input
    // TC O(row*col)
    for(int row=0;row<3;row++){// < rows
        for(int col=0;col<4;col++){// < columns
            cin>>arr[row][col];
        }
    }

    cout<<"Enter the element to be searched: ";
    int key;
    cin>>key;

    if(isPresent(arr,key,3,4)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }

    printRowWiseSum(arr,3,4);
    printColumnWiseSum(arr,3,4);
    printLargestRowWiseSum(arr,3,4);
}




