#include<iostream>
using namespace std;
int main(){
    int number,i=1;
    cin>>number;
    while (i<=number)
    {
        int j=0;
        while (j<i)
        {
            cout<<i+j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}