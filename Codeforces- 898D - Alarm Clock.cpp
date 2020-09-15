
/// Codeforces- 898D - Alarm Clock.
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

   int ans=0;

   int n,m,k;
   cin>>n>>m>>k;

   int arr[n];

   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }

   sort(arr,arr+n);

   int left=0;
   int right=0;
   int cont=0;

   bool vis[n];
   memset(vis,false,sizeof(vis));

   while(left<n && right<n)
   {
       cont++;
       /// this while loop is for finding two boundary of the m consecutive days interval
       while(arr[right]-arr[left]>=m)
       {
           /// if alarm is on
           if(!vis[left]) {cont--;}
           left++;
       }
       ///cont is the number of alarm on in the m consecutive days
       if(cont>=k)
       {
           /// vis means ,we should turn off this alarm greedily
           vis[right]=1;
           ans++;
           cont--;
       }

       right++;
   }

   cout<<ans<<endl;

   return 0;
}
