
/// Codeforces: Div1 B. "Or" Game.
/// Category: greedy + bit manipulation (medium).


///if we use x^k to multiply a single number,the it will be greedy strategy for us to take the bit in higher position.
///But we don't know the number so, we will check for every number.

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mx=200001;

ll a[mx],prefix[mx],suffix[mx];

int main()

{
    ll n,k,x;
    cin>>n>>k>>x;
    ll pow_k=1ll;
    while(k--) pow_k*=x;

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    for(int i=1;i<=n;i++) prefix[i]=prefix[i-1]|a[i];

    for(int i=n;i>=1;i--) suffix[i]=suffix[i+1]|a[i];

    ll mx_or=0ll;

    for(int i=1;i<=n;i++)
    {
        mx_or=max(mx_or,prefix[i-1]|(a[i]*pow_k)|(suffix[i+1]));
    }

    cout<<mx_or<<endl;

    return 0;
}
