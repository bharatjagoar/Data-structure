#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void insertionSort(vector <int> &arr,int size){
    cout<<endl;
    for (int i = 0; i < size; i++)
    {
        int temp ;
        for (int j = i; j > 0; j--)
        {
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
            }
        }
        
    }
    
}

int main(){
    vector <int> arr={5,3,7,9,1,4,6,8};
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    insertionSort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    return 0;
}