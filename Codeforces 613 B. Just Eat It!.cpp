#include<bits/stdc++.h>

using namespace std;

// Number Theory and brute force

// The contiguous segment sum is greater than total sum .So we have to choose mid segment or left segment or right segment

// If we choose mid segment then obviously left or right or left and right sum will be negative or zero

// if we choose first segment ,then obviously last segment is zero or negative

// if we choose last segment ,then obviously first segment is zero or negative

// Else whole segment is greater .

typedef long long ll;

int main()

{
    ios_base::sync_with_stdio(false);
    int tc;
    cin>>tc;
    int n;
    while(tc--)
    {
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool ans=true;
        ll sum=0ll;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum<=0) {ans=false;break;}
        }
        sum=0ll;
        for(int i=n-1;i>=0;i--)
        {
            sum+=a[i];
            if(sum<=0) {ans=false;break;}
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
