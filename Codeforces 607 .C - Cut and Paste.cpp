#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mod=1e9+7;

// Find recurrence relation ,  Spre = Sprev + (Sn-1) * (Sprev-i)


int main()

{
    //ios_base::sync_with_stdio(false);
    char arr[501];
    int tc;
    cin>>tc;
    int x;
    while(tc--)
    {
        scanf("%d%s",&x,arr);
        ll s=strlen(arr);
        vector<char>S(arr,arr+s);
        for(int i=1;i<=x;i++)
        {
            int times=S[i-1]-'1';
            if(S.size()<x)
            {
                vector<char>suffix(S.begin()+i,S.end());
                for(int tms=0;tms<times;tms++) {S.insert(S.end(),suffix.begin(),suffix.end());}//S.insert(pos,val)
            }
            s=((s+(s-i)*times))%mod;
            s=(s%mod+mod)%mod;
        }
        cout<<s<<endl;
    }
    return 0;
}
