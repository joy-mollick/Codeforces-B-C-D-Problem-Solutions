#include <bits/stdc++.h>
using namespace std;
float area(int x1, int y1, int x2, int y2,
                            int x3, int y3)
{
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) +
                x3 * (y1 - y2)) / 2.0);
}

/* A function to check whether point P(x, y)
   lies inside the rectangle formed by A(x1, y1),
   B(x2, y2), C(x3, y3) and D(x4, y4) */
bool check(int x1, int y1, int x2, int y2, int x3,
             int y3, int x4, int y4, int x, int y)
{
    /* Calculate area of rectangle ABCD */
    float A = area(x1, y1, x2, y2, x3, y3) +
              area(x1, y1, x4, y4, x3, y3);

    /* Calculate area of triangle PAB */
    float A1 = area(x, y, x1, y1, x2, y2);

    /* Calculate area of triangle PBC */
    float A2 = area(x, y, x2, y2, x3, y3);

    /* Calculate area of triangle PCD */
    float A3 = area(x, y, x3, y3, x4, y4);

    /* Calculate area of triangle PAD */
    float A4 = area(x, y, x1, y1, x4, y4);

    /* Check if sum of A1, A2, A3 and A4
       is same as A */
    return (A == A1 + A2 + A3 + A4);
}


int main() {
   int n,d,a,b,tc;
   cin>>n>>d;
   cin>>tc;
   while(tc--)
   {
       int x,y;
       cin>>x>>y;
       if(check(0,d,d,0,n,n-d,n-d,n,x,y))
        cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

   }
	return 0;
}
