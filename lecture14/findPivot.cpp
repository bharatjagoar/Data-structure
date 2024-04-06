#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int findpivot(vector<int>arr){
    int low=0,high = arr.size();
    int mid = high+(low-high) / 2 ;
    while (high>low)
    {

        if(arr[mid]>arr[0]){
            low = mid+1;
        }else{
            high = mid;
        }
        mid = high+(low-high)/2;
    }
    return low;

}
int main(){
    // cout<<"hello world !";
    vector<int> v1={7,9,1,2,3};
    int pivot = findpivot(v1);
    cout<<pivot;
    return 0;
}