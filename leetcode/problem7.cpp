#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int number=789,temp=0,counter=1;
    while (number!=0)
    {
        temp = (temp*10)+(number%10);
        number=number/10;
        counter++;
    }
    cout<<INT32_MIN;
    return 0;
}