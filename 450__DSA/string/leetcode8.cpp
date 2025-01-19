#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> number;
    // cout << "jello" << endl;
    string s = "  + 413";
    int flag = 0, sign = 1;
    int size = s.size();

    for (int i = 0; i < size; i++)
    {
        if ((s[i] >= '0') && (s[i] <= '9'))
        {
            // cout<<"hello world"<<endl;
            // if((s[i]=='0') && (number.size()==0) ) continue;
            number.push_back(s[i] - '0');
        }
        else if (((s[i] == '+') || (s[i] == '-')) && !flag)
        {
            if (number.begin() != number.end())
                break;
            flag = 1;
            if (s[i] == '+')
                continue;
            else
                sign = 0; // flag = 1 means it is negetive number
        }
        else if (s[i] == ' ')
        {
            if (number.size() > 0)
            {
                break;
            }
            else if(flag) break;
        }
        else
        {
            break;
        }
    }

    string name;
    name += s[1];
    name += s[2];
    // cout << name << endl;
    int sum = 0, prod = 1;
    for (auto x : number)
    {
        cout << x << endl;
        if (sum > ((INT32_MAX - x) / 10))
        {
            if (sign)
                return INT32_MAX;
            else
                return INT32_MIN;
        }
        sum = (sum * 10) + x;
    }
    if (sign)
        cout << sum << endl;
    else
        cout << (-1 * sum) << endl;
    // cout<<INT32_MIN<<INT32_MAX<<endl;
    return 0;
}