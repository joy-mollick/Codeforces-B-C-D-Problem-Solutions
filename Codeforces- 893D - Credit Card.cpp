
/// Codeforces- 893D - Credit Card .
/// Category: greedy + two pointer.


#include<bits/stdc++.h>

using namespace std;

const int mxn=100002;

typedef long long ll;


int main()

{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int n,d;
   cin>>n>>d;
   int arr[n];
   int dp[n];
   int ans=0;

   for(int i=0;i<n;i++) cin>>arr[i];

   /// first check amount exceeds d or not
   int temp=0;
   for(int i=0;i<n;i++)
   {
       temp+=arr[i];
       if(arr[i]==0)
       {
  ///if temp less than 0,when checking then obviously going bank to deposite
           if(temp<0)
           {
               temp=0;
           }
       }
     /// impossible
       if(temp>d)
       {
           cout<<"-1"<<endl;
           return 0;
       }
   }

   dp[0]=arr[0];
   for(int i=1;i<n;i++)
   {
       dp[i]=arr[i];
       dp[i]+=dp[i-1];
       /// this is greedy ,every time we will keep our amount full
       if(dp[i]>d) dp[i]=d;
       /// bank checking here
       if(arr[i]==0)
       {
           /// negative
           if(dp[i]<0)
           {
               ans++;
               /// going to bank to deposit
               dp[i]=d;
           }
       }
   }

   cout<<ans<<endl;

   return 0;
}
