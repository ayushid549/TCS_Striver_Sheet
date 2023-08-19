#include<bits/stdc++.h>
using namespace std; 

void Merge_Sort(int arr[],int start,int end)
{
    if(start>=end)
       return;

    int mid = (start+end)/2;

    Merge_Sort(arr,start,mid);
    Merge_Sort(arr,mid+1,end);
    
    // Merge two sorted array
    Merge(arr,start,end);
}

void Merge(int arr[],int start,int end)
{
    int mid = (start+end)/2;
    int len1 = mid - start + 1;
    int len2 = end-mid; 
    int arr1[len1],arr2[len2];
   
    int d = start;
   
    for(int i=0;i<len1;i++)
    {
        arr1[i] = arr[d++];
    }   

    d = mid+1;    
    for(int i=0;i<len2;i++)
    {
        arr2[i] = arr[d++];
    }
    
    int i=0,j=0,k=start;

    while(i<len1 && j<len2)
    {
        if(arr1[i]<arr2[j])
        {
            arr[k] = arr1[i];
            i++,k++;
        }
        else
        {
            arr[k] = arr2[j];
            j++,k++;
        }
    }

    while(i<len1)
    {
        arr[k++] = arr1[i++];
    }

    while(j<len2)
    {
        arr[k++] = arr2[j++];
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

    Merge_Sort(arr,0,size-1);

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}