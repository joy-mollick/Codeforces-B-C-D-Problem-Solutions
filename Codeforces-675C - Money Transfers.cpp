

/// Codeforces 675C. Money Transfers

/// Fantastic one !


/// greedy and sub-array technique

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

/// if we choose any segment whose sum is zero 
/// then swapping adjacent positions can be length-1

/// So if we choose total k segments (with zero sum) 
/// then total operations will be len1-1+len2-1+lenk-1=n-k
/// so we will keep track of maximum segments (k) with zero_sums

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    ll val;
    cin>>n;
    ll sum=0;
    map<ll,int>dp;
    ll operations=n-1;
    /// we want to maximize our parts whose sum is zero
    int mx_zero_sum_parts=0;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        sum+=val;
        dp[sum]++;
        mx_zero_sum_parts=max(mx_zero_sum_parts,dp[sum]);
    }

    operations=min(n-1,n-mx_zero_sum_parts);
    cout<<operations<<endl;

    return 0;

}
