#include<iostream>
using namespace std;
#include<stack>
int main(){
    stack<int> list;
    list.push(6);
    list.push(1);
    list.push(9);
    cout<<list.top()<<endl;
    cout<<"empty :- "<<list.empty()<<endl;
    return 0;
}