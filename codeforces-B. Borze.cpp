   // https://codeforces.com/problemset/problem/32/B

    #include <bits/stdc++.h>

    using namespace std;

    typedef  long long int ll;

    int main()

    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        string s;
        cin>>s;
        int i;
        int sz=(int)(s.size());
       // string zero=".";
       // string one="-.";
        //string two="--";
        for( i=0;i<sz-1;i++)
        {
                if(s[i]=='-'&&s[i+1]=='-') {cout<<"2";i++;}
                else if(s[i]=='-'&&s[i+1]=='.') {cout<<"1";i++;}
                else cout<<"0";
        }
        if(i==sz-1) cout<<"0";
        cout<<endl;
    }
