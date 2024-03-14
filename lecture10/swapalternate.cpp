#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,3};
    int size= sizeof(arr)/sizeof(int);
    int temp;
    if(size%2==0){
        for (int i = 0; i < size; i=i+2)
        {
            cout<<arr[i]<<"\t";
            temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        cout<<endl;
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<"\t";
        }
        
    }else{
        for (int i = 0; i < size-1; i=i+2)
        {
            cout<<arr[i]<<"\t";
            temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        cout<<endl;
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<"\t";
        }
    }
    return 0;
}