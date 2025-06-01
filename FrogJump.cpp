#include<bits/stdc++.h>
using namespace std;

int cost(int n,vector<int>& height,vector<int>&dp){
        if(n==0)
        return 0;
        
        int prev = 0;
        int prev2 = 0;
        
        for(int i=1;i<n;i++){
            int right = INT_MAX;
            int left = prev + abs(height[i]-height[i-1]);
            if(i>1)
            right = prev2 + abs(height[i]-height[i-2]);
            int curr = min(left,right); 
            prev2 = prev;
            prev = curr;
        }
        return prev;
        
        
    }
    int minCost(vector<int>& height) {
        // Code here
        int n = height.size();
        vector<int>dp(n,-1);
        return cost(n,height,dp);
        
    }

    int main(){
        vector<int>height ={20, 30, 40, 20};
        cout<<minCost(height);
        return 0;
    }