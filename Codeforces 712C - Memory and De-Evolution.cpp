
/// Codeforces 712C - Memory and De-Evolution 
/// Nice one !


/// Greedy Algorithm


#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


int main()

{
    int y,x;
    cin>>y>>x;
    /// a,b,c
    int a=x,b=x,c=x;

    int second=0;

    /// a,b,c
    while(true)
    {
        if(a>=y && b>=y && c>=y) break;
        second++;

        if(second%3==1)
        {
            /// update first
            a=b+c-1;
        }

         if(second%3==2)
        {
            b=a+c-1;
        }

         if(second%3==0)
        {
            c=a+b-1;
        }


    }

    cout<<second<<endl;

    return 0;
}
