#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr1 = {1,2,3,4};
    vector<int> arr2 = {6};
    
    int i = arr1.size()-1;
    int j = arr2.size()-1;
    int carry = 0;

    vector<int> ans;

    while(i>=0 && j>=0)
    {
        int val1 = arr1[i];
        int val2 = arr2[j];
        int sum = val1 + val2 + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while(i>=0)
    {
        int sum = arr1[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }

    while(j>=0)
    {
        int sum = arr2[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }

    while(carry!=0)
    {
        int sum = sum + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }

    reverse(ans.begin(),ans.end());

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}