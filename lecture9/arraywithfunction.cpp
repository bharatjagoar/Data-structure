#include<iostream>
using namespace std;
int arrReading(int arr[],int size){
    //reading the value
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    
    //Reading elements through pointer
    cout<<arr+1<<endl;    //printing the address of 2nd element 
    cout<<*(arr)+8<<endl; //printing the value using dereferencing operator
    cout<<*(arr+2)<<endl;//reading at 3 position of the array !
    // *(arr+1);
    for (int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size = (int) sizeof(arr)/sizeof(int);
    arrReading(arr,size);
    return 0;
}