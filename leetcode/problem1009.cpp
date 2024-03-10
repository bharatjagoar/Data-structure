#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int mask=0,number=6;
    while (number!=0)
    {
        mask=(mask<<1)|1;
        number=number>>1;
    }
    int complement = mask&(~number);
    cout<<mask<<endl;
    cout<<complement;
    return 0;
} 