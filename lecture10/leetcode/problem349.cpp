#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> nums1={1, 1, 2, 2, 3, 3},nums2={2, 2, 3, 3, 4, 4},result;
    unordered_set<int> s1;
    int nums1size = nums1.size();
    int nums2size = nums2.size();
    if(nums1size>nums2size){
        for (int i = 0 ; i < nums2size ; i++){
            for(int j = 0 ; j < nums1size ;j++){
                if(nums2[i]==nums1[j]){
                    s1.insert(nums2[i]);
                    break;
                }
            }
        }
    }else{
        for(int i=0;i<nums1size;i++){
            for (int j = 0; j < nums2size; j++)
            {
                if(nums2[j]==nums1[i]){
                    s1.insert(nums1[i]);
                    break;
                }
            }
            
        }
    }
    for(int x : s1){
        cout<<x<<"\t";
    }
    return 0;
}