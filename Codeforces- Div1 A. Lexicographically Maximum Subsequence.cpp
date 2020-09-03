
/// Codeforces- Div1 A. Lexicographically Maximum Subsequence.
/// Category: greedy + strings.


#include<bits/stdc++.h>

using namespace std;



int main()

{
   string s;
   cin>>s;
   int sz=(int)s.size();
   /// we first take maximum character and its all occurrences
   /// then if extra characters are remaining at the end of this last index then print them

   int start=0;
   string res="";

   while(start<sz)
   {
       int mx=(int)s[start];
       for(int i=start;i<sz;i++)
       {
           mx=max(mx,(int)s[i]);
       }

       for(int i=start;i<sz;i++)
       {
           if((int)s[i]==mx)
           {
               res+=s[i];
               start=i;
           }
       }
       /// starting from next index of this current maximum character's last index
       start++;
   }
   cout<<res<<endl;

   return 0;
}
