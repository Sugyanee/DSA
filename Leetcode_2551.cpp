#include<bits/stdc++.h>
using namespace std;


long long putMarbles(vector<int>& weights, int k) {
        vector<long long>pairSum(weights.size()-1);
        long long leftSum =0;
        long long rightSum =0;

        if (k == 1) return 0;

        for(int i=0;i<weights.size()-1;i++){
            pairSum[i]=weights[i]+weights[i+1];
        }
        sort(pairSum.begin(),pairSum.end());

        for (long long i = 0; i < k - 1; i++) { 
            leftSum += pairSum[i];
            rightSum += pairSum[pairSum.size() - 1 - i];
        }
        return rightSum-leftSum;
    }

    int main(){
        vector<int>weights={1,3,5,1};
        int k =2;
        long long ans = putMarbles(weights,k);
        cout<<ans<<endl;
        return 0;
    }