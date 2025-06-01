#include<bits/stdc++.h>
using namespace std;

int Alive (int n, vector<int>&arr){
    int count=n;
    int swordlength=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(swordlength!=0){
            swordlength = swordlength-1;
            count--;}
        swordlength = max(swordlength,arr[i]) ; 
    }
    return count;
}
int main(){
    int n =2;
    vector<int>arr={0,0}; //3
    cout<< Alive(n,arr);
    return 0;
}