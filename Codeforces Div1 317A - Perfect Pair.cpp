

/// Codeforces Div1 317A - Perfect Pair 
/// Nice one !


/// math 


#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long lll;

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll x,y,m;
    cin>>x>>y>>m;
   if (x >= m || y >= m)
   printf("0");
  else if (x <= 0 && y <= 0)
   printf("-1");
  else
  {
    if(x>y)
   swap(x,y);

   ll  cont = 0ll;
   /// when one number is negative
   if (x < 0)
   {
    cont = -x / y;
    cont++;
    x += y * cont;
   }
   /// when both numbers are positive
   while (y < m) {
    ll temp = x + y;
    x = y;
    y = temp;
    cont++;
   }
    cout<<cont<<endl;
}

}
