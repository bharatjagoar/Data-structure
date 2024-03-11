#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int foundNumber){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==foundNumber){
            return 1;
        }
    }
    return 0;
    
}

int main(){
    int number[]={5,1,2,7,8,6,9};
    int size = sizeof(number)/sizeof(int);
    int result=linearSearch(number,size,6);
    if(result){
        cout<<"yes found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
    return 0;
}