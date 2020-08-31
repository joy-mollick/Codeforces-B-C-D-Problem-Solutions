
/// Codeforces: 479D - Long Jumps 
/// Category: greedy + binary search (medium).


/// checking arr[i]+(x+y) ,if exists we will place arr[i]+x then fix (arr[i] to arr[i]+x and arr[i]+x to arr[i]+(x+y))
/// checking arr[i]+(x-y) ,if exists then we will place arr[i]+x then fix (arr[i] to arr[i]+x and arr[i]+x to arr[i]+(x-y) )

/// Now check to place arr[i]-x in the same process

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mx=1e5;

 ll mark[mx];
 set<ll>marks;

ll fun(ll x,ll y,int n,int l)
{
    for(int i=0;i<n;i++)
    {
        /// mark[i]+x
        if(mark[i]+x<=l &&  (marks.count(mark[i]+x+y)||(marks.count(mark[i]+x-y)))) return mark[i]+x;
        if(mark[i]-x>=0 && (marks.count(mark[i]-x+y)||(marks.count(mark[i]-x-y)))) return mark[i]-x;
    }
    return -1;
}

int main()

{
    int  n,l;
    ll x,y;
    cin>>n>>l>>x>>y;
    bool xx=false,yy=false;
    for(int i=0;i<n;i++)
    {
            cin>>mark[i];
            marks.insert(mark[i]);
        if(mark[i]==x) xx=true;
        if(mark[i]==y) yy=true;
    }

    for(int i=0;i<n;i++) {if(marks.count(mark[i]+x)) xx=true;}
    for(int i=0;i<n;i++) {if(marks.count(mark[i]+y)) yy=true;}

    if(xx&&yy) cout<<"0"<<endl;
    else if( (!xx && yy)) {cout<<"1"<<endl;cout<<x<<endl;}
    else if( (xx && !yy) ) {cout<<"1"<<endl;cout<<y<<endl;}

    else
    {
       ll ans=fun(x,y,n,l);
       if(ans==-1) {cout<<"2"<<endl; cout<<x<<" "<<y<<endl;}
       else {cout<<"1"<<endl;cout<<ans<<endl;}
    }

    return 0;
}
