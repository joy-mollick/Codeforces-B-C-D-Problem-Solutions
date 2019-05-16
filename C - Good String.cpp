#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
	vector<char>v;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
    {
        if(v.size()%2==0||(v.back()!=s[i]))
            v.push_back(s[i]);
    }
    if(v.size()%2==1)
    {
        v.pop_back();
    }
    cout<<n-(int)(v.size())<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    cout<<endl;
}
