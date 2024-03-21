#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {10,2,5,10,9,1,1,4,3,7};
    cout<<nums.size()<<endl;
    vector<int> result;
    int mod;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]>0){
            // nums[nums[i]-1]=nums[nums[i]-1]*(-1);
            if (nums[nums[i]-1]>0)
            {
                nums[nums[i]-1]=nums[nums[i]-1]*(-1);
            }else{
                if (nums[i]>0)
                {
                    result.push_back(nums[i]);
                }else{
                    result.push_back(nums[i]*-1);
                }
                
                
                cout<<nums[i]<<"\t";
            }
            
        }else{
            mod = (nums[i]*-1)-1;
            if(nums[mod]>0){
                nums[mod] = nums[mod]*-1;
            }else{
                if (nums[i]>0)
                {
                    result.push_back(nums[i]);
                }else{
                    result.push_back(nums[i]*-1);
                }
                
                result.push_back(nums[i]);
                cout<<nums[i]<<"\t";
            }
        }
    }
    cout<<endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<"\t";
    }
    
    return 0;
}