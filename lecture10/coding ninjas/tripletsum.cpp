#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    vector<int> arr={10,5,5,5,2};
    int K=12;
    vector<vector<int>>result;
    vector <int> nested;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
        for (int k = j + 1; k < n; k++) {
            if (arr[i] + arr[j] + arr[k] == K) {
                nested.push_back(arr[i]);
                nested.push_back(arr[j]);
                nested.push_back(arr[k]);
                result.push_back(nested);
                nested.clear();
            }
        }
    }
}
    for(auto x:result){
        for(auto y:x){
            cout<<y<<"\t";
        }
        cout<<endl;
    }
    
    return 0;
}