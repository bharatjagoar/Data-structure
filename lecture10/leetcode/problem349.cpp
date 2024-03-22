#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> nums1={1,2,2,1},nums2={2,2},result;
    int nums1size = nums1.size();
    int nums2size = nums2.size();
    if (nums1size>nums2size){

        for (int i = 0; i < nums2size; i++)
        {
            for (int j = 0; j < nums1size; j++)
            {
                if (nums1[j]>0)
                {
                    if(nums2[i]==nums1[j]){
                        result.push_back(nums2[i]);
                        nums1[j]=nums1[j]*-1;
                        break;
                    }    
                }
                
                
            }
            
        }
                
    }else{
        
        for (int i = 0; i < nums1size; i++)
        {
            for (int j = 0; j < nums2size; j++)
            {
                if (nums2[j]>0)
                {
                    if(nums2[i]==nums1[j]){
                        result.push_back(nums1[i]);
                        nums2[j]=nums2[j]*-1;
                        break;
                    }    
                }
                
                
            }
            
        }
        
    }
    cout<<"nums1"<<endl;

    for (int i = 0; i < nums1.size(); i++)
    {
        cout<<nums1[i]<<"\t";
    }
        cout<<endl<<"nums2"<<endl;
    for (int i = 0; i < nums2.size(); i++)
    {
        cout<<nums2[i]<<"\t";
    }
    cout<<endl<<"result"<<endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<"\t";
    }
    
    
    return 0;
}