
/// Codeforces : 1009D - Relatively Prime Graph.
/// Category : greedy + math .

#include<bits/stdc++.h>


using namespace std;

const int mx=300001;

typedef long long ll;

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;

    cin>>n>>m;

    int M=0;

    pair<int,int>pairs[m+1];

    /// for i=600,the total co-prime pairs will go beyond 100000.
    /// So,this algorithm is enough to run within time limit.

    /// (n-1) pairs (1,j) guarantee that graph is connected.
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(__gcd(i,j)==1)
            {
                M++;
                /// u
                pairs[M].first=i;
                /// v
                pairs[M].second=j;
            }

            if(M==m) break;

        }
        if(M==m) break;
    }

    if(m<n-1 || (M!=m)) {cout<<"Impossible"<<endl;}
    else
    {
        cout<<"Possible"<<endl;
        for(int i=1;i<=m;i++)
        {
            cout<<pairs[i].first<<" "<<pairs[i].second<<endl;
        }
    }

    return 0;
}
