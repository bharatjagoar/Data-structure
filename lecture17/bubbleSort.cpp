#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void Bubblesort(vector <int> *v1,int size){
    
    
}


int main(){
    vector <int > v1 = {5,6,4,2,0,4,7};
    int size = v1.size();
    Bubblesort(&v1,size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(v1[j]>v1[j+1]){
                swap(v1[j],v1[j+1]);
            }
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        cout<<v1[i]<<endl;
    }
    
    return 0;
}