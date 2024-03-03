#include<iostream>
using namespace std;
int main(){
    int number,i=0;
    cin >> number;
    while(i<number){
        
        int j=0;
        while (j<=i)
        {
            char a = 65+i+j;
            cout<<a<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}