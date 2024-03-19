#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(78);
    v.push_back(12);
    v.push_back(55);
    for (auto i = v.begin(); i!=v.end(); i++)
    {
        cout<<*(i)<<endl;
    }
    
    return 0;
}