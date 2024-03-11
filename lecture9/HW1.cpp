#include<iostream>
using namespace std;
int sumOfarr(int arr[],int size){
    int sum =0;
    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
    }
    
    return sum;
}
int main(){
    int arr[]={8,4,-55,10,15},sum;
    int size = sizeof(arr)/sizeof(int);
    sum=sumOfarr(arr,size);
    cout<<"the sum is :: "<<sum<<endl;
    return 0;
}