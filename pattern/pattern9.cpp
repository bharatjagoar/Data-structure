#include<iostream>
using namespace std;
int main(){
    int number,i=0;
    cin>>number;
    while (i<=number)
    {
        int j=0;
        while (j<number)
        {
            if(number-j<=i){
                cout<<"*";
            }else{
                cout<<" ";
            }
            j++;
        }
        i++;
        cout<<endl;
    }
    
    return 0;
}