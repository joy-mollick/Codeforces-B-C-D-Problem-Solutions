
/// Codeforces- 545C - Woodcutters.
/// Category: greedy.


/// greedily ,just iterate to assume that first check left fall


#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


const int mx=100002;

int x[mx];
int h[mx];

int main()

{
    int n;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>x[i]>>h[i];
    }

    /// initially left fall
    /// because there is nothing left to first position
    int max_cut=1;
    x[n+1]=INT_MAX;

    for(int i=2;i<=n;i++)
    {
        /// left fall
        if((x[i]-h[i])>x[i-1])
        {
            max_cut++;
            continue;
        }
        /// right fall, position in right side will be changed
        if((x[i]+h[i]<x[i+1]))
        {
            max_cut++;
            x[i]+=h[i];
        }
    }

    cout<<max_cut<<endl;

    return 0;
}
