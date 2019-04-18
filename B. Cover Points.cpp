#include<bits/stdc++.h>

using namespace std;



int main()
{
    long n,a,b,c;
    cin>>n;
    long ans=0;
    while(n--)
    {
        cin>>a>>b;
        ans=max(ans,a+b);
    }
    cout<<ans<<endl;
   return 0;
}
