#include<bits/stdc++.h>
using namespace std;

int fib(int n,int dp[]){
    if(n<=1)
    return n;

    if(dp[n]!=-1)
    return dp[n];

    return dp[n] = fib(n-1,dp) + fib(n-2,dp);
}
int main(){
    int n = 5;
    // vector<int>dp(n+1,-1);

    int dp[n+1];
    memset(dp,-1,sizeof(dp));
    cout<< fib(n,dp);
    return 0;
}