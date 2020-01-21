#include<bits/stdc++.h>

using namespace std;

// Basic Number Theory

typedef unsigned long long ll;

int main()

{
    ios_base::sync_with_stdio(false);
    ll n;
    cin>>n;
    ll x,y,p,q;
    ll mn=10000000000000;
    for(ll i=1;i<=sqrt(n);i++)
    {
         p=i;
        if(n%p==0)
        {
            q=n/p;
            if(__gcd(p,q)==1ll)
            {
                if(mn>max(p,q))
                {
                    mn=max(p,q);
                    x=p;
                    y=q;
                }
            }
        }
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}
