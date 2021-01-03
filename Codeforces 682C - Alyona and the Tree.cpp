

/// Codeforces 682C - Alyona and the Tree 
/// Nice one !


/// dfs + kadane's algo 

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll val[100001];
ll siz[100001];
int ans=0;

typedef pair<int,ll> pii;

vector<pair<int,ll> >adj[100001];

void dfs_counting_size_of_subtree(int curr)
{
    siz[curr]=1;
    for(int i=0;i<adj[curr].size();i++)
    {
        dfs_counting_size_of_subtree(adj[curr][i].first);
        siz[curr]+=siz[adj[curr][i].first];
    }
}

void dfs(int curr,ll dist)
{
    /// it is exactly for kadane's algo 
    if(dist<0) dist=0ll;

    /// if greater then full subtree of curr should be deleted 
    if(dist>val[curr])
    {
        ans+=siz[curr];
        return;
    }

    for(int i=0;i<adj[curr].size();i++)
    {
        dfs(adj[curr][i].first,dist+adj[curr][i].second);
    }
}

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,u;
    ll cost;
    cin>>n;
    for(int i=0;i<n;i++) cin>>val[i];

    for(int i=0;i<n-1;i++)
    {
        cin>>u>>cost;
        u--;
        adj[u].push_back(make_pair(i+1,cost));
    }

    dfs_counting_size_of_subtree(0);
    dfs(0,0);
    cout<<ans<<endl;

}
