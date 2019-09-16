   // https://codeforces.com/problemset/problem/688/B

    #include <bits/stdc++.h>

    using namespace std;

    typedef  long long int ll;

    int main()

    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        //string pal[]={"00","11","22","33","44","55","66","77","88","99"};
        string s;
        cin>>s;
        string ans="";
        string res="";
        for(int i=0;i<(int)(s.size());i++)
        {
            ans+=(s[i]);
        }
        res+=ans;
        reverse(ans.begin(),ans.end());
        res+=ans;
        cout<<res<<endl;
    }
