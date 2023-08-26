#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {1,1,2,3,5};
    int arr2[] = {1,2,2,3,4};

    int i=0,j=0;
    vector<int> ans;

    while(i<5 && j<5)
    {
        if(arr1[i]==arr2[j])
        {
            ans.push_back(arr1[i]);
        }
        i++,j++;
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}