
/// Codeforces- 500C - New Year Book Reading.
/// Category: greedy + implementation.

/// Just add weight between two same books , but ignore one book's another once .That's it.

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()

{
   ios_base::sync_with_stdio(false);
   int n,m;
   cin>>n>>m;
   int weight[n+1];
   int stacked[m+1];

   for(int i=1;i<=n;i++)
   {
       cin>>weight[i];
   }

   for(int i=1;i<=m;i++)
   {
       cin>>stacked[i];
   }

   bool vis[n+1];
   memset(vis,false,sizeof(vis));

   int ans=0;

   for(int i=2;i<=m;i++)
   {
        memset(vis,false,sizeof(vis));
        for(int j=i-1;j>=1;j--)
        {
            if(stacked[j]==stacked[i]) break;

            if(!vis[stacked[j]])
            {
                ans+=weight[stacked[j]];
                vis[stacked[j]]=true;
            }
        }
   }

   cout<<ans<<endl;

   return 0;
}
