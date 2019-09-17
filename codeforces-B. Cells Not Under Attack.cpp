  // https://codeforces.com/contest/701/problem/B

   #include<bits/stdc++.h>

   using namespace std;

 int a[100005];
int b[100005];

int main()
{
    long long n,m;
    cin>>n>>m;
    int x,y;
    long long x1,y1;
    x1=n;y1=n;
    for(int i=0;i<m;i++)
      {
           scanf("%d%d",&x,&y);
           if(!a[x])
           {
               a[x]=1;
               y1--;
           }
           if(!b[y])
           {
               b[y]=1;
               x1--;
           }
           if(i==0)
           printf("%I64d",x1*y1);
           else
            printf(" %I64d",x1*y1);
      }

    return 0;
}
