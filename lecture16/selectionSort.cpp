#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// when you are pass a vector to the function you are passing copy of it not the value to pass the actual vector 
// pass the address using ( & ) symbol . 

void printarr(vector <int> arr){
    int low;
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    
}

vector <int> selectionSort(vector <int> arr){
    int low;
    for (int i = 0; i < arr.size(); i++)
    {
        low = i;
        for (int j = i+1; j < arr.size(); j++)
        {
            if(arr[low]>arr[j]){
                low=j;
            }
        }
        if(low!=i){
            int temp;
            temp=arr[i];
            arr[i] = arr[low];
            arr[low] = temp;
            // swap(arr[i],arr[low]);
        }
        
    }
    return arr;
    
}



int main(){
    vector <int >arr = {5,1,4,2,9,7,10,20};
    vector <int> sort= selectionSort(arr);
    printarr(sort);
    // cout<<"hello world";
    return 0;
}