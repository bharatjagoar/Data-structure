#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v1={1,2,2,2,3,4};
    vector <int> v2 = {2,2,3,3},result;
    int i=0,j=0;
        int n = v1.size();
        int m = v2.size();
        while (i < n && j < m) {
          if (v1[i] == v2[j]) {
            result.push_back(v1[i]);
                i++;
                j++;
          } else if (v1[i]>v2[j]) {
                  j++;
          } else {
                  i++;
          }
        }
        // return result;
        for (int i = 0; i < result.size(); i++)
        {
            cout<<result[i]<<"\t";
        }
        
    
    
    return 0;
}