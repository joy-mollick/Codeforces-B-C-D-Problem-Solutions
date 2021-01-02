

/// Codeforces Div1 573B - Bear and Blocks 
/// Nice one !


/// dp + greedy 


#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mx=100001;
int times[mx+1][2];
int arr[mx];

int main()

{

    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>arr[i];
    /// now think about if it is only allowed to destroy from right
    /// and if it is only allowed to destroy from left
    for(int i=n;i>=1;i--)
    {
        times[i][1]=min(times[i+1][1]+1,arr[i]);
    }
    for(int i=1;i<=n;i++)
    {
         times[i][0]=min(times[i-1][0]+1,arr[i]);
    }

    int ans=1;

    /// every tower will be vanished on min(times[i][0],times[i][1]) steps
    /// take maximum amongst them 
    for(int i=1;i<=n;i++)
    {
        ans=max(ans,min(times[i][0],times[i][1]));
    }

    cout<<ans<<endl;

    return 0;
}
