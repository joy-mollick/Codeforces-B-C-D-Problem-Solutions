   // https://codeforces.com/contest/805/problem/B

   #include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;

    int main()
    {
        vector<char>p;
        long int n,i=0,j=1;
        cin>>n;
        string s="abba";
        if(n==2)
        {
            cout<<"aa"<<endl;
        }
        else if(n==3)
        {
            cout<<"abb"<<endl;
        }
        else if(n==4)
        {
            cout<<"abba"<<endl;
        }
        else{
            int tms=n/4;
            int rem=n%4;
            while(tms--)
            {
                cout<<s;
            }
            for(int i=0;i<rem;i++)
            {
                cout<<s[i];
            }
        }
        cout<<endl;
        return 0;
    }
