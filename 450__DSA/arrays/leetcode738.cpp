#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int n = 332, mark,sum=0,prod=1;
    vector<int> arr;
    while (n != 0)
    {
        
        arr.push_back(n % 10);
        n = n / 10;
    }
    for (int i = 1; i < arr.size(); i++)
    {
        cout<<arr[i]<<arr[i-1]<<endl;
        
        if (arr[i - 1] < arr[i])
        {
            
            mark = i - 1;
            arr[i]--;
        }
    }
    for (int i = mark; i >= 0; i--)
    {
        arr[i] = 9;
    }
    for (auto x : arr)
    {
        
        sum=sum+(x*prod);
        prod=prod*10;
        // cout << x;
    }
    cout<<sum;
    return 0;
}