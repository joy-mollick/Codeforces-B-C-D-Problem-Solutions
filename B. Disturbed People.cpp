#include<bits/stdc++.h>

using namespace std;

// 1 0 1 0 1 0 1 0 1

int main()
{
   int n,a;
   vector<int>v;
   cin>>n;
   while(n--)
   {
       cin>>a;
       v.push_back(a);
   }
   int count=0,mn=0;
   for(int i=1;i<v.size()-1;i++)
   {
       if(v[i]==0&&v[i-1]==1&&v[i+1]==1)
       {
           count++;
            if(count==2)
           {
               mn=mn+1;
               count=0;
           }
           i=i+1;
       }
       else
       {

               mn=mn+count;
               count=0;
       }
   }
   if(count==2)
   {
       mn=mn+1;
   }
   else if(count>0)
   {
       mn=mn+count;
   }
   cout<<mn<<endl;
    return 0;
}
