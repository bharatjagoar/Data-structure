#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    vector <int> nums1={1, 1, 2, 2, 3, 3},nums2={2, 2, 3, 3, 4, 4},result;
    unordered_set<int> numsOne,numsTwo;
    for(auto x : nums1){
        numsOne.insert(x);
    }
    for(auto x : nums2){
        numsTwo.insert(x);
    }
    if(nums1.size()>nums2.size()){
        for(int x : numsTwo){
            auto it =numsOne.find(x);
            if(it!=numsOne.end()){
                result.push_back(x);
            }
        }
    }else{
        for(int x : numsOne){
            auto it = numsTwo.find(x);
            if(it!=numsTwo.end()){
                result.push_back(x);
            }
        }
    }
    for (auto x : result)
    {
        cout<<x<<endl;
    }
    
    return 0;
}