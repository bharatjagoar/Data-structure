#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    int arr[] = {2,4,8,12,13,18,20,25};
    int high = sizeof(arr)/sizeof(int)-1,low=0;
    int key = 5;
    int index = -1;


    int mid = low + (high-low)/2;
    while (low<=high)
    {
        int mid = low + (high-low)/2;
        // cout<<low<<" "<<mid<<" "<<high<<endl;
        if(arr[mid]==key){
            index = mid;
            break;
        }
        // }else if(high==low){
        //     cout<<"not here"<<endl;
        //     index=-1;
        //     break;
        // }
        else if(arr[mid]>key){
            cout<<"key is less"<<endl;
            high = mid-1;
        }else if(arr[mid]<key){
            cout<<"key is greater"<<endl;
            low = mid+1;
        }

        // int mid = low + (high-low)/2;
    }
    
    cout<<index<<endl;
    
    return 0;
}