#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

/*

ll mod=1000000007 ;

ll po(ll a,ll b)
{
   ll ans=1ll;
   while(b)
   {
       if(b&1ll){
        ans=(ans*a)%mod;}
       b=b>>1ll;
       a=(a*a)%mod;
   }
   return (ans%mod);
}
*/



int main()

{
    ios_base::sync_with_stdio(false);
    int n,x,a;
    cin>>n>>x;
    vector<int>v;
    while(n--)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int ans=0;
    while(true)
    {
        int index=(v.size()+1)/2 -1;
        if(v[index]==x) break;
        v.push_back(x);
        ans++;
        sort(v.begin(),v.end());
    }
    cout<<ans<<endl;
}
