#include<bits/stdc++.h>

using namespace std;


// Counting Pairs 

typedef unsigned long long ll;

ll funct(int x)
{
    if(x==0) return 0ll;
    else if(x%2==0) {x=x>>1;return funct(x);}
    else {x=x>>1;return funct(x)+1ll;}
}


int main()

{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    ll x;
    map<ll,ll>hashing;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        x=funct(x);
        hashing[x]++;
    }
    map<ll,ll>::iterator it;
    ll ans=0ll;
    for(it=hashing.begin();it!=hashing.end();it++)
    {
        ll p=it->second;
        ans+=p*(p-1ll)/2ll;
    }
    cout<<ans<<endl;
    return 0;
}
