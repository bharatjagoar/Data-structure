#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printSet(set<int> bharat){
    for(int number:bharat){
        cout<<number<<endl;
    }
    // cout<<endl;
    cout<<endl;
    cout<<endl;
    for (auto i = bharat.begin(); i !=bharat.end(); i++)
    {
        cout<<*(i)<<endl;
    }
}



int main(){
    set <int> s1;
    s1.insert(1);//time complexity to insert is log(n);
    s1.insert(10);
    s1.insert(78);


    // printing the set 
    printSet(s1);

    // erasing the element from the set 
    auto ptr = s1.find(10);
    s1.erase(ptr);
    printSet(s1);
    s1.erase(78);//throught value
    printSet(s1);
    return 0;
}