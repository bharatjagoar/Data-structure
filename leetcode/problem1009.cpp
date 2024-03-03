#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int number=7,binary=0,counter = 0,invert = 0;
    //taking out the binary form 
    while (number!=0)
    {
        // cout<<"hello world "<<number<<endl;
        if(number&1){
            binary=binary+(round(pow(10,counter)));
        }
        else{
            // continue;
        }
        number=number>>1;
        counter++;
    }
    cout<<binary<<"\tbinary"<<endl;
    counter=0;
    //inverting all the bits 
    while(binary!=0){
        // cout<<binary%10<<endl;
        if(binary%10==0){
            invert = invert+(round(pow(10,counter)));
        }
        counter++;
        binary = binary/10;
    }
    cout<<invert<<"\tinversion"<<endl;
    number=0;
    counter=0;
    while (invert!=0)
    {
        // cout<<"this is te "<<endl;
        if(invert%10==1){
            number = number + (round(pow(2,counter)));
        }
        counter++;
        invert=invert/10;
    }
    cout<<number<<endl;
    return 0;
} 