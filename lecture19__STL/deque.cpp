#include<iostream>
using namespace std;
#include<deque>
int main(){
    deque <int> deq;
    deq.push_back(1);//pushed the element at last 
    deq.push_front(234);//pushed the element at front 
    for(auto i:deq){
        cout<<i<<"\t";
    }
    cout<<endl;
    deq.pop_front();//removes the element at last
    for(auto i:deq){
        cout<<i<<"\t";
    }
    cout<<endl;

    cout<<deq.empty()<<endl;//checks if empty
    deq.push_back(6);
    deq.push_back(7);
    deq.push_back(11);
    deq.push_back(90);
    for(auto i:deq){
        cout<<i<<"\t";
    }
    cout<<endl;
    deq.erase(deq.begin(),deq.begin()+3);
    for(auto i:deq){
        cout<<i<<"\t";
    }
    cout<<endl;
    return 0;
}