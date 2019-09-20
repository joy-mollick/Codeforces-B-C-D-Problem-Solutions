// https://codeforces.com/problemset/problem/779/C

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll dp[2010][2010]={0};
const ll mod=1e9+7;

int main()

{
  ll n,k,sum=0;
  cin>>n>>k;
  for(int i=1;i<=n;i++) {dp[1][i]=1;}

  for(int K=2;K<=k;K++)
  {
      for(int i=1;i<=n;i++)
      {
          for(int j=i;j<=n;j=j+i)
          {
              ll ans=(dp[K][j]+dp[K-1][i]);
              dp[K][j]=ans%mod;
             // cout<<dp[K][j]<<" "<<K<<" "<<j<<endl;
          }
      }
  }
  for(int i=1;i<=n;i++)
  {
      sum=(sum+dp[k][i])%mod;
  }
  cout<<sum<<endl;
}
