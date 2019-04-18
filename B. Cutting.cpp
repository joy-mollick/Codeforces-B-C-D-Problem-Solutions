#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;



int main()
{
    int n,b,k;
    cin>>n>>k;
    vector<int>v;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int odd=0,even=0,cost=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;

            if(even==odd&&i!=n-1&&even!=0&&odd!=0){
        cost=abs(a[i]-a[i+1]);
            v.push_back(cost);
            even=0;
            odd=0;
            }
    }
    sort(v.begin(),v.end());
    int count=0,sum=0;
    for(int y=0;y<v.size();y++)
    {
        sum=sum+v[y];
        if(sum<=k)
            count++;
    }
    cout<<count<<endl;

    return 0;
}
