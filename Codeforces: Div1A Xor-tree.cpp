
/// Codeforces: Div1 429/A Xor-tree
/// Category : greedy+dfs+recursion.

/*
 It is easy to see that,it is greedy to flip the node which is not
 equal to goali.Then flip the odd level and even level according to inequality.
*/

#include<bits/stdc++.h>

using namespace std;

const int mx=100001;

vector<int>adj[mx];
bool visited[mx];
vector<int>res;
int given[mx];
int goal[mx];

///at every passing parameters,the level operation will be changed
/// two different levels opearation will be controlled by two different parameters.
void dfs(int u,int odd_lev,int even_lev)
{
    visited[u]=true;
    if( (given[u]^odd_lev)!=goal[u] )
    {
        res.push_back(u);
        /// flip operation
        odd_lev^=1;
    }
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(!visited[v])
        {
            ///as new level,so level will be changed.
            dfs(v,even_lev,odd_lev);
        }
    }
}

int main()

{
   int n,u,v,m;
   cin>>n;
   m=n-1;
   while(m--)
   {
       cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
   }
   for(int i=1;i<=n;i++)
   {
       cin>>given[i];
   }
   for(int j=1;j<=n;j++)
   {
       cin>>goal[j];
   }
   /// first odd_lev and even_lev has no operation
   memset(visited,false,sizeof(visited));
   dfs(1,0,0);
   cout<<res.size()<<endl;
   int sz=res.size();
   for(int i=0;i<sz;i++)
   {
       cout<<res[i]<<endl;
   }
   return 0;
}
