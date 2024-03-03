#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int number=2100,counter=0,sum=0;
    while (number!=0)
    {
        cout<<number<<endl;
        cout<<sum<<endl;
        if (number&1)
        {
            // cout<<1<<" ";
            sum=sum+round(pow(10,counter));
        }else{
            // cout<<0<<" ";
        }
        counter++;
        number=number>>1;
    }
    cout<<"hello world this :: "<<sum;
    return 0;
}