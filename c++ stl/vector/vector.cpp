#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    v.emplace_back(45);
    v.emplace_back(12);
    v.emplace_back(6321);
    for(auto number:v){
        cout<<"this is the number ::"<<number<<endl;
    }
    v.erase(v.begin()+2);
    for (auto i=v.begin();i<v.end();i++){
        cout<<"this is the number ::"<<*(i)<<endl;
    }
    return 0;
}