  // https://codeforces.com/problemset/problem/682/B

   #include<bits/stdc++.h>

   using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    int n,sz;
    cin>>n;
    while(n--)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    v[0]=1;
    for(int i=1;i<v.size();i++)
    {
        v[i]=min(v[i-1]+1,v[i]);
    }
    cout<<v[v.size()-1]+1<<endl;
}
