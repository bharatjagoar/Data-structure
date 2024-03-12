#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
}


void reverseArray(int arr[],int size){
    int temp;
    for (int i = 0; i < size/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size-(i+1)];
        arr[size-(i+1)]=temp;
    }
    cout<<"printing array after reverse ::---"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    // printarray(arr,size);
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);
    
    printarray(arr,size);
    reverseArray(arr,size);
    return 0;
}