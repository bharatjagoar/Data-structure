#include<iostream>
using namespace std;
int main(){
    int number,a=0,b=1,i=0;
    cout<<"enter a number ::"<<endl;
    cin>>number;
    while (i<=number)
    {
        if(i==0){
            cout<<a<<endl;
        }else if(i==1){
            cout<<b<<endl;
        }else{
            cout<<a+b<<endl;
            a=b;
            b=b+a;
        }
        i++;
    }
    
    return 0;
}