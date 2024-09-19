#include<iostream>
using namespace std;
 #include <bits/stdc++.h>
int main(){
    vector<int>arr;
    string name="10001";
    
    arr.push_back(int(name.at(0)));
    cout<<arr[0];
    for(auto x:arr){
        cout<<x<<endl;
    }
    return 0;
}