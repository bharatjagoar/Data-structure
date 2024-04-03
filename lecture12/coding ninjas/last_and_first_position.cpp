#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int bin(int arr[],int high,int low,int key){
    int mid,index;
    mid = (low+high)/2;
    if(arr[mid]==key){
        return mid;
    }else if(high==low){
        return -1;
    }else if(arr[mid]<key){
        low = mid+1;
        index = bin(arr,high,low,key);
        return index;
    }else if(arr[mid]>key){
        high = mid-1;
        index = bin(arr,high,low,key);
        return index; 
    }
    // return 
}
int main(){
    int arr[] ={0,0,1,1,2,2,2,2};
    int key=2,i=20,j=1,first,last;
    pair<int,int> p1;
    int n = sizeof(arr)/sizeof(int)-1;
    int high = sizeof(arr)/sizeof(int)-1;
    int index = bin(arr,high,0,key);
    cout<<index<<endl;
    if(index<0){
        p1.first=-1;
        p1.second=-1;
    }else{
        //traversing forword looking for k 
        while (arr[index+j]==key)
            {
                j++;
                // cout<<j<<endl;
            }
            // cout<<"out"<<endl;
            j--;
        cout<<j<<endl;
        while (arr[index-i]==key)
        {
            cout<<"fdsafds";
            i++;
            cout<<i<<endl;
        }
        // cout<<i<<"Fdafdsa"<<endl;
        cout<<arr[4];
    }
    
    
    return 0;
}