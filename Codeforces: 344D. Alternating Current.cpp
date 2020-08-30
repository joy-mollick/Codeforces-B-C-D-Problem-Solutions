
/// Codeforces: 344D. Alternating Current.
/// Category: greedy + observation.(medium)
/// Technique : like correct bracket sequence .


#include<bits/stdc++.h>

using namespace std;

int sz(vector<char>v)
{
    return (int)v.size();
}

int main()

{
    string s;
    cin>>s;
    vector<char>v;
    int z=(int)s.size();
    bool nul=true;
    if(z%2==1) cout<<"No"<<endl;
     else
    {
         for(int i=0;i<z;i++)
         {
             if(s[i]=='+')
             {
                 if(sz(v) && v.back()=='+')
                 {
                     v.pop_back();
                 }
                 else v.push_back('+');
             }
             else
             {
                 if(sz(v) && v.back()=='-')
                 {
                     v.pop_back();
                 }
                 else v.push_back('-');
             }
         }

         if(sz(v)) cout<<"No"<<endl;
         else cout<<"Yes"<<endl;
    }
    return 0;
}
