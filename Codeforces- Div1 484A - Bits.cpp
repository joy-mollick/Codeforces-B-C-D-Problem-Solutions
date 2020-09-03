
/// Codeforces- Div1 484A - Bits.
/// Category: greedy + bit manipulation .


#include<bits/stdc++.h>

using namespace std;


typedef unsigned long long ll;


int main()

{
    int n;

    ll l,r;

    cin>>n;

    while(n--)
    {
        cin>>l>>r;
        ll ans=l;
        for(ll i=0;i<=64;i++)
        {
            if(((1ll<<i)&l )==0)
            {
                if((ans|(1ll<<i))>r) break;
                ans|=(1ll<<i);
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}
