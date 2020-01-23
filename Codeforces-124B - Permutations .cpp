#include<bits/stdc++.h>

using namespace std;


// Parity Problem

typedef unsigned long long ll;

ll mod=1000000007 ;

/*

ll po(ll a,ll b)
{
   ll ans=1ll;
   while(b)
   {
       if(b&1ll){
        ans=(ans*a)%mod;}
       b=b>>1ll;
       a=(a*a)%mod;
   }
   return (ans%mod);
}
*/
int str_to_int(string t)
{
    int num=0;
    for(int j=0;j<t.size();j++)
    {
        num=num*10+(t[j]-'0');
    }
    return num;
}

// Basic permutation problem 

int main()

{
    //ios_base::sync_with_stdio(false);
    int n,k;
    scanf("%d%d",&n,&k);
    char c='1';
    string s="";
    string S;
    int K=n;
    vector<int>initia;
    while(k--)
    {
        s=s+c;
        int x=c-'0';
        x++;
        c=x+'0';
    }
    vector<string>V;
    while(n--)
    {
        cin>>S;
        V.push_back(S);
        initia.push_back(str_to_int(S));
    }
    sort(initia.begin(),initia.end());
    int mn=initia[K-1]-initia[0];
    while(next_permutation(s.begin(),s.end()))
    {
        vector<int>v;
        for(int i=0;i<V.size();i++)
        {
            string p=V[i];
            string nw="";
            for(int l=0;l<s.size();l++)
            {
                char ch=p[(s[l]-'0')-1];
                nw=nw+ch;
            }
            v.push_back(str_to_int(nw));
        }
        sort(v.begin(),v.end());
        int diff=v[K-1]-v[0];
        if(mn>diff) mn=diff;
    }
    printf("%d\n",mn);
}
