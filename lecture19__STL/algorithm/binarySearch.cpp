#include<iostream>
using namespace std;

#include<algorithm>
#include<bits/stdc++.h>

int main(){
    vector<int>arr;
    arr.push_back(2);
    arr.push_back(6);
    arr.push_back(8);
    arr.push_back(10);

    cout<<"find 10 : "<<binary_search(arr.begin(),arr.end(),1);
    int a=5;
    int b=6;
    cout<<endl;
    cout<<"max : "<<max(a,b)<<endl;
    cout<<"min : "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a :: "<<a<<endl;
    // string reverse 
    string str="abcd";
    reverse(str.begin(),str.end());
    cout<<str<<endl;



    return 0;
}