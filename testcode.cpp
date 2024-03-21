#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int index=sizeof(arr)/sizeof(int)-1;
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[index-i]<<"\t";
    }
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<arr[i]<<"\t";
        
    // }
    return 0;
}