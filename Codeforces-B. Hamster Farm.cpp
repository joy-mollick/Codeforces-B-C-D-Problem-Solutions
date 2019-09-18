
      // https://codeforces.com/problemset/problem/682/B

       #include<bits/stdc++.h>

       using namespace std;
      typedef unsigned long long ll;

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        ll n,k;
        cin>>n>>k;
        ll a;
        ll o;
        ll mn=1000000000000000000;
        ll idx=1;
        ll x;
        for(int i=1;i<=k;i++)
        {
            cin>>a;
            o=n%a;
           // cout<<o<<endl;
            if((n%a)<mn)
            {
                mn=(n%a);
                idx=i;
                x=a;
            }
        }
        ll tms=n/x;
        cout<<idx<<" "<<tms<<endl;
    }
