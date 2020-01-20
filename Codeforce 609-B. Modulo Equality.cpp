#include<bits/stdc++.h>

using namespace std;

// Number Theory and brute force
// For all numbers of ai ,anyone of this can be equal to b0 by (ai+x)%m=b0,so find out that number and minimum from those

bool areEqual(int arr1[], int arr2[], int n)
{
    sort(arr1, arr1 + n);

    for (int i = 0; i < n; i++)
        if (arr1[i] != arr2[i])
            return false;

    return true;
}

int main()

{
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<n;j++) cin>>b[j];
    sort(b,b+n);
     int ans=INT_MAX;
    int A[n];
    int x;
    for(int i=0;i<n;i++)
    {
        x=(b[0]-a[i]+m)%m;
        for(int w=0;w<n;w++)
        {
            A[w]=(a[w]+x)%m;
        }
        sort(A,A+n);
        if(areEqual(A,b,n))
        {
            ans=min(ans,x);
        }
    }
    cout<<ans<<endl;
    return 0;
}
