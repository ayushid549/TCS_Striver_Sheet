#include<bits/stdc++.h>
using namespace std;

void Selection_Sort(int n,int arr[])
{
    
    for(int i=0;i<n-1;i++)
    {
        int mini = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mini])
            {
                mini = j;
            }    
        }
        swap(arr[i],arr[mini]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
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
    cout<<endl;

    cout<<"Sorted Array : ";
    Selection_Sort(size,arr);

    return 0;
}

// Time Complexity : O(n^2)
// Space Complexity : O(1)
// Approach : select the minimum element from array and Set the it to its final position 