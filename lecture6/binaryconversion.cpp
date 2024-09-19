#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i = 0, number = 1000,sum=0,counter=0;
    cout<<number<<endl;
    while (number!=0)
    {
        cout<<(number&1)<<endl;
        sum=sum+((number&1)*round(pow(10,counter)));
        counter++;
        number=number>>1;
    }
    cout<<sum<<endl;
    
    return 0;
}