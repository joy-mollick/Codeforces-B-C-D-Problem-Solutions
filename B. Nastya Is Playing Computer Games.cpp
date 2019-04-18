#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
     if(k==n||k==1)
     {
         cout<<(3*n)<<endl;
     }
     else{
    cout<<(3*n)+min(abs(k-1),abs(n-k))<<endl;}
    return 0;
}
