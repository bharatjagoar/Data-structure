#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    vector<int> v1 = {6,1,4,2,8,10};
    sort(v1.begin(),v1.end());
    v1.erase(v1.end()-1);
    for(int x: v1){
        cout<<x<<endl;
    }
    return 0;
}