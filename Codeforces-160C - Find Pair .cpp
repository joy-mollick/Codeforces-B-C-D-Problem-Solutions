    #include <bits/stdc++.h>

    using namespace std;

    typedef long long ll;

    int main(){
        ll n,x,y;
        ll m;
        map<ll,ll> cnt;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>x;
            cnt[x]++;
        }
        map<ll,ll>::iterator it;
        for(it=cnt.begin();it!=cnt.end();it++){
            x=it->first;
            if(m<=n*1ll*it->second) break;
            m-=n*1ll*it->second;
        }
        for(it=cnt.begin();it!=cnt.end();it++){
            y=it->first;
            if(m<=cnt[x]*1ll*it->second) break;
            m-=cnt[x]*1ll*it->second;
        }
        cout<<x<<" "<<y<<endl;
    }
