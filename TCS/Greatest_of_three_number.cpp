#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;

    // Approach 1 using if-else

    // if(num1>num2 && num1>num3)
    // cout<<num1<<" is greatest"<<endl;
    // else if(num2>num3 && num2>num1)
    // cout<<num2<<" is greatest"<<endl;
    // else
    // cout<<num3<<" is greatest"<<endl;

    // Approach 2 using math max function

    cout<<max(num1,(num2,num3))<<endl;

    return 0;
}