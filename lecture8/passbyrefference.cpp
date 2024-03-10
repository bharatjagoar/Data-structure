#include<iostream>
using namespace std;

int numb(int* x){
    cout<<"value inside ::"<<*x<<endl;
    *x=*(x)+1;
    cout<<"value inside after x::"<<*x<<endl;
}

int main(){
    int number=1;
    numb(&number);
    cout<<"inside the main number :"<<number;
    return 0;
}