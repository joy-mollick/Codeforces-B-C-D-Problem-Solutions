
      // https://codeforces.com/problemset/problem/939/B

       #include<bits/stdc++.h>

       using namespace std;
      typedef unsigned long long ll;

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        string s;
        cin>>s;
        bool zero=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                zero=true;
                break;
            }
        }
        if(zero)
        {
            cout<<"YES"<<endl;
            cout<<"0"<<endl;
            return 0;
        }
        if(s=="8")
        {
            cout<<"YES"<<endl;
            cout<<"8"<<endl;
            return 0;
        }
        int sum=0,ans=0;
        int sz=s.size();
        int d1=0,d2=0,d3=0;
        for(int i=0;i<sz;i++)
        {
            if(s[i]!='0'){
                    sum=s[i]-'0';
                     if(sum%8==0)
                {
                    ans=sum;
                   cout<<"YES"<<endl;
                   cout<<ans<<endl;
                    return 0;
                }
            for(int j=i+1;j<sz;j++)
            {
                sum=(s[i]-'0')*10+(s[j]-'0');
                if(sum%8==0)
                {
                    ans=sum;
                   cout<<"YES"<<endl;
                   cout<<ans<<endl;
                    return 0;
                }
                for(int k=j+1;k<sz;k++)
                {
                    sum=(s[i]-'0')*100+(s[j]-'0')*10+s[k]-'0';
                    if(sum%8==0)
                {
                    ans=sum;
                   cout<<"YES"<<endl;
                   cout<<ans<<endl;
                    return 0;
                }
                }
            }
            }
        }
            cout<<"NO"<<endl;
    }
