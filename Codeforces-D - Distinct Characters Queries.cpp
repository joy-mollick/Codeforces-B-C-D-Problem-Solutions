    #include<bits/stdc++.h>


    using namespace std;

    typedef long long ll;

    int main()

    {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
       string s;
       int q,l,r;
       cin>>s;
       cin>>q;
       int typ;
       vector< set<int> >poss(26);
       for(int i=0;i<s.size();i++)
       {
           poss[s[i]-'a'].insert(i);
       }
       int pos;
       char c;
       while(q--)
       {
           cin>>typ;
           if(typ==1)
           {
               cin>>pos>>c;
               pos--;
               poss[s[pos]-'a'].erase(pos);
               s[pos]=c;
               poss[s[pos]-'a'].insert(pos);
           }
           else
           {
               cin>>l>>r;
               l--;
               r--;
               int cnt=0;
               for(int c=0;c<26;c++)
               {
                   set<int>::iterator it;
                   it=poss[c].lower_bound(l);
                   if(it!=poss[c].end()&&(*it)<=r) cnt++;
               }
               cout<<cnt<<endl;
           }
       }
    }
