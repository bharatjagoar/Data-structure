#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int findPivotIndex(vector<int> arr){
    cout<<"helloo owrld";
    int low = 0,high=arr.size()-1;
    while (low<high)
    {
        int mid = low+(high-low)/2;
        if(arr[mid]>arr[low]){
            low=mid;
        }else{
            high = mid;
        }

    }
    if(arr[low]>arr[low+1]){
        return low+1;
    }else{
        return -1;
    }
    
    // return index;
}
int main(){
    vector<int> arr={6, 7, 8, 1, 2, 3, 4, 5};
    int index=findPivotIndex(arr);
    cout<<index;
    return 0;
}