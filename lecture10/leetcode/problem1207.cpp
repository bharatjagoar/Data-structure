#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,1,1,3};
    int size = sizeof(arr)/sizeof(int);
    int counting[2001]={0};
    for(int i=0;i<arr.size();i++){
        counting[(1000)+arr[i]]++;
    }
    int countOfnonZero=0;
    for (int i = 0; i < 2000; i++)
    {
        // cout<<"position "<<i<<"\t"<<counting[i]<<endl;
        if(counting[i]!=0){
            for (int j = i+1; j < 2000; j++)
            {
                if(counting[i]==counting[j]){
                    return false;
                }
            }
            
        }
    }
    
    return 0;
}