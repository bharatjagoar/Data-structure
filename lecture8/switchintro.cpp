#include<iostream>
using namespace std;
int main(){
    int number=78;
    switch (number)
    {
        case 1:
            cout<<"hello world !! "<<endl;
            break;
        case 2:
            cout<<"bye world !! "<<endl;
            break;
        default:
            cout<<"this is the default case ";
            break;
    }
    return 0;
}