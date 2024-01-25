#include <bits/stdc++.h> 

 

void solve(int row, int col, vector<vector<int>> &arr, int n, string &s, vector<string> &ans){

 

    

    if(row==n-1  && col==n-1){

        ans.push_back(s);

        return;

    }

 

    //down

    if(row!= n-1){

        if(arr[row+1][col]==1){

            s.push_back('D');   

            arr[row][col]=0;

            solve(row+1, col , arr, n, s, ans);

            s.pop_back();

            arr[row][col]=1;

 

        }

    }

 

    //left

 

    if(col!=0){

        if(arr[row][col-1]==1){

            s.push_back('L');   

            arr[row][col]=0;

            solve(row, col-1 , arr, n, s, ans);

            s.pop_back();

            arr[row][col]=1;

        }

    }

 

       

 

    //right

    if(col!=n-1){

        if(arr[row][col+1]==1){

            s.push_back('R');   

            arr[row][col]=0;

            solve(row, col+1, arr, n, s, ans);

            s.pop_back();

            arr[row][col]=1;

        }

    }

 

    // UP

    if(row!=0){

        if(arr[row-1][col]==1){

            s.push_back('U');   

            arr[row][col]=0;

            solve(row-1, col , arr, n, s, ans);

            s.pop_back();

            arr[row][col]=1;

        }

    }

 

    

 

    return;

}

vector < string > searchMaze(vector < vector < int >> & arr, int n) {

    // Write your code here.

 

    vector < string > ans;

    string s;

    if(arr[0][0]==1) solve(0,0,arr,n,s,ans);

    return ans; 

 

}
