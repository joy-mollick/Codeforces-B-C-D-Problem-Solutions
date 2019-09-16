  // https://codeforces.com/problemset/problem/439/B

   #include<bits/stdc++.h>

   using namespace std;

typedef  long long ll;

    int main()
    {
        ll n,k,a;
        cin>>n>>k;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll sum=0;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            sum+=arr[i]*k;
            if(k>1)
            {
                k=k-1;
            }
        }
        cout<<sum<<endl;
    }
