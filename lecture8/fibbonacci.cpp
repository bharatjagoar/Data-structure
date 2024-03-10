#include<iostream>
using namespace std;
int fibonacci(int x){
    if(x==1)
    return 0;
    if(x==2)
    return 1;
    int a=0,b=1,c;
    for (int i = 1; i <= x-2; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main(){
    int number;
    cin>>number;
    cout<<fibonacci(number);
    return 0;
}