#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,sum=0,sumo=0,sume=0;
    cin>>n;
    vector<int>v;
    vector<int>odd;
    vector<int>even;
    while(n--)
    {
        cin>>a;
        v.push_back(a);
        sum=sum+a;
        if(a%2==1){odd.push_back(a);}
        if(a%2==0){even.push_back(a);}
    }
    if(odd.size()==even.size())
    {
        cout<<"0"<<endl;
        return 0;
    }
   if(odd.size()<even.size()){
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        int ev=odd.size()+1;
        int i=even.size()-1;
        while(ev--)
        {
            sume=sume+even[i];
            i--;
        }
        int vi=odd.size();
        int j=odd.size()-1;
        while(vi--)
        {
            sumo=sumo+odd[j];
            j--;
        }
        cout<<sum-(sumo+sume)<<endl;}
        if(odd.size()>even.size()){
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        int ev=even.size()+1;
        int i=odd.size()-1;
        while(ev--)
        {
            sume=sume+odd[i];
            i--;
        }
        int vi=even.size();
        int j=even.size()-1;
        while(vi--)
        {
            sumo=sumo+even[j];
            j--;
        }
        cout<<sum-(sumo+sume)<<endl;}

}
