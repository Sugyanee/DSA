#include<bits/stdc++.h>
using namespace std;
    int countDigits(int n){
        int count=0;
        while(n>0){
            count++;
            n=n/10;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int totalCount=0;
        for(int i=0;i<nums.size();i++){
            if(countDigits(nums[i])%2==0){
            totalCount++;
            }    
            
        }
        return totalCount;
    }
int main(){
    vector<int>nums={12,345,2,6,7689};
    cout<<findNumbers(nums);
    return 0;
}