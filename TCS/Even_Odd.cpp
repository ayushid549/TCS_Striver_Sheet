#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    // Using Normal Operators
    // if(n%2==0)
    // cout<<"Even Number"<<endl;
    // else
    // cout<<"Odd Number"<<endl;

    //Using Bitwise & operator
    if((n&1)==0)
    cout<<"Even Number"<<endl;
    else
    cout<<"Odd Number"<<endl;

    // TC of both the number is O(1) 
    // But bitwise operators are little bit faster then Normal Arithmatic Operator


    
    return 0;
}