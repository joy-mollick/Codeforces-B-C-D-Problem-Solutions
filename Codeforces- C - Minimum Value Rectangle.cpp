
/// Codeforces- C - Minimum Value Rectangle.
/// Category: greedy +math .

/// it is easy to see that minimum ratio of our function will be 16.0,when it is square
/// so ,greedily choose square.

/// otherwise choose small rectangle with minimum area.

#include<bits/stdc++.h>

using namespace std;

const int mxn=100002;

typedef long long ll;

vector<int>two;
map<int,int>mp;

int main()

{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int tc,n,num;
   cin>>tc;

   while(tc--)
   {
       two.clear();
       mp.clear();
       vector<int>v;
       cin>>n;
       while(n--)
       {
           cin>>num;
           if(mp[num]==0)
           {
               v.push_back(num);
           }
           mp[num]++;
       }
       bool four=false;
       int sz=(int)v.size();
       int ans1,ans2;
       for(int i=0;i<sz;i++)
       {
           if(mp[v[i]]>=2) two.push_back(v[i]);
           if(mp[v[i]]>=4)
           {
               ans1=v[i];
               ans2=v[i];
               four=true;
               break;
           }
       }
       /// square not found
       if(!four)
       {
           sz=two.size();
           sort(two.begin(),two.end());
           double res=100000000.0;
           for(int i=1;i<sz;i++)
           {
              /// cout<<[i-1]<<" "<<v[i]<<endl;
               double temp=(double)two[i]/two[i-1]+(double)two[i-1]/two[i];
               if(temp<res)
               {
                   res=temp;
                   ans1=two[i];
                   ans2=two[i-1];
                   ///cout<<res<<" "<<ans1<<" "<<ans2<<endl;
               }
           }
       }

       cout<<ans1<<" "<<ans1<<" "<<ans2<<" "<<ans2<<endl;
   }


   return 0;
}
