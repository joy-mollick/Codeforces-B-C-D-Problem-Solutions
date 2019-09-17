  // https://codeforces.com/problemset/problem/776/B

   #include<bits/stdc++.h>

   using namespace std;


int main()
{
    int n,i,j;
    cin>>n;
    bool prime[n+2];
    int ans[n+2];
    memset(prime,true,sizeof(prime));
    set<int>s;
    for(i=2;i<=n+1;i++)
    {
        if(prime[i]==true)
        {
            ans[i]=1;
            s.insert(1);
            for(j=2*i;j<=n+1;j=j+i)
            {
                prime[j]=false;
                ans[j]=2;
                s.insert(2);
            }
        }
    }
    cout<<(s.size())<<endl;
    for(int y=2;y<=n+1;y++)
    {
        cout<<ans[y]<<" ";
    }
    cout<<endl;
}
