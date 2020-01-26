#include<bits/stdc++.h>


using namespace std;

typedef long long ll;

ll const mod = 1e9+7;

ll po(ll a,ll b)
{
    ll ans=1ll;
    while(b)
    {
        if(b&1ll) ans=(ans*a)%mod;

        a=(a*a)%mod;
        b=b>>1ll;
    }
    return (ans%mod);
}

int main()

{
    ios::sync_with_stdio(false);

    ll n;
    cin>>n;
    char c;
    map<char,ll>m;
    ll mx=0ll;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        m[c]++;
        mx=max(m[c],mx);
    }
    ll B=n;
    ll A=0ll;
    map<char,ll>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        if(mx==(it->second)) A++;
    }
    ll ans=po(A,B);
    cout<<ans<<endl;
    return 0;
}
