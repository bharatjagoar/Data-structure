#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// hum yha pivot nikal rahe hai jiske lie hm arr[low] ko compare kareneg arr[mid]
// vo islie kyuki hme check krna hai ki mid kha hai 
// mid agar arr[low] se bda hai it means ki vo left sub array me hai 
// else vo left sub array me hai 
// agar vo left sub array me hai to hme start mid  krna hoga
// else end ko mid krna hoga  
// question ye kyu kya krna hai 
// vo islie ki hum end me apna seach space kam krna chahte hai , or last me hmare pass ek hi element nikal kar aega
// bs usi index ko age value number se compare krlo if vo chota it mean that array is rotated  

int findPivotIndex(vector<int> arr){
    // cout<<"helloo owrld";
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