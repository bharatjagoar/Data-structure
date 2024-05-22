#include<iostream>
using namespace std;
#include<queue>

// it creates max heap by-default

int main(){

    // max heap
    priority_queue <int>max;
    priority_queue<int,vector<int>,greater<int>> mini; 
    max.push(5);
    max.push(8);
    max.push(1);
    max.push(6);
    max.push(9);
    int size = max.size();
    for(int i=0;i<size;i++){
        cout<<max.top()<<"\t";
        max.pop();
    }cout<<endl;
    mini.push(5);
    mini.push(8);
    mini.push(1);
    mini.push(6);
    mini.push(9);
    for(int i=0;i<size;i++){
        cout<<mini.top()<<"\t";
        mini.pop();
    }cout<<endl;


    return 0;
}