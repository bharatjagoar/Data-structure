#include<iostream>
using namespace std;
int main(){
    int number;
    cin>>number;
    for(int i=0;i<number;i++){
        for(int j = 0 ;j<number;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}