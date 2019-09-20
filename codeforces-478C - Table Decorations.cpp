// https://codeforces.com/problemset/problem/377/A

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()

{
   ll a,b,c,A,B,C;
   ll arr[3];
   cin>>a>>b>>c;
   arr[0]=a;
   arr[1]=b;
   arr[2]=c;
   sort(arr,arr+3);
   A=arr[0];
   B=arr[1];
   C=arr[2];
   if(C>=(2*A+2*B))
   {
       C=(2*A+2*B);
   }
   ll ans=(A+B+C)/3ll;
   cout<<ans<<endl;
}
