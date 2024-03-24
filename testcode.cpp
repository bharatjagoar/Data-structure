#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    // testing nested vector !! 
    vector <vector <int>> v1;
    v1.push_back({1,2,3,4,5});
    v1.push_back({6,7,8,9,10});
    for(vector <int> x:v1){
        for(int y : x){
            cout<<y<<"\t";
        }
        cout<<endl;
    }
    return 0;
}