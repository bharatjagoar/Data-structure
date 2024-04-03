#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int firstOuccurence(vector<int> nums,int target){
    // cout<<"hello world !! "<<endl;
    int high= nums.size()-1;
    int low = 0,index=-1;
    int mid = low + (high-low)/2;
    while (low<=high){
        cout<<"hello world !! "<<endl;
        if (nums[mid]==target){
            index = mid;
            high = mid-1;
        }else if(nums[mid]>target){
            high = mid-1;
        }else if(nums[mid]<target){
            low = mid+1;
        }
        mid = low + (high-low)/2;
    }
    return index;
}

int lastOccurence(vector<int>nums,int target){
    //{5,7,7,8,8,10}
    // mid=2;
    // arrmid =7
    // arrmid > key;
    // high=1 and  low=0; 


    int high = nums.size()-1,low=0,index=-1;
    int mid = low + (high-low)/2;
    while (low<=high)
    {
            cout<<"bye bye "<<endl;
            if(nums[mid]==target){
                index = mid;
                low=mid+1;
            }else if(nums[mid]>target){
                high = mid-1;
            }else if(nums[mid]<target){
                low=mid+1;
            }
            mid = low + (high-low)/2;
    }
    

    return index;
}

int main(){
        vector<int> nums = {5,7,7,8,8,10};
        int target = 6;
        int left = lastOccurence(nums,target);
        int first = firstOuccurence(nums,target);
    cout<<first<<left<<endl;
    return 0;
}