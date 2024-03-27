#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int BinarySearch(int* arr,int high,int low,int key){
    int mid,index;
    for (int i = 0; i < high; i++)
    {
        mid =(low+high)/2;
        /* code */
        if(high==low){
            cout<<"equal"<<endl;
            return low;
        }else if(key<arr[mid]){
            cout<<"less then "<<endl;
            high=mid;
            int index=BinarySearch(arr,high,low,key);
        }else{
            cout<<"greater"<<endl;
            low=mid;
            int index = BinarySearch(arr,high,low,key);
        }
    }
    return index;
}
int main(){
    int arr[]={4,8,16,22,34};
    int key = 4;
    int low=0,high=sizeof(arr)/sizeof(int)-1;
    // cout<<high<<arr[high];
    // cout<<"hello world !! ";
    int index=BinarySearch(arr,high,low,key);
    cout<<index<<endl;
    return 0;
}