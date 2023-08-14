#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    //Approach 1 : using if else
    
    // if(n1<n2)
    // cout<<n2<<" is greater"<<endl;
    // else if(n1>n2)
    // cout<<n1 <<" is greater"<<endl;
    // else
    // cout<<"Both are same"<<endl;

    // Approach 2 : using math.max function

    cout<<max(n1,n2)<<" is greater"<<endl;

    return 0;
}