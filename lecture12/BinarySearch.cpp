#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int BinarySearch(int* arr,int high,int low,int key){
    int mid,index=0;
    mid = ( low + high )/2;

    if(arr[mid]==key){
        // cout<<"arr[mid]==key"<<endl;
        return mid;
    }else if(high==low){
        // cout<<"high==low"<<endl;
        if(key!=arr[high])
        return -1;
    }
    else if(key<arr[mid]){
        // cout<<"key<arr[mid]"<<endl;
        high = mid;
        int index = BinarySearch(arr,high,low,key);
        return index;
    }else if(key>arr[mid]){
        // cout<<"key>arr[mid]"<<endl;
        low=mid+1;
        int index = BinarySearch(arr,high,low,key);
        return index;
    }
    
    // return index;
}
int main(){
    int arr[]={4,5,6,7,0,1,2};
    int key = 0;
    int low = 0 , high = sizeof(arr) / sizeof(int) - 1;
    int index=BinarySearch(arr,high,low,key);
    if(index>=0)
    cout<<index<<endl;
    else
    cout<<"does not exist !! "<<endl;
    return 0;
}