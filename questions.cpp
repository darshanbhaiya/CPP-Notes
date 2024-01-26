// https://leetcode.com/problems/spiral-matrix/description/
        // spiral print

//         class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> sp;
//         int row=matrix.size();
//         int col=matrix[0].size(); // kisi row ka size

//         int count=0;
//         int total=row*col;

//         // initialisation index
//         int startingRow=0;
//         int startingCol=0;
//         int endingRow=row-1;
//         int endingCol=col-1;

//         while(count<total){

//             // printing starting row
//             for(int index=startingCol;index<=endingCol && count<total;index++){
//                 sp.push_back(matrix[startingRow][index]);
//                 count++;
//             }
//             startingRow++;
        
//             // printing ending col
//             for(int index=startingRow;index<=endingRow && count<total;index++){
//                 sp.push_back(matrix[index][endingCol]);
//                 count++;
//             }
//             endingCol--;

//             // printing ending row
//             for(int index=endingCol;index>=startingCol && count<total;index--){
//                 sp.push_back(matrix[endingRow][index]);
//                 count++;
//             }
//             endingRow--;

//             // printing starting col
//             for(int index=endingRow;index>=startingRow && count<total;index--){
//                 sp.push_back(matrix[index][startingCol]);
//                 count++;
//             }
//             startingCol++;


//         }

       

//         return sp;

//         // TC =O(row*col)
//     }
// };



// -------------------------------------------------------------------------------------------------------------------------

// https://leetcode.com/problems/rotate-image/

// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int size=matrix.size()-1;

//         int outerloop=matrix.size()/2;
        

//         int startingRow=0;
//         int startingCol=0;
//         int endingRow=size;
//         int endingCol=size;

//         while(outerloop--){

//             int innerloop=size;
            

//             while(innerloop--){

               

//                 for(int index=startingRow+1;index<=endingRow;index++){
//                     swap(matrix[index][startingCol],matrix[index-1][startingCol]);
//                 }

//                 for(int index=startingCol;index<=endingCol-1;index++){
//                     swap(matrix[endingRow][index],matrix[endingRow][index+1]);
//                 }

//                 for(int index=endingRow;index>=startingRow+1;index--){
//                     swap(matrix[index][endingCol],matrix[index-1][endingCol]);
//                 }

//                 for(int index=endingCol;index>=startingCol+2;index--){
//                     swap(matrix[startingRow][index],matrix[startingRow][index-1]);
//                 }
                
                


//             }

//             startingRow++;
//             startingCol++;
//             endingRow--;
//             endingCol--;

//             size=size-2;

            

//         }
        
//     }
// };
// -------------------------------------------------------------------------------------------------------------------------

// https://leetcode.com/problems/search-a-2d-matrix/submissions/1139786486/

// -------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------------------------------


















// s.find(part)<s.length() => found index is less than length of string
        // while(s.length()!=0 && s.find(part)<s.length()){
        //     s.erase(s.find(part),part.length());
        // }


//______________________________________________________

// window method

// class Solution {
// private:
//     bool checkEqual(int a[26],int b[26]){
//         for(int i=0;i<26;i++){
//             if(a[i]!=b[i])
//               return 0;
//         }
//         return 1;
//     }

// public:
//     bool checkInclusion(string s1, string s2) {

//         int count1[26]={0};
//         // character count array
//         for(int i=0;i<s1.length();i++){
//             int index=s1[i]-'a';
//             count1[index]++;
//         }
        
//         // traverse string s2 in window size of s1 length and compare

//         int i=0;
//         int windowSize=s1.length();
//         int count2[26]={0};

//         // running for first window
//         while(i<windowSize && i<s2.length()){
//             int index=s2[i]-'a';
//             count2[index]++;
//             i++;
//         }

//         if(checkEqual(count1,count2))             // to check if permutations are equal
//               return 1;

//         // aage window process karo
//         while(i<s2.length()){
//             char newChar=s2[i];
//             int index=newChar-'a';
//             count2[index]++;

//             char oldChar=s2[i-windowSize];
//             index=oldChar-'a';
//             count2[index]--;

//             if(checkEqual(count1,count2))
//               return 1;

//             i++;  

            
//         }      

//         return 0;
//     }
// };