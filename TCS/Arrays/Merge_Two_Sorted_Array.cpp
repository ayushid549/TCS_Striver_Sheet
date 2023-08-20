#include<bits/stdc++.h>
using namespace std;

void MergeTwoSortedArray(int arr1[5],int arr2[7])
{
    
    int ans[12] = {0};
    int i=0,j=0,k=0;
    
    while(i<5 && j<7)
    {
        if(arr1[i]<arr2[j])
        {
            ans[k++] = arr1[i++];
        }
        else
        {
            ans[k++] = arr2[j++];
        }
    }

    //  Add the remaining element from array 1
    while(i<5)
    {
        ans[k++] = arr1[i++];
    }

    // Add the remaining element from array 2
    while(j<7)
    {
        ans[k++] = arr2[j++];
    }

    //Print the new array

    for(int i=0;i<12;i++)
    {
        cout<<ans[i]<<" ";
    }
}

int main()
{
    int arr1[5] = {1,3,5,7,9};
    int arr2[7] = {0,2,4,6,8,10,12};

    MergeTwoSortedArray(arr1,arr2);

    return 0;
}