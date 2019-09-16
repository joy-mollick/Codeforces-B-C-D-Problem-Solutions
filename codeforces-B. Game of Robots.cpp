   // https://codeforces.com/problemset/problem/670/B

   #include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>

typedef long long ll;

using namespace std;

    int main()
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n+1];
        ll pick=-1;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++)
        {
            if(k-i>0)
            {
                k=k-i;
            }
        }
        cout<<arr[k]<<endl;
        return 0;
    }
