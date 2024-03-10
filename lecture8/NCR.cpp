#include<iostream>
using namespace std;
int factorial(int a){
    int ans=1;
    for (int i = 1; i <=a; i++)
    {
        ans=ans*i;
    }
    return ans;
}
int NCR(int n,int b){
    float ans = factorial(n)/(factorial(b)*factorial(n-b));
    return ans;
}
int main(){
    int n,r;
    cin>>n>>r;
    int number = NCR(n,r);
    cout<<NCR(n,r);
    return 0;
}