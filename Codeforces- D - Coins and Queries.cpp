
/// Codeforces- D - Coins and Queries.
/// Category: greedy + math.

/// try to fill up from highest power of two remaining in our given set

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()

{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int n,q,num;
   cin>>n>>q;

   map<int,int>cont;

   while(n--)
   {
       cin>>num;
       cont[num]++;
   }

   while(q--)
   {
       int num;
       cin>>num;
       int ans=0;
       int mx=1<<30;
       /// traverse from last
       for(mx;mx>=1;mx=mx>>1)
       {
           if(cont[mx]==0) continue;
           else
           {
               int times=min(cont[mx],num/(mx));
               ///reduce number
               num-=(times*mx);
               ans+=times;
           }
       }

       if(num==0)
       cout<<ans<<"\n";
       else cout<<"-1"<<"\n";
   }

   return 0;
}
