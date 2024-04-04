#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int peak(vector<int> arr){
    int low=0;
    int high = arr.size();
    int mid = high + (high - low) / 2 ;
    while (low<high){
        if(arr[mid]<arr[mid+1]){
            low = mid+1;
        }else{
            high=mid;
        }
        mid = high + (high - low) / 2 ;
    }
    return mid;
}
int main(){
    cout<<"hello world !!"<<endl;
    vector<int>arr={0,3,5,12,2};
    int ans;
    // int mid = 0+((arr.size()-1)-0)/2;
    ans = peak(arr);
    cout<<ans<<endl;
    return 0;
}