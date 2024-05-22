#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void Bubblesort(vector <int> &arr,int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            /* code */
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    
}


int main(){
    vector <int> v1 = {66,1,4,2,0,4,7};
    int size = v1.size();
    Bubblesort(v1,size);
    cout<<v1[0]<<endl;
    return 0;
}