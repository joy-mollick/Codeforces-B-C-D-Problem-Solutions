#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,t;
	cin>>t;
	while(t--)
    {
        long long a;
        cin>>n;
        set<long long >given;
        set<long long>our;
        long long mx=1;
        long long mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            given.insert(a);
            mx=max(mx,a);
            mn=min(mn,a);
        }
        long long nw=mx*mn;
        //cout<<nw<<endl;
        for(long long i=2;i*i<=nw;i++)
        {
            if(nw%i==0)
            {
                our.insert(i);
                our.insert(nw/i);
               // cout<<i<<" "<<nw<<endl;
            }
        }
        if(our==given)
        {
            cout<<nw<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}
