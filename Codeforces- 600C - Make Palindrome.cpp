
/// Codeforces- 600C - Make Palindrome.
/// Category: greedy + string.
/// Classical: lexicographically palindrome.


#include<bits/stdc++.h>

using namespace std;

int cont[26];


int main()

{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   string s;
   cin>>s;

   for(int i=0;i<(int)s.size();i++) cont[s[i]-'a']++;

   vector<int>odd;

   /// taking the statistics of odd times character
   for(int i=0;i<26;i++)
   {
       if(cont[i]%2==1) {odd.push_back(i);
       }
   }

   int left=0,right=odd.size()-1;

   ///for reduction of odd times character of largest character.
   /// we will increase the number of times of smallest character.
   /// this is optimal
   while(left<right)
   {
       cont[odd[left]]++;
       cont[odd[right]]--;
       left++;
       right--;
   }

   /// now fill up the characters into resultant string from lowest char
   left=0;
   right=(int)s.size()-1;

   /// place equally characters of even times charcaters

   for(int i=0;i<26;i++)
   {
       while(cont[i]>=2)
       {
           char c=i+'a';
           s[left]=c;
           s[right]=c;
           left++;
           right--;
           cont[i]-=2;
       }
   }

   /// now place one odd times character if remains

   for(int i=0;i<26;i++)
   {
       if(cont[i])
       {
           s[left]=i+'a';
           break;
       }
   }

   cout<<s<<endl;


   return 0;
}
