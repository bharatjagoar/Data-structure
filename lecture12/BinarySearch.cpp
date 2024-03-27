#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int BinarySearch(int* arr,int high,int low,int key){
    int mid,index=0;
    mid = ( low + high )/2;

    if(arr[mid]==key){
        return mid;
    }else if(key>arr[mid]){
        low=mid+1;
        int index = BinarySearch(arr,high,low,key);
        return index;
    }
    else{
        high = mid;
        int index = BinarySearch(arr,high,low,key);
        return index;
    }
    
    // return index;
}
int main(){
    int arr[]={2, 4, 6, 8, 10, 12, 14};
    int key = 6;
    int low = 0 , high = sizeof(arr) / sizeof(int) - 1;
    int index=BinarySearch(arr,high,low,key);
    cout<<index<<endl;
    return 0;
}