#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    vector <int> nums1={1,3,4,5};
    int m = nums1.size();
    vector <int> nums2 = {2,3,6,8,10},arr;

    int n = nums2.size();
    int count=0;
    for(int i=0;i<m+n;i++){
        if(i<m){
            arr.push_back(nums1[i]);
        }else{
            arr.push_back(nums2[count]);
            count++;
        }
    }
    for(auto x:arr){
        cout<<x<<"\t";
    }cout<<endl;
    sort(arr.begin(),arr.end());
    for(auto x:arr){
        cout<<x<<"\t";
    }
    return 0;
}