#include<bits/stdc++.h>

using namespace std;

// All time keep update minimum position we get and maximum position we get

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
        int a[n];
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a[x-1]=i;
        }
        int mx_pos=0;
        int mn_pos=n;
        for(int i=0;i<n;i++)
        {
            mx_pos=max(mx_pos,a[i]);
            mn_pos=min(mn_pos,a[i]);
            if(mx_pos-mn_pos==i) cout<<"1";
            else cout<<"0";
        }
        cout<<endl;
    }

    return 0;
}
