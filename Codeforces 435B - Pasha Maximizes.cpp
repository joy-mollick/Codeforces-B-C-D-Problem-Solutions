
/// Codeforces 435B - Pasha Maximizes 
/// Nice one !


// Greedy Algorithm


#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void maximize(int swaps,int *arr,int len)
{
    if(swaps==0) return;

    for(int i=0;i<len;i++)
    {
        int mx_index=0,mx=-1;
        int limit=(swaps+i)>len?len:swaps+i;

        for(int j=i;j<limit;j++)
        {
            if(arr[j]>mx)
            {
                mx=arr[j];
                mx_index=j;
            }
        }

        swaps-=(mx_index-i);

        if(swaps>=0)
        {
            for(int k=mx_index;k>i;k--)
            {
                swap(arr[k],arr[k-1]);
            }
        }

        else break;
    }
}


int main()

{
    string s;
    int swaps;
    cin>>s>>swaps;
    int arr[s.size()];
    for(int i=0;i<s.size();i++)
    {
        arr[i]=s[i]-'0';
    }
    maximize(swaps+1,arr,s.size());
    for(int i=0;i<s.size();i++) cout<<arr[i];
    cout<<endl;
}
