
/// Codeforces: C. Table Tennis Game 2
/// Category : math.


/// The winner of a single set of course will get exactly k points.
/// so when k>a && k>b then -1.
/// when one player win , then a|k or b|k
/// when both players win some sets then a>=k and b>=k

#include<bits/stdc++.h>

using namespace std;

const int mx=100001;

int main()

{
   int k,a,b;
   int ans;
   cin>>k>>a>>b;

      /// if player Misha wins every sets
      if(a%k==0 && b<k)
      {
          ans=a/k;
      }
      /// if vanya wins every sets
      else if(b%k==0 && a<k)
      {
          ans=b/k;
      }
      /// both player wins several sets
      else if(b>=k && a>=k)
      {
          ans=(a/k)+(b/k);
      }
      /// not possible
      else
      {
          ans=-1;
      }

      if(ans==0||ans==-1) cout<<"-1"<<endl;
      else cout<<ans<<endl;

   return 0;
}
