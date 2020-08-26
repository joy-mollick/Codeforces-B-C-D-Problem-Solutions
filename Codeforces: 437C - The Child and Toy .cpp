
/// Codeforces: 437C - The Child and Toy 
/// Category : greedy+graph.

#include<bits/stdc++.h>

using namespace std;

const int mx=1001;

vector<int>adj[mx];
bool visited[mx];
int tot_cost=0;
int cst[mx];

int main()

{
    int n,m,v,u;
    cin>>n>>m;
    vector< pair<int,int> >cost;
    for(int i=1;i<=n;i++) {cin>>v;cost.push_back(make_pair(v,i));cst[i]=v;}
    while(m--)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    /// sort according to decreasing cost 
    /// it is greedy approach .
    sort(cost.rbegin(),cost.rend());
    memset(visited,false,sizeof(visited));
    /// find the every directly connected component and add its cost 
    for(int j=0;j<n;j++)
    {
        u=cost[j].second;
        if(visited[u]) continue;
        for(int i=0;i<adj[u].size();i++)
        {
            v=adj[u][i];
            if(!visited[v])
            {
                tot_cost+=cst[v];
            }
        }
         visited[u]=true;
    }
    cout<<tot_cost<<endl;
}
