
/// Codeforces- 463C - Gargari and Bishops 
/// Category: greedy + implementation.


#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mx=3001;

ll mat[mx][mx];
ll diagonal1[mx];
ll diagonal2[mx];

/// it is used for principle diagonal's unique identity.
inline int principle(int x,int y)
{
    return (x+y);
}

/// it is used for secondary diagonal's unique identity.
inline int secondary(int x,int y,int n)
{
    return (x-y+n);
}

inline bool black(int x,int y)
{
    if((x+y)%2==0) return true;
    else return false;
}

int main()

{
    ios_base::sync_with_stdio(false);

   int n;

   cin>>n;

   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
           cin>>mat[i][j];
           diagonal1[principle(i,j)]+=mat[i][j];
           diagonal2[secondary(i,j,n)]+=mat[i][j];
       }
   }

   ll black_bishop=0ll;
   int bx=1,by=1;
   ll white_bishop=0ll;
   int wx=1,wy=2;

   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
           /// black board
           if(black(i,j))
           {
               ll points=diagonal1[principle(i,j)]+diagonal2[secondary(i,j,n)]-mat[i][j];
               if(points>black_bishop)
               {
                   black_bishop=points;
                   bx=i;
                   by=j;
               }
           }
           /// white board
           else
           {
               ll points=diagonal1[principle(i,j)]+diagonal2[secondary(i,j,n)]-mat[i][j];
               if(points>white_bishop)
               {
                   white_bishop=points;
                   wx=i;
                   wy=j;
               }
           }
       }
   }

   cout<<(black_bishop+white_bishop)<<endl;
   cout<<bx<<" "<<by<<" "<<wx<<" "<<wy<<endl;

   return 0;
}
