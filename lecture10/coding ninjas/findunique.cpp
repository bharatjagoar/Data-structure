#include<iostream>
using namespace std;
void printarr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }
}

//brute force approach
int findUnique(int arr[],int size){
    int flag,number;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
        flag=0;
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]==arr[j])
            {
                flag=1;
                break;
            }
            
        }
        if(flag==0){
            number=arr[i];
            break;
        }
    }
    return number;
}
int main(){
    int arr[] = {5,1,1,6,5,8,6};
    int size = sizeof(arr)/sizeof(int);
    // printarr(arr,size);
    int number = findUnique(arr,size);
    // cout<<number<<endl;
    return 0;
}