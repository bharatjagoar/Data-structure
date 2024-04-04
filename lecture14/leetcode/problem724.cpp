#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int index(vector<int> nums){
    int sum = 0,left=0,position = -1;
    for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];
    }
    
    for(int i=0;i<nums.size();i++){
        sum=sum-nums[i];
        if(sum==left){
            return i;
        }
        left+=nums[i];
    }
    // cout<<sum;
    // return sum;
}

int main(){
    vector<int> v1 ={1,7,3,6,5,6}; 
    int sum = index(v1);
    cout<<sum;
    
    
    return 0;
}