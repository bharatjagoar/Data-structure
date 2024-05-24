#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void swapAt(vector <int > &arr,int pos,int size){
    int low=pos+1;
    int high = size-1;
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    for(auto x:arr){
        cout<<x<<"\t";
    }
}
int main(){
    vector <int> arr = {6,4,2,1,7,9,10,3};
    int size = arr.size();
    swapAt(arr,1,size-1);
    // cout<<"hello world"<<endl;
    
    return 0;
}