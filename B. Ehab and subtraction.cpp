#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    map<int,int>m;
    int n,k,a;
    scanf("%d%d",&n,&k);
    int mn=1000000000;
    int prev=0;
    set<int>s;
    vector<int>v;
    for(int j=0;j<n;j++)
    {
       scanf("%d",&a);
        if(mn>a&&a!=0)
        {
            mn=a;
        }

        s.insert(a);
    }
    set<int>::iterator it=s.begin();
    for(it;it!=s.end();it++)
    {
        v.push_back((*it)-prev);
        prev=(*it);
    }
    int sz=v.size();
    int cholbe=min(k,sz);
    for(int i=0;i<cholbe;i++)
    {
        cout<<v[i]<<endl;
    }
    if(k>sz){
    int nw=k-sz;
    while(nw--)
    {
        cout<<"0"<<endl;
    }
    }
    return 0;
}
