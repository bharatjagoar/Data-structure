#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    int s=5;
    vector <int> arr={1,2,3,4,5};
     vector<vector <int>> result;
        vector<int> nested;
        for (int i = 0; i < arr.size(); i++) {
            nested.clear();
          for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == s) {
                nested.push_back(min(arr[i] , arr[j]));
                nested.push_back(max(arr[i] , arr[j]));
                result.push_back(nested);
            }

          }
        }
        sort(result.begin(),result.end());//this is built-in function to sort 
        for(vector<int>x:result){
            for (int y:x){
                cout<<y<<"\t";
            }
            cout<<endl;
        }
    return 0;
}