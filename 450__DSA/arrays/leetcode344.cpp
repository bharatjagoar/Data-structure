#include<iostream>
using namespace std;
#include<bits/stdc++.h>



int main(){
    vector <char> s = {'h','e','l','l','o'};
    int size = s.size();
    // cout<<size;
    int low = 0;
    int high = size-1;
    for (int i = 0; i < size; i++)
    {
        cout<<s[i]<<"\t";
    }
    cout<<endl;
    while (low<high)
    {
        swap(s[low],s[high]);
        low++;
        high--;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<s[i]<<"\t";
    }
    

    return 0;
}