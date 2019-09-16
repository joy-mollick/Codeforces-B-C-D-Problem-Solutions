  // https://codeforces.com/problemset/problem/588/B

   #include<bits/stdc++.h>

   using namespace std;

typedef  long long ll;

set<ll>s;


void prime(ll n)
{
    while(n%2==0)
    {
        n=n>>1;
        s.insert(2);
    }
    for(ll i=3;i*i<=n;i=i+2)
    {
        while(n%i==0)
        {
            n=n/i;
            s.insert(i);
        }
    }
    if(n>1)
    {
        s.insert(n);
    }
}

    int main()
    {
        ll n,k;
        ll ans=1ll;
        cin>>n;
        set<ll>::iterator it;
        prime(n);
        for(it=s.begin();it!=s.end();it++)
        {
            ans=ans*(*it);
        }
        cout<<ans<<endl;
    }
