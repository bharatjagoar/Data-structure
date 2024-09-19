#include <iostream>
using namespace std;
#include <bits/stdc++.h>

//formula to find the sum of bianary is (a+b+c)%2
//formula to find the carry is (a+b+c)/2



void addBinary(vector<int> one, vector<int> two)
{
    vector<int> solution;
    int sum = 0, carry = 0, counter = 1, bit;
    int onesize = one.size();
    int twosize = two.size();
    if (onesize > twosize)
    {
        cout << "bharat" << endl;
        while (0 <= (twosize - counter))
        {
            sum = one[onesize - counter] + two[twosize - counter] + carry;
            bit = sum % 2;
            carry = (one[onesize - counter] + two[twosize - counter] + carry) / 2;
            solution.insert(solution.begin(), bit);
            counter++;
        }
        while (0 <= (onesize - counter))
        {
            carry = (carry + one[onesize - counter]) / 2;
            sum = (carry + one[onesize - counter]) % 2;
            bit = sum % 2;
            solution.insert(solution.begin(), bit);
            counter++;
        }
        if (carry)
        {
            solution.insert(solution.begin(), carry);
        }
    }
    else if (onesize < twosize)
    {
        cout << carry << "\t" << sum << "\t" << counter << endl;
        while (0 <= (onesize - counter))
        {
            sum = one[onesize - counter] + two[twosize - counter] + carry;
            bit = sum % 2;
            solution.insert(solution.begin(), bit);
            carry = (one[onesize - counter] + two[twosize - counter] + carry)/2;
            counter++;
        }
        cout<<twosize<<counter<<carry<<endl;
        while (0 <= (twosize-counter))
        {
            sum = two[(twosize-counter)]+carry;
            bit = sum % 2;
            solution.insert(solution.begin(), bit);
            counter++;
        }
    }

    for (auto x : solution)
    {
        // cout<<"fdsafdsafdsa"<<endl;
        cout << x;
    }
    // cout << endl<< solution[1] << endl;
}

int main()
{
    int num1 = 29, num2 = 15;
    // cout << num1 << endl;
    vector<int> bin1, bin2;
    // takeout binary of first
    while (num1 != 0)
    {
        bin1.insert(bin1.begin(), num1 & 1);
        num1 = num1 >> 1;
    }
    // for (auto x : bin1)
    // {
    //     cout << x;
    // }
    while (num2 != 0)
    {
        bin2.insert(bin2.begin(), num2 & 1);
        num2 = num2 >> 1;
    }
    // for (auto x : bin2)
    // {
    //     cout << x;
    // }
    // cout<<endl;
    // cout<<bin1.size()<<endl;
    // cout<<bin2.size()<<endl;
    addBinary(bin1, bin2);
    return 0;
}

