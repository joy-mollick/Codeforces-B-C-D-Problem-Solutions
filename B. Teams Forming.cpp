#include<bits/stdc++.h>

using namespace std;

int main()
{

    int tc,a;
    cin>>tc;
    vector<int>v;
    for(int i=0;i<tc;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=0;i<tc;i=i+2)
    {
        sum=sum+v[i+1]-v[i];
    }
    cout<<sum<<endl;
    return 0;
}
