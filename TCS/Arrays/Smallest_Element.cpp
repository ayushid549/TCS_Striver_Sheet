#include<bits/stdc++.h>
using namespace std;

// Approach 1 : Sort the array and print first element
//  Time Complexity : O(nlogn)

// Approach 2 : Time Complexity : O(n)
int smallest_element(int n,int arr[])
{
    int mini = arr[0];
    for(int i=1;i<n;i++)
    {
        if(mini > arr[i])
        {
            mini=arr[i];
        }
        // mini = min(mini,arr[i]);
    }
    return mini;
}

int main()
{
    int size = 5;
    int arr[size];

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<smallest_element(size,arr);

    return 0;
}