#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int number=1;
    while(true){
        // cout<<"enter the number";
        switch (number)
        {
        case 1:
            cout<<"number is 1";
            break;
        
        default:
            cout<<"this is default case ! "<<endl;
            exit(0);
            break;
        }
    }
    return 0;
}