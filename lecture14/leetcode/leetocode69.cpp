#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int findsqrt(int number){
    int high = number,low=0;
    int mid = low+((high-low)/2);
    int square = mid*mid;
    while (low<=high){
        cout<<"hello world"<<endl;
        if(square==number){
            return mid;
        }else if(square>number){
            high= mid-1;
        }else if(square<number){
            low=mid+1;
        }
        mid = low+((high-low)/2);
        square = mid*mid;    
    }
    return high;
        
}
int main(){
    int number=37;
    int sqrt=findsqrt(number);
    cout<<sqrt<<endl;
    return 0;
}