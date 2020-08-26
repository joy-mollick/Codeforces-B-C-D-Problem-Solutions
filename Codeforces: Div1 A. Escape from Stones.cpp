
/// Codeforces: Div1 A. Escape from Stones
/// Category : greedy.

#include<bits/stdc++.h>

using namespace std;


int main()

{
    string s;
    cin>>s;
    int sz=(int)s.size();
    for(int i=0;i<sz;i++)
    {
        if(s[i]=='r') cout<<(i+1)<<'\n';
    }
    for(int j=sz-1;j>=0;j--)
    {
        if(s[j]=='l') cout<<(j+1)<<'\n';
    }
    return 0;
}
