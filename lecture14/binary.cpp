#include<iostream>
using namespace std;
#include<vector>
int binarysearch(vector<int> number,int key){
    int high=number.size()-1;
    int low=0,mid;
    while(low<=high)
    {
        mid= low+(high-low)/2;
        if(key==number[mid]){
            return mid;
        }else if(key>number[mid]){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> number={1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target=13;
    int position = binarysearch(number,target);
    cout<<position<<endl;
    return 0;
}