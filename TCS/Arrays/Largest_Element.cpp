#include<bits/stdc++.h>
using namespace std;

int Largest_Element(int n,int arr[])
{
    int maxi = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}

int main()
{
    int size;
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<Largest_Element(size,arr);

    return 0;
}

// Time Complexity : O(n)