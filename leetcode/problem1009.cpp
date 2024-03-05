#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int mask=0,number=16;
    int windows=number;
    while (number!=0)
    {
        cout<<number<<"this is number"<<endl;
        mask=(mask<<1)|1;
        number=number>>1;
    }
    int complement = (~windows)&mask;
    cout<<mask<<endl;
    cout<<complement<<"this is complement"<<endl;
    return 0;
} 