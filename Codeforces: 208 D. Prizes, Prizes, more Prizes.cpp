
/// Codeforces: 208 D. Prizes, Prizes, more Prizes.
/// Category: greedy + implementation.(easy)



#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

 ll prizes[5];
 ll take[5];

ll fun(ll point)
{
    for(int i=4;i>=0;i--)
    {
        if(prizes[i]<=point)
        {
            ll tot=point/prizes[i];
            take[i]+=tot;
            point-=(tot*prizes[i]);
        }
    }
    return point;
}

int main()

{
    int n;
    cin>>n;
    ll points[n];
    for(int i=0;i<n;i++) cin>>points[i];
    for(int i=0;i<5;i++) cin>>prizes[i];
    ll left=0;
    for(int i=0;i<n;i++)
    {
        left+=points[i];
       /// cout<<left<<"befor-after";
        left=fun(left);
        ///cout<<left<<endl;
    }
    for(int i=0;i<5;i++) cout<<take[i]<<" ";
    cout<<endl;
    cout<<left<<endl;
    return 0;
}
