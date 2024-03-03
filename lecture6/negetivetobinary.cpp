#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int number=10,counter=0,sum=0,sum2,temp;
    while (number!=0)
    {
        if(number&1){
            sum = sum+(round(pow(10,counter)));
        }
        number=number>>1;
        counter++;
    }
    cout<<sum<<endl;
    sum2=sum;
    counter=0;
    //ones complement
    while(sum2!=0){
        if(sum2%10){
            cout<<sum2%10<<endl;
            number =0 + round(pow(10,counter));
        }else{
            cout<<sum2%10<<endl;
            number = number+ round(pow(10,counter));
        }
        counter++;
        sum2=sum2/10;
    }
    cout<<number;
    return 0;
}