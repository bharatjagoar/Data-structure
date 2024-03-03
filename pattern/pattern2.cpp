#include<iostream>
using namespace std;
int main(){
    int number;
    cin>>number;
    for(int i=0; i<number;i++){
        for(int j=number;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}