#include<bits/stdc++.h>
using namespace std;

void Bubble_Sort(int n,int arr[])
{
    bool swapping = false;

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapping = true;
            }
        }
        if(swapping == false)
           break; //already sorted
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

    Bubble_Sort(size,arr);

    cout<<"Sorted Array : ";

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}