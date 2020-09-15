
/// Codeforces- 1060D - Social Circles 
/// Category: greedy .


/// nice one 


#include<bits/stdc++.h>

using namespace std;

const int mxn=100002;

typedef long long ll;


int main()

{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int n;
   cin>>n;
   int left[n];
   int right[n];

   for(int i=0;i<n;i++)
   {
       cin>>left[i]>>right[i];
   }

   sort(left,left+n);
   sort(right,right+n);

   ll chairs=0;

   for(int i=0;i<n;i++)
   {
       chairs+=(ll)max(left[i],right[i])+1ll;
   }

   cout<<chairs<<endl;

   return 0;
}
