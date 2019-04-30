#include<bits/stdc++.h>

/*
Nayeem Mollick Joy , Electrical & Electronic Engineering , University of Rajshahi.
Passionate Contest Programmer , Coder , Android Developer */

using namespace std;

#define maxi  100000001

typedef unsigned long long ll;

int main()
{

    int n,i,j;
    cin>>n;
    char arr[n][n];
    int ar[n][n];
    memset(ar,0,sizeof(ar));
    int nempt=0;
    for( i=0;i<n;i++)
    {
        for( j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='#')
            {
                ar[i][j]=-1;
                nempt++;
            }
        }
    }
    int empt=(n*n)-nempt;
   // cout<<nempt<<" "<<empt<<endl;
    int fives=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>0&&j>0&&i<n-1&&j<n-1)
            {
                if(ar[i][j]==0)
                {
                    //cout<<i<<" "<<j<<endl;
                    if((ar[i][j-1]==0&&ar[i+1][j]==0&&ar[i-1][j]==0&&ar[i][j+1]==0))
                       {
                           fives++;
                            ar[i][j-1]=1;
                            ar[i+1][j]=1;
                            ar[i-1][j]=1;
                            ar[i][j+1]=1;
                            ar[i][j]=1;
                       }
                }
            }
        }
    }
    int fill_gap=fives*5;
    if(fill_gap==empt)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
