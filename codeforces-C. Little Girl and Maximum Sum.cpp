//https://codeforces.com/problemset/problem/276/C

#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;

int main()

{
    int n,q,l,r;
    cin>>n>>q;
    int a[n];
    int indx[n];
    memset(indx,0,sizeof(indx));
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    while(q--)
    {
        cin>>l>>r;
        l--;
        r--;
        indx[l]++;
        if(r<n-1) indx[r+1]--;
    }
    int indx_used[n];
    memset(indx_used,0,sizeof(indx_used));
    int sm=0;
    for(int i=0;i<n;i++)
    {
        sm+=indx[i];
        indx_used[i]=sm;
    }
    sort(indx_used,indx_used+n);
    ll ans=0;
    for(int y=0;y<n;y++)
    {
        ans+=(ll)(indx_used[y]*1ll*a[y]);
    }
    cout<<ans<<endl;
    return 0;
}
