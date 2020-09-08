
/// Codeforces- 334C - Secrets.
/// Category: greedy 


/// we have to find the number of coins by which we can make n without exchange.
/// That makes sense to us that, if we want to make 12 then , we can't use 3 in that case as 12 can be fulfilled by 3 coin four times
///But we have to make so that there will be no exchange
///So, we will use 9 , 9+9=18.so we can't fulfill n , but minimum increment from exact price 12

#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

int main()

{
    /// we have to find such 3^k where n = 1(mod 3^k)
    ll n;
    cin>>n;
    ll three=1ll;
    while(true)
    {
        if(n%three!=0ll) break;
        three*=3ll;
    }
    cout<<((n/three)+1ll)<<endl;
    return 0;
}
