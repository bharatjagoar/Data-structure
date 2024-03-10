#include<iostream>
using namespace std;
float pow(int a,int b);
int main(){
    int res;
    // res=pow(3,2);
    cout<<pow(4,3); 
    return 0;
}


float pow(int a,int b){
    float ans=1;
    for (int i = 0; i < b; i++)
    {
        ans =(float) ans*a;
    }
    return (float) ans;

}