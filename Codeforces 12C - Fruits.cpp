

/// Codeforces 12C - Fruits 

/// Fantastic one !


/// greedy and sorting

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m,val;
    cin>>n>>m;

    vector<int>price;
    while(n--)
    {
        cin>>val;
        price.push_back(val);
    }
    sort(price.begin(),price.end());

    vector<int>arr;
    map<string,int>mp;
    string s;

    while(m--)
    {
        cin>>s;
        mp[s]++;
    }

    map<string,int>::iterator it=mp.begin();

    for(it;it!=mp.end();it++)
    {
        arr.push_back(it->second);
    }

    sort(arr.begin(),arr.end());
    int lst=arr.size();
    int ptr=price.size()-1;
    int mxmum=0;

    for(int i=lst-1;i>=0;i--)
    {
        mxmum+=arr[i]*price[ptr];
        ptr--;
    }

    int mnmum=0;
    ptr=0;
    for(int i=lst-1;i>=0;i--)
    {
        mnmum+=arr[i]*price[ptr];
        ptr++;
    }

    cout<<mnmum<<" "<<mxmum<<endl;

    return 0;
}
