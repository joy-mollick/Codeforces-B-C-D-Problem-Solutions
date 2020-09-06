
/// Codeforces: 626C. Block Towers
/// Category: greedy (easy)



///only multiples of 6 can be shared.
///so greedily,we will select to decide to take multiples of six to give three party or two party.
///if we see two=2*n and three=3*m as reflexive of both team's initial limit value
///then iterate every multiples of six and when two<three so, it is greedy to give to two this multiple because three+3 make high than two+2.
///Alternatively same case for when (three<two).


#include<bits/stdc++.h>

using namespace std;

const int mxn=100001;

typedef long long ll;


int main()
{

    ll n,m;
    cin>>n>>m;

    ll multiple_of_6=6ll;

    n=2ll*n;
    m=3ll*m;

    for(multiple_of_6;multiple_of_6<=min(n,m);multiple_of_6+=6ll)
    {
        if(n<=m)
        {
            /// if we give 6 to m ,then n has to skip multiple implies to choose any element which will increase 2 for n
            n+=2ll;
        }
        else
        {
            /// m has to skip multiple implies to make increase 3 extra to m
            m+=3ll;
        }
    }

    cout<<max(n,m)<<endl;

    return 0;
}
