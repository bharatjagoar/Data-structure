#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int number=5,mask=0;
    //creating mask !!
    while (number!=0)
    {
        mask=(mask<<1)|1;
        number=number>>1;
    }
    cout<<mask;
    return 0;
}