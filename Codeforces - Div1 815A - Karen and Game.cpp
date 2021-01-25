
/// Codeforces - Div1 815A - Karen and Game 
/// implementation +greedy 

#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n,m;
    cin>>n>>m;
    int grid[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    map<int,int>mp_row;
    map<int,int>mp_col;

    int res=0;

    if(n<m){

    for(int i=0;i<n;i++)
    {
        int tims=INT_MAX;
        for(int j=0;j<m;j++)
        {
            tims=min(grid[i][j],tims);
        }
        mp_row[i+1]=tims;
        res+=tims;
        for(int j=0;j<m;j++) grid[i][j]-=tims;
    }

    for(int i=0;i<m;i++)
    {
        int tims=INT_MAX;
        for(int j=0;j<n;j++)
        {
            tims=min(grid[j][i],tims);
        }
        mp_col[i+1]=tims;
        res+=tims;
        for(int j=0;j<n;j++) grid[j][i]-=tims;
    }

    }

    else

    {

    for(int i=0;i<m;i++)
    {
        int tims=INT_MAX;
        for(int j=0;j<n;j++)
        {
            tims=min(grid[j][i],tims);
        }
        mp_col[i+1]=tims;
        res+=tims;
        for(int j=0;j<n;j++) grid[j][i]-=tims;
    }

       for(int i=0;i<n;i++)
    {
        int tims=INT_MAX;
        for(int j=0;j<m;j++)
        {
            tims=min(grid[i][j],tims);
        }
        mp_row[i+1]=tims;
        res+=tims;
        for(int j=0;j<m;j++) grid[i][j]-=tims;
    }

    }



    bool ok=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            //cout<<grid[i][j]<<" ";
            if(grid[i][j]!=0) ok=false;
        }
        //cout<<endl;
    }

    if(!ok) cout<<"-1"<<endl;

    else
    {
        cout<<res<<endl;
        map<int,int>::iterator it;
        for(it=mp_row.begin();it!=mp_row.end();it++)
        {
            int r=it->first;
            int t=it->second;
            while(t--)
            {
                cout<<"row "<<r<<endl;
            }
        }
        /// column
         for(it=mp_col.begin();it!=mp_col.end();it++)
        {
            int c=it->first;
            int t=it->second;
            while(t--)
            {
                cout<<"col "<<c<<endl;
            }
        }
    }

    return 0;
}
