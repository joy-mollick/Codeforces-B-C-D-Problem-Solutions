
/// Codeforces- 1037C. Equalize
/// Category: greedy .(easy)


///  1 0   or 0 1
///  0 1      1 0  we have to swap these situations.

/// otherwise we will flip bits in a string

/// this is optimal choice .

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()

{
    int n;
    string a,b;
    cin>>n;
    cin>>a>>b;
    int ans=0;

    /// swapping
    for(int i=0;i<(int)a.size();i++)
    {
        if(a[i]!=a[i+1] && a[i]!=b[i] && a[i+1]!=b[i+1])
        {
            swap(a[i],a[i+1]);
            ans++;
        }
    }

    /// flipping
    for(int i=0;i<(int)a.size();i++)
    {
        if(a[i]!=b[i]) ans++;
    }

    cout<<ans<<endl;

    return 0;
}
