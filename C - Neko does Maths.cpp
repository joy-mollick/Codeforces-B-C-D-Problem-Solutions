#include<bits/stdc++.h>

/*
Nayeem Mollick Joy , Electrical & Electronic Engineering , University of Rajshahi.
Passionate Contest Programmer , Coder , Android Developer */

using namespace std;

#define maxi  100000001

typedef unsigned long long ll;

ll gcd(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

int main()
{
     vector<ll>v;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   ll a,b,A,B;
   cin>>a>>b;
   v.clear();
   ll lcm=(a*b)/gcd(a,b);
   if(lcm==a||lcm==b)
   {
       cout<<"0"<<endl;
   }
   else{
    ll mn=(1LL<<62),ans;
    ll diff=max(a,b)-min(a,b);
    for(ll j=1;j*j<=(diff);j++)
    {
        if(diff%j==0)
        {
            v.push_back(j);
            if(j*j!=diff){
            v.push_back((diff/j));}
        }
    }
    sort(v.begin(),v.end());
    for(int y=0;y<v.size();y++)
    {
        ll mxi=max(a,b);
        if(a%v[y]!=b%v[y])
        {
            continue;
        }
        if(a%v[y]==0)
        {
            lcm=(a*b)/__gcd(a,b);
            if(lcm<mn)
        {
            mn=lcm;
            ans=0;
        }
        }
        else{
        lcm=((v[y]-mxi%v[y]+a)*((v[y]-mxi%v[y]+b)))/__gcd((v[y]-mxi%v[y]+a),(v[y]-mxi%v[y]+b));
        //cout<<lcm<<" "<<v[y]-mxi%v[y]<<endl;
        if(lcm<mn)
        {
            mn=lcm;
            ans=v[y]-mxi%v[y];
        }}
    }
    cout<<ans<<endl;
   }
   return 0;
}
