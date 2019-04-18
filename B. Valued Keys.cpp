#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<cstring>
#include<vector>

//Nayeem Shahriar Joy ,APEE,University Of Rajshahi.

using namespace std;


int main()
{
    vector<char>p;
    string x,y;
    cin>>x;
    cin>>y;
    int l=x.size();
    int g=y.size();
    for (int i=0,j=0;i<l;i++,j++)
    {
            if(y[j]>x[i])
            {
                cout<<"-1"<<endl;
                return 0;
            }
            else if(y[j]==x[i]&&y[j]=='z')
            {
                p.push_back(y[j]);
            }
            else if(y[j]==x[i]&&y[j]!='z')
            {
                p.push_back(y[j]+1);
            }
            else if(y[j]<x[i])
                    {
                        p.push_back(y[j]);

            }
    }
    for(vector<char>::iterator joy=p.begin();joy!=p.end();joy++)
    {
        cout<<*joy;
    }
    cout<<endl;
}
