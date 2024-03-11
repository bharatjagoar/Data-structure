#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    cout<<arr<<endl;//prints address
    cout<<arr[2]<<endl;
    int arr2[5]={0};//initialization with 0
    for (int i = 0; i < 5; i++)
    {
        cout<<arr2[i]<<endl;
    }
    int arr3[5]={1};
    for (int i = 0; i < 5; i++)
    {
        cout<<arr3[i]<<"arr3"<<endl;
    }//not setting the elements to 1


    int arr4[5];
    std::fill_n(arr4,5,456);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr4[i]<<"\tarr4"<<endl;
    }//fills the array with number 456
    return 0;
}