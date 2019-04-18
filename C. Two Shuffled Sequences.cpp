#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<int>v;
   int a;
   map<int,int>m;

   bool ok=true;
   while(n--)
   {
       cin>>a;
       m[a]++;
       if(m[a]>2)
       {
           ok=false;
       }
       v.push_back(a);
   }
   if(ok==false)
   {
       cout<<"NO"<<endl;
   }
   else
   {
       vector<int>in;
       vector<int>decre;
       for(int k=0;k<v.size();k++)
       {
           if(m[v[k]]==2)
           {
               in.push_back(v[k]);
               m[v[k]]--;
           }
           else
           {
               decre.push_back(v[k]);
           }
       }
       cout<<"YES"<<endl;
       cout<<in.size()<<endl;
       sort(in.begin(),in.end());
       for(int j=0;j<in.size();j++)
       {
           cout<<in[j]<<" ";
       }
       cout<<endl;
        cout<<decre.size()<<endl;
        sort(decre.rbegin(),decre.rend());
       for(int l=0;l<decre.size();l++)
       {
           cout<<decre[l]<<" ";
       }
       cout<<endl;
       }

}
