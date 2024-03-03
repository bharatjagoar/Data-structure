#include<iostream>
using namespace std;
int main(){
    int number,i=0,j;
    cin>>number;
    while (number>i)
    {
        j=i;
        // cout<<"fdsafds";
        while (0<=j)
        {   
            cout<<j+1<<" ";
            j--;
        }
        i++;
        cout<<endl;
    }
    
    return 0;
}