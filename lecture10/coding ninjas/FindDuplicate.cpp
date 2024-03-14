#include<iostream>
using namespace std;
//we are comming at this solution after brute force appraoch !!
int main(){
    int arr[] = {5 ,1, 2, 3, 4, 2 };
    int size = sizeof(arr)/sizeof(int);
    int sum=0;
    for (int i = 0; i < size; i++) {
        sum=sum+arr[i];
    }
    int sum2=0;
    for (int i = 0; i < size ; i++) {
        sum2=sum2+i;
    }
    cout<<sum<<"\t"<<sum2<<endl;
    cout<<sum-sum2;
    return 0;
}