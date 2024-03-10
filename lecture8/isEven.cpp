#include<iostream>
using namespace std;

bool isEven(int number){
    if(number&1){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int number;
    cin>>number;
    bool winodws=isEven(number);
    cout<<winodws;
    return 0;
}