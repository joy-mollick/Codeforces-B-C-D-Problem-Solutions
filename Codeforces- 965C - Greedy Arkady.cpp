
/// Codeforces- 965C - Greedy Arkady
/// Category: greedy + math.



///think about Arkady take x i times
///then in (i-1) rounds all get people*(i-1)*x + x.
///maximum x can be keeping balanced -> people*(i-1)*x + x<=candies
/// x *(people*(i-1)+1)<=candies
/// x <= (candies/ (people*(i-1)+1) )
/// so, this is the maximum x giving akrady i times x candies.


#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()

{
    ll cand,people,max_x,mx_times;
    cin>>cand>>people>>max_x>>mx_times;
    ll maxi=0ll;

    for(ll d=1;d<=mx_times;d++)
    {
        ///maximum number of candies when Arkady takes d times
        ll x=(cand/(people*(d-1)+1ll));
        
        if(!x) break;
        ///one can't get candies one time more than max_x
        if(x>max_x) x=max_x;
        maxi=max(x*d,maxi);
    }
    cout<<maxi<<endl;

    return 0;
}
