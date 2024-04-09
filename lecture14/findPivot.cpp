#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int findpivot(vector<int>arr){
    int low=0,high = arr.size()-1;
    int mid = high+(low-high) / 2 ;
    while (high>low)
    {
        cout<<"hello world"<<endl;
        if(arr[mid]>arr[low]){
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
    vector<int> v1={4,5,6,7,0,1,2};
    int pivot = findpivot(v1);
    cout<<pivot;
    return 0;
}