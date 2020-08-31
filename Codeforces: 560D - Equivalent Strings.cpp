
/// Codeforces: 560D - Equivalent Strings.
/// Category: divide and conquer.(medium)



#include<bits/stdc++.h>

using namespace std;

int sz;

bool equivalent(string a,string b,int sz)
{
    if(a==b) return true;
    /// odd length can't be divided into two parts.
    if(sz%2==1) return false;
    
    string a1,a2,b1,b2;

    a1=a.substr(0,sz/2);
    a2=a.substr((sz/2),(sz/2));

    b1=b.substr(0,sz/2);
    b2=b.substr((sz/2),(sz/2));

    if(equivalent(a1,b2,sz/2))
    {
        return equivalent(a2,b1,sz/2);
    }
    else if(equivalent(a1,b1,sz/2))
    {
        return equivalent(a2,b2,sz/2);
    }

    return false;
}

int main()

{
    string a,b;
    cin>>a>>b;
    bool ok=equivalent(a,b,(int)a.size());
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
