#include<iostream>
using namespace std;
int main(){
    int number=11,counter=0;
    while(number!=0){
        if(number&1==1){
            counter++;
        }
        number=number>>1;
    }
    cout<<counter;
    return 0;
}