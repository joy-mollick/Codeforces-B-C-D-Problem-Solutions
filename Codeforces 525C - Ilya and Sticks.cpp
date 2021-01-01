
/// Codeforces 525C - Ilya and Sticks 
/// Nice one !


/// Greedy Algorithm


#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll cnt[1000001];

int main()

{
    ll n;
    cin>>n;
    ll l[n];
    for(int i=0;i<n;i++) {cin>>l[i],cnt[l[i]]++;}
    long long x=0,x1=0,y=0,y1=0;
    vector<ll>ans;
    for(ll i=1000000;i>=1;i--)
    {
        if(cnt[i]>1) {while(cnt[i]>=2){cnt[i]-=2ll;ans.push_back(i);}}

        if(cnt[i]>0)
        {
            if(cnt[i-1]>0)
            {
                cnt[i]--;
                cnt[i-1]--;
                ans.push_back(i-1);
            }
        }
    }

   ll res=0ll;

   if(ans.size()>1){
   for(int i=0;i<ans.size();i=i+2)
   {
      /// cout<<ans[i]<<" "<<ans[i+1]<<endl;
       if((i+1)>=ans.size()) break;
       else res+=ans[i]*ans[i+1];
   }
   cout<<res<<endl;
   }
   else cout<<"0"<<endl;

    return 0;
}
