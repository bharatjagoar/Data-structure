#include<iostream>
using namespace std;
#include<bits/stdc++.h>

//blunder mistake i was doing here was when tempsum+arr[i]<=mid was not met i was setting the value to 0 instead
//of that i should have done tempsum=arr[i] to saev the value of that arr[i] in tempsum and perform summation 
// consectively




int MinimumSum(vector<int>arr,int partition){
    int total=0,countofstudents=1;
    for (int i = 0; i < arr.size(); i++)
    {
        total +=arr[i];
    }
    int max=arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }
    }
    

    int high=total,low = max,tempsum;
    int ans=0;
    
    while (low<=high)
    {
        // cout<<low<<"\t"<<high<<endl;
        int mid = low+((high-low)/2);
        cout<<mid<<endl;
        int count=1,flag=0,tempsum=0;
        for (int i = 0; i < arr.size(); i++){
            if(tempsum+arr[i]<=mid){
                tempsum+=arr[i];
            }else{
                tempsum=arr[i];
                count++;
            }
            if(count>partition){
                flag=1;
                break;
            }
        }   
        
        if(flag){
            low=mid+1;
        }else{
            high = mid-1;
            ans=mid;
        }
    }
    
    return ans;
}



int main(){
    vector <int> arr={12, 34, 67, 90};
    int numberofpartition = 2;
    int mid=MinimumSum(arr,numberofpartition);
    cout<<mid<<endl;
    return 0;
}
