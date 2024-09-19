#include <iostream>
#include <math.h>
using namespace std;
#include <bits/stdc++.h>


// int * AddBinary(int carry, int a,int b){
//     int arr[2]={0};
//     if(carry&&a){
//         arr[0] = 1;
//         arr[1] = 1;
//     }else if(!(carry&&a)){
//         arr[0] = 1;
//     }



//     return arr;
// }


int main()
{

    cout << "hello wr" << endl;
    int number = -2;
    number = 0 - number;
    cout << number << endl;

    vector<int> arr(32, 0);
    // arr[0]=123;

    auto end = arr.end() - 1;
    cout << *(end) << endl;
    while (end != arr.begin())
    {
        if (number & 1)
        {
            *(end) = 1;
        }
        number = number >> 1;
        end--;
    }
    // looking for the array
    for (auto x : arr)
    {
        cout << x;
    }
    cout << endl;
    // converting to 1s complement
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        // cout<<*(i);
        if (*(i))
        {
            *(i) = 0;
        }
        else
        {
            *(i) = 1;
        }
    }
    // printing 1s complement
    for (auto x : arr)
    {
        cout << x;
    }
    int carry = 0;
    int sum = 0;
    

    


    return 0;
}