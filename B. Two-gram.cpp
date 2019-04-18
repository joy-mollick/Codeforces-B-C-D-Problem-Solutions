#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin>>t;
    string s,s1="";
    cin>>s;
    map<string,int>m;
    for(int i=0;i<t-1;i++)
    {
        s1=s1+s[i]+s[i+1];
        m[s1]++;
        s1="";
    }
    int count=0;
    string s2;
    for(map<string,int>::iterator iter=m.begin();iter!=m.end();iter++)
    {
        if(count< (iter->second)){
            count=(iter->second);
            s2=(iter->first);
        }
    }
    cout<<s2<<endl;

    return 0;
}
