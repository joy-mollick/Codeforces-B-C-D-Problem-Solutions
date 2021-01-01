

/// Codeforces Div1 713A - Sonya and Queries 	
/// Nice one !


/// As it should be matched from right and
///  it's supplemented with 0-s from the left

/// So , we can convert our given number to another number by 0 and 1


#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll mx=2ll<<18;

int cont[mx];

ll done(ll x)
{
    ll po=1ll;
    ll res=0ll;
    ll rem;
    while(x>0ll)
    {
        rem=x%10;
        if(rem%2ll==1) res+=(po);
        x=x/10ll;
        po=po<<1ll;
    }
    return res;
}

int main()

{
    int t;
    cin>>t;

    string s;
    ll a;

    while(t--)
    {
          cin>>s>>a;

          ll val=done(a);


          if(s=="?")
          {
              cout<<cont[val]<<'\n';
          }

          else if(s=="-")
          {
              cont[val]--;
          }

          else
          {
              cont[val]++;
          }
    }

    return 0;
}
