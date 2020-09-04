
/// Codeforces- 628C - Bear and String Distance 
/// Category: greedy + strings.


#include<bits/stdc++.h>

using namespace std;



int main()

{
   int n,k,mx,mxx;
   cin>>n>>k;
   string s;
   cin>>s;
   char ch,chr;
   string res="";
   for(int i=0;i<n;i++)
   {
       ch='a';
       chr=s[i];
       mxx=0;
       for(ch;ch<='z';ch++)
       {
           mx=abs(ch-s[i]);
           if(mx<=k)
           {
               if(mxx<mx)
               {
                   mxx=mx;
                   chr=ch;
               }
           }
       }
       k-=mxx;
       res+=chr;
   }
   if(k!=0) cout<<"-1"<<endl;
   else cout<<res<<endl;
   return 0;
}
