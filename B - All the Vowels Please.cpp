#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

char c[]={'a','e','i','o','u'};

int main()
{
   int n,a=0,b=0;
   cin>>n;
   for(int i=5;i<=n;i++)
   {
       if(n%i==0&&(n/i)>=5)
       {
            a=i;
            b=(n/i);
           break;
       }
   }
   if(a==0&&b==0)
   {
       cout<<"-1"<<endl;
   }
   else{
       for(int i=0;i<a;i++)
       {
           for(int j=0;j<b;j++)
           {
               cout<<c[(i+j)%5];
           }
       }
       cout<<endl;
   }
}
