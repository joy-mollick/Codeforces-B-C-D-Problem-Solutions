   // https://codeforces.com/problemset/problem/474/B

    #include <bits/stdc++.h>

    using namespace std;

    typedef  long long int ll;

    int main()

    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n,m;
        ll sum=0,a;
        cin>>n;
        ll arr[n];
        vector<ll> prefix;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
            prefix.push_back(sum);
        }
        cin>>m;
        vector<ll>::iterator it;
        while(m--)
        {
            cin>>a;
            it=lower_bound(prefix.begin(),prefix.end(),a);
            int pos=it-prefix.begin();
            if(it!=prefix.end())
            cout<<pos+1<<endl;
            else cout<<n<<endl;
        }
    }
