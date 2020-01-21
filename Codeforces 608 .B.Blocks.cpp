#include<bits/stdc++.h>

using namespace std;

// Just traversing from left or right keeping mind first or last block at one color constant 

vector<int>W;
vector<int>B;


int main()

{
    ios_base::sync_with_stdio(false);
    int n;
    string s;
    cin>>n;
    cin>>s;
    string w=s;
    string b=s;
    bool flagw=false;
    bool flagb=false;
    for(int i=0;i<n-1;i++)
    {
        if(w[i]!='W')
        {
            W.push_back(i+1);
            w[i]='W';
            if(w[i+1]=='W') w[i+1]='B';
            else w[i+1]='W';
        }
    }
    if(w[n-1]=='W')
    {
        flagw=true;
    }
    for(int i=0;i<n-1;i++)
    {
        if(b[i]!='B')
        {
            B.push_back(i+1);
            b[i]='B';
            if(b[i+1]=='B') b[i+1]='W';
            else b[i+1]='B';
        }
    }
    if(b[n-1]=='B')
    {
        flagb=true;
    }
    if(flagb!=true && flagw!=true)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        if(flagw)
        {
            cout<<W.size()<<endl;
            for(int j=0;j<W.size();j++)
            {
                cout<<W[j]<<" ";
            }
            cout<<endl;
        }
        else
        {
             cout<<B.size()<<endl;
            for(int j=0;j<B.size();j++)
            {
                cout<<B[j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
