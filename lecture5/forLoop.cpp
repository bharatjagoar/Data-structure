#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    cout << "hello world" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "Removing initailizing and increament" << endl;
    int i = 0;
    for (; i < 5;)
    {
        cout << i << endl;
        i++;
    }
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "Removing condition" << endl;
    i = 0;
    for (; ;)
    {
        
        if(i<5){
            cout << i << endl;
        }else{break;}
        i++;
    }

    return 0;
}