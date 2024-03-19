#include<iostream>
#include<vector>
using namespace std;
//the solution is s
int main(){
    vector <int> vector1 = {4,3,2,7,8,2,3,1};
    
    int size = vector1.size();
    for (int i = 0; i < size; i++)
    {
        cout<<vector1[i]<<"\t";
        cout<<vector1[vector1[i]-1]<<endl;
                
    }
    
    
    return 0;
}