#include<iostream>
using namespace std;
#include<queue>
int main(){
    queue <int> q1;
    q1.push(21);
    q1.push(365);
    q1.push(894);
    cout<<"top"<<q1.front()<<endl;
    cout<<"top"<<q1.back()<<endl;
    q1.pop();
    cout<<"size : "<<q1.size()<<endl;//does not have capacity

    return 0;
}