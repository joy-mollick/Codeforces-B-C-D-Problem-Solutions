
/// Codeforces: C. Alice, Bob and Chocolate
/// Category : dp / two pointer.

#include<bits/stdc++.h>

using namespace std;


int main()

{
    int n;
    cin>>n;
    int T[n];
    for(int i=0;i<n;i++) cin>>T[i];
    int l=0,r=n-1;
    int alice=0;
    int bob=0;
    /// first alice starts
    bool ali=true,bo=false;
    while(l<=r)
    {
        if(l==r && bo==true && ali==true)
        {
            alice++;
            break;
        }
        else if(l==r && bo==true)
        {
            bob++;
            break;
        }
        else if(l==r && ali==true)
        {
            alice++;
            break;
        }

        else if(T[r]>T[l])
        {
            T[r]-=T[l];
            /// l has been used
            l++;
            alice++;
            bo=true;
            ali=false;
        }
        else if(T[l]>T[r])
        {
            T[l]-=T[r];
            /// r has been used
            r--;
            bob++;
            bo=false;
            ali=true;
        }
        else if(T[l]==T[r])
        {
           l++;
           r--;
           bob++;
           alice++;
           bo=true;
           ali=true;
        }
    }
    cout<<alice<<" "<<bob<<endl;

    return 0;
}
