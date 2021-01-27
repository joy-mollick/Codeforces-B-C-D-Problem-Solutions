
/// Codeforces - 1295C - Obtain The String
/// implementation +greedy

#include<bits/stdc++.h>

using namespace std;

int main()

{

    int tst;
    cin>>tst;
    string s,t;

    while(tst--)
    {
        cin>>s>>t;
        vector<int>pos[26];
        for(int i=0;i<(int)s.size();i++)
        {
            pos[s[i]-'a'].push_back(i);
        }

        int poss=-1,ps;
        int ans=1;
        bool flg=true;
        for(int i=0;i<(int)t.size();i++)
        {
            int ch=t[i]-'a';
            /// not present in s
            if(pos[ch].size()==0)
            {
                flg=false;
                break;
            }
            /// greedy part
            ps=upper_bound(pos[ch].begin(),pos[ch].end(),poss)-pos[ch].begin();
           /// if this doesn't come from the later position then take again this as new subsequence
            if(ps==pos[ch].size())
            {
                ans++;
                ps=0;
            }
            poss=pos[ch][ps];
        }
        if(!flg) cout<<"-1"<<endl;
        else cout<<ans<<endl;
    }

    return 0;
}
