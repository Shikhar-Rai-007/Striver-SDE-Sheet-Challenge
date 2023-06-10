#include<bits/stdc++.h>
int solve(int m,int n,int &paths,vector<vector<int>> &dp){
    if(m==0 || n==0){
        return 0;
    }
    if(m==1 && n==1){
        return 1;
    }
    if(dp[m][n]!=-1){
        return dp[m][n];
    }
    int right=solve(m,n-1,paths,dp);
    int down=solve(m-1,n,paths,dp);
    paths=right+down;
    return dp[m][n]=paths;
}
int uniquePaths(int m,int n){
    int paths=0;
    vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
    return solve(m,n,paths,dp);
}