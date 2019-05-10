#include<bits/stdc++.h>

using namespace std;

// The number of ways , u have to choose cities at least one city so, obviously 2^n-1

#define max 1000000007

typedef unsigned long long int ll;

#define mod 1000000007

 int arr[11]={0};

bool check()
{
    map<int,int>m;
    int mx_count=0;
    int min_count=100001;
    for(int i=1;i<=10;i++)
    {
        if(arr[i]>0)
        {
            m[arr[i]]++;
            if(arr[i]>mx_count)
            {
                mx_count=arr[i];
            }
            if(arr[i]<min_count)
            {
                min_count=arr[i];
            }
        }
    }
    //cout<<mx_count<<" "<<min_count<<endl;
    if(m[mx_count]==1&&m.size()==2&&mx_count==min_count+1)
    {
        return true;
    }
    else if(m[min_count]==1&&m.size()==2&&min_count==1)
    {
        return true;
    }
    else{
        return false;
    }
}


int main()

{
   // prime_sieve();
    int l,r;
    scanf("%d",&l);
    vector<int>v;
    for(int i=0;i<l;i++)
    {
        scanf("%d",&r);
        //arr[r]++;
        v.push_back(r);
    }
    int count=0;
    int ans=0;
    for(int i=0;i<v.size();i++)
    {
        count++;
        arr[v[i]]++;
        //cout<<count<<" kl"<<endl;
        if(check())
        {

                ans=count;
        }
    }
    if(ans==0)
    {
        ans=v.size();
    }
    printf("%d\n",ans);
    return 0;
}
