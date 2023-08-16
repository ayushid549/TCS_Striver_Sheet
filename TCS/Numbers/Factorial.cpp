#include<bits/stdc++.h>
using namespace std;

int Factorial(int n)
{
    if(n==1)
    return 1;

    return n * Factorial(n-1);
}

int main()
{
    int n;
    cin>>n;
    
    // Approach 1 : Iterative way TC is O(n) and SC is O(1)
    // int ans = 1;
    // for(int i=1;i<=n;i++)
    // {
    //     ans = ans*i;
    // }
    // cout<<"Factorial of "<<n<<" is "<<ans<<endl;

    // Approach 2 : Recursive way TC is O(n) and SC is O(n)
   
    cout<<Factorial(n);


    return 0;
}