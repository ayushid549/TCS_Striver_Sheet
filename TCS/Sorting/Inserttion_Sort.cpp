#include<bits/stdc++.h>
using namespace std;

void Insertion_Sort(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        int j = i;
        while(j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
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

     Insertion_Sort(size,arr);

    cout<<"Sorted Array : ";

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}