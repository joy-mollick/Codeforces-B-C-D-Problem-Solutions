/// Codeforces: 486C - Palindrome Transformation.
/// Category: greedy + implementation.

#include<bits/stdc++.h>

using namespace std;

int main()

{
   string s;
   int n,p;
   cin>>n>>p;
   cin>>s;
   /// now it is time to make str2 to first half and second half by minimum steps.

   /// we will do operation on half string.
   p--;/// for oth index
   int last_pos_rght=-1;
   int last_pos_left=n;
   int left=0,right=n-1;
   int tot_flip=0,flip,itr=0;
   int ans=0;
   int moves=INT_MAX;
       for(left;left<(n/2);left++,right--)
       {
           if ((s[left]!=s[right]))
           {
               flip=min(abs(s[left]-s[right]),26-abs(s[left]-s[right]));
               /// flip can be done by up and down arrow
               tot_flip+=flip;
               last_pos_rght=max(last_pos_rght,left);
               last_pos_left=min(last_pos_left,left);
              /// cout<<s[left]<<" "<<s[right]<<endl;
           }
       }

       ///cout<<last_pos_left<<" "<<last_pos_rght<<endl;

       if(tot_flip==0)
       {
           cout<<"0"<<endl;
           return 0;
       }
     /// we will work on first half
    if(p<(n/2))
    {
        moves=abs(p-last_pos_left)+abs(last_pos_left-last_pos_rght);
        moves=min(moves,abs(p-last_pos_rght)+abs(last_pos_left-last_pos_rght));
    }
    /// otherwise second half
    else
    {
        int temp=last_pos_rght;
        last_pos_rght=n-1-last_pos_left;
        last_pos_left=n-1-temp;
        moves=abs(p-last_pos_left)+abs(last_pos_left-last_pos_rght);
        moves=min(moves,abs(p-last_pos_rght)+abs(last_pos_left-last_pos_rght));
    }

   cout<<moves+tot_flip<<endl;

   return 0;
}
