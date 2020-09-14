
/// Codeforces- 699C - Vacations.
/// Category: greedy / dp .



#include<bits/stdc++.h>

using namespace std;

const int mxn=100002;

typedef long long ll;


int main()

{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int n,num;
   cin>>n;

   vector<int>a;

   while(n--)
   {
       cin>>num;
       a.push_back(num);
   }

   int rest=0;
   int sz=(int)a.size();
   int ans=0;
   if(a[0]==0) ans++;
   for(int i=1;i<sz;i++)
   {
       /// 0-> gym is closed ,contest is closed
       /// 1-> gym is closed , contest is open
       /// 2-> gym is open , contest is closed
       /// 3-> gym is open , contest is open.

       /// no way not to take rest.
       if(a[i]==0) {ans++;}
       ///we have to take rest
       else if(a[i]==1&&a[i-1]==1)
       {
           a[i]=0;
           ans++;
       }
       /// we have to take rest
       else if(a[i]==2&&a[i-1]==2)
       {
           a[i]=0;
           ans++;
       }
       /// both is open ,we have to select task on ith day
       /// if i-1 day is not 3,if i-1 th day is 3 ,then ith day is 3 doesn't affect
       else
       {
           if(a[i-1]==1)
           {
               a[i]=2;
           }
           else if(a[i-1]==2)
           {
               a[i]=1;
           }
       }
   }

   cout<<ans<<endl;

   return 0;
}
