// https://codeforces.com/problemset/problem/779/C

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()

{
   ll n,k;
   cin>>n>>k;
   vector< pair<ll,ll> > vp;
   ll a[n];
   ll b[n];
   for(int i=0;i<n;i++) cin>>a[i];
   for(int j=0;j<n;j++) cin>>b[j];

   for(int l=0;l<n;l++)
   {
       vp.push_back(make_pair((b[l]-a[l]),b[l]));
   }
   sort(vp.rbegin(),vp.rend());
   ll ans=0;
   for(int i=0;i<k;i++)
   {
       ans+=(vp[i].second-vp[i].first);
   }
   for(int j=k;j<n;j++)
   {
       if(vp[j].first<0) {ans+=vp[j].second;}
       else
       {
           ans+=(vp[j].second-vp[j].first);
       }
   }
   cout<<ans<<endl;
}
