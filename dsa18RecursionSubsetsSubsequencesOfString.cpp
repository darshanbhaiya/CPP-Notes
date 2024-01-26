#include<iostream>
using namespace std;

// subset of string => https://leetcode.com/problems/subsets/
// refer notes
/*

class Solution {
private:
    void solve(vector<int> nums,vector<int> output, int index,vector<vector<int>> &ans){
        // base case
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
          
        // exclude
        solve(nums,output,index+1,ans);   

        // include
        int element=nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);

    }    
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        // power set => set of all subsets
        // no. of elements in power set =pow(2,n)

        // approach => element lena hai ya nahi lena hai (exclude yaa include)

        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(nums,output,index,ans);
        return ans;


        
    }
};

*/

// Subsequences of String => https://www.codingninjas.com/studio/problems/subsequences-of-string_985087?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16&leftPanelTabValue=PROBLEM
// refer notes 

/*

#include <bits/stdc++.h> 

void solve(string str,string output,int index,vector<string> &ans){
	// base case
	if(index>=str.length()){
		if(output=="")
			return;
		ans.push_back(output);
			return;
	}

	// exclude
	solve(str,output,index+1,ans);

	// include
	char element=str[index];
	output.push_back(element);
	solve(str,output,index+1,ans);

}
vector<string> subsequences(string str){
	
	// total no. of subsequences are pow(2,n) including empty string

	vector<string> ans;
	string output="";
	int index=0;

	solve(str,output,index,ans);

	return ans;


}


*/


// phone keypad problem => https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/1147156639/
// refer notes

/*

class Solution {
private: 
    void solve(string digits,string output,int index,vector<string> &ans,string mapping[]){
        // base case
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }


        int number=digits[index]-'0'; // conversion of character to string => eg: '1' => 1
        string value=mapping[number];

        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(digits,output,index+1,ans,mapping);
            output.pop_back(); // back track
        }

    }


public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;

        if(digits.length()==0) // string length 0 
            return ans;

        string output="";
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,index,ans,mapping);

        
        return ans;
        
    }
};


*/


// permutations of a string => https://leetcode.com/problems/permutations/
// refer notes

/*

class Solution {
private:
    void solve(vector<int> nums,int index,vector<vector<int>> &ans){
        // base case
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            
       
            swap(nums[index],nums[i]);
            
            solve(nums,index+1,ans);
            
            swap(nums[index],nums[i]); // back track                                     


        }
    }
       
public:
    vector<vector<int>> permute(vector<int>& nums) {
        // n! combinations psssible => n = string length
        // approach => har place pe har kisi ko try karna hai => swap wali game
        
        vector<vector<int>> ans;
        int index=0;
        solve(nums,index,ans);
        return ans;



    }
};


*/



// Rat in a Maze Problem - I =>  https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

/*

class Solution{
    
        private:
        bool isValid(vector<vector<int>> &m,int n,int source_x,int source_y,vector<vector <int>> visited){
            
            
            // kya ham iss block mai jaa sakte hai
            
            // should be within matrice and it should not be visited and it should be allowed to travel
            if((source_x>=0 && source_x<n) && (source_y>=0 && source_y<n) && visited[source_x][source_y]==0 && m[source_x][source_y]==1)
                return 1;
            return 0;        
        }
    
    
        void solve(vector<vector<int>> m,int n,int source_x,int source_y,string path,vector<string> &ans,vector<vector <int>> visited){
            
            
            // you have reached souece_x and source_y here
            
            // base case
            if(source_x==n-1 && source_y==n-1){
                ans.push_back(path);
                return;
            }
            
            visited[source_x][source_y]=1;
            
            // right
            if(isValid(m,n,source_x,source_y+1,visited)){
                path.push_back('R');
                solve(m,n,source_x,source_y+1,path,ans,visited);
                path.pop_back();  // back track
            }
            // left
            if(isValid(m,n,source_x,source_y-1,visited)){
                path.push_back('L');
                solve(m,n,source_x,source_y-1,path,ans,visited);
                path.pop_back(); // back track
            }
            // up
            if(isValid(m,n,source_x-1,source_y,visited)){
                path.push_back('U');
                solve(m,n,source_x-1,source_y,path,ans,visited);
                path.pop_back(); // back track
            }
            // down
            if(isValid(m,n,source_x+1,source_y,visited)){
                path.push_back('D');
                solve(m,n,source_x+1,source_y,path,ans,visited);
                path.pop_back(); // back track
            }
            
            
            visited[source_x][source_y]=0; // back track
        }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        int source_x=0;
        int source_y=0;
        
        if(m[0][0]==0 || m[n-1][n-1]==0)
            return ans;
        
        vector<vector <int>> visited=m; // gives error when not initialized with m ,becoz later when we try to access those indexes (as it is empty first and we try to access indexes)
        // initialised with 0
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        
        string path="";
        
        solve(m,n,source_x,source_y,path,ans,visited);
        
        sort(ans.begin(),ans.end());
        
        return ans;
        
        
    }
};


*/

int main(){

    
}