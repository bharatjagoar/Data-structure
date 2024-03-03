#include<iostream>
using namespace std;
int main(){
    int number,i=0;
    cin>>number;
    
    while (i<number)
    {
        int j=i;
        while (j>=0)
        {
            char a = 64+number-j;
            cout<<a<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}