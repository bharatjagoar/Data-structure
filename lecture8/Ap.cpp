#include<iostream>
using namespace std;
int Ap(int number){
    return ((3*number)+7);
}
int main(){
    int num1;
    cin>>num1;
    cout<<"Nth term is :: "<<Ap(num1);
    return 0;
}