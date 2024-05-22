#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// optimised code for insertion sort


void insertionSort(vector <int> &arr,int size){
    cout<<endl;
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        for (int j = i-1; j > -1; j--)
        {
            
            if(arr[j]>temp){
                arr[j+1]=arr[j];
                arr[j]=temp;
            }else{
                break;
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