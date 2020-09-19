
/// Codeforces : 865D - Buy Low Sell High
/// Category : Greedy + data structure.

#include<bits/stdc++.h>

using namespace std;

const int mxn=100005;

typedef long long ll;

/// 2 5 9 7
/// here ,if we push 5 twice times
/// then (5-2)+(9-5)=7 ,which implies indirectly (9-2)=7;
/// another time , it will be used for itself only (7-5)=2;
/// Total profit 7+2=9;

int main()

{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int n;
   ll num;

   cin>>n;
   multiset<ll>st;
   ll ans=0ll;

   while(n--)
   {
       cin>>num;
       if(!st.empty() && (*st.begin()<num))
       {
           ans+=(num-*st.begin());
           st.erase(st.begin());
           /// one will be used for itself only
           st.insert(num);
           /// another one for intermediate step for another purchase.
           st.insert(num);
       }
       else
       {
           st.insert(num);
       }
   }

   cout<<ans<<endl;

   return 0;
}
