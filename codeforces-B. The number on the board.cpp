  // https://codeforces.com/contest/835/problem/B

   #include<bits/stdc++.h>

   using namespace std;

typedef  long long ll;

    int main()
    {
        ll k;
        string s;
        cin>>k>>s;
        ll sum=0;
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        {
            sum+=s[i]-'0';
        }
        if(sum>=k) {cout<<"0"<<endl;return 0;}
        ll mm=k-sum;
        ll smm=0;
        ll ans=0;
        for(int i=0;i<s.size();i++)
        {
          smm+=(9-(s[i]-'0'));
          if(smm>=mm)
          {
              ans=i;
              break;
          }
        }
        cout<<ans+1<<endl;
    }
