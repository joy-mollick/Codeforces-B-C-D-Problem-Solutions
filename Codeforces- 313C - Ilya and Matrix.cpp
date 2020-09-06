/// Codeforces- 313C - Ilya and Matrix 
/// Category: greedy + implementation.(medium).


/// first greatest four elements used will be maximum of 4x4 size matrix
/// thus 16 greatest elements in 8x8 size matrix 


#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

const ll mx=2000001;

ll arr[mx];

bool comp(ll x,ll y)
{
    return (x>y);
}

int main()
{
    ios_base::sync_with_stdio(false);
    ll n,num;
    cin>>n;
    ll ans=0ll;
    ll sum=0ll;

    for(int i=1;i<=n;i++) {cin>>arr[i];}
    sort(arr+1,arr+1+n,comp);
    ll four=1ll;
    for(int i=1;i<=n;i++)
    {
        sum+=arr[i];
        if(four==i)
        {
            four*=4ll;
            ans+=sum;
        }
    }
    cout<<ans<<endl;

    return 0;
}
