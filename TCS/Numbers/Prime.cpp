#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
   
    // Approach 1 
    bool check = true;
    // for(int i=2;i<n;i++)
    // {
    //     if(n%i==0)
    //     check=false;
    // }

    //TC : O(n)

    //Approach 2
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        check = false;
    }

    //TC : O(sqrt(n))

    if(check)
    cout<<"Prime";
    else
    cout<<"Not Prime";
    return 0;
}