#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int findpivot(vector<int>arr){
    int low=0,high = arr.size()-1;
    int mid = (low+high) / 2 ;
    while (high>low)
    {
        // cout<<"hello world"<<endl;
        if(arr[mid]>arr[0]){
            low = mid+1;
        }else{
            high = mid;
        }
        mid = (low+high) / 2 ;
    }
    return low;

}





int binarySearch(vector<int> arr,int key,int start,int end){
    int size = arr.size();
    
    int mid = start + (end - start) / 2;
    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            end = mid-1;
        }else if(arr[mid]<key){
            start = mid + 1 ;
        }
        mid = start + (end - start) / 2;
    }
    
    
    return -1;
}
int main(){
    vector <int> arr={4,5,6,7,0,1,2};
    int target=5;
    int pivot = findpivot(arr),indexOfkey;
    int size = arr.size()-1;
    cout<<"this is pivot ::"<<pivot<<endl;
    if(arr[size]>target){
        indexOfkey = binarySearch(arr,target,pivot,size);
        cout<<"herer";
        cout<<indexOfkey<<endl;
    }else{
        indexOfkey = binarySearch(arr,target,0,pivot-1);
        cout<<"therer";
        cout<<indexOfkey<<endl;
    }
    // int index=binarySearch(arr,key,0,arr.size());
    // cout<<"index :: "<<index;
    
    return 0;
}