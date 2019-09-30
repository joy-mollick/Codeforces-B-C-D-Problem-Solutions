#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;


int main()

{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,a,d;
    vector<int> arr;
    cin>>n>>m>>d;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a;
            arr.push_back(a);
        }
    }
    bool ok=false;
    int ans=INT_MAX;
    int res=0;
    for(int i=1;i<=10000;i++)
    {
        res=0;
        for(int j=0;j<n*m;j++)
        {
            int b=abs(arr[j]-i);
            if(b%d!=0) {res=-1;break;}
            res+=(b/d);
        }
        if(res!=-1)
        ans=min(ans,res);
    }
    if(ans==INT_MAX) cout<<"-1"<<endl;
    else
    cout<<ans<<endl;
}
