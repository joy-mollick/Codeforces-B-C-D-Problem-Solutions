// https://codeforces.com/problemset/problem/285/C

#include<bits/stdc++.h>

       using namespace std;

    typedef  long long ll;


       int main()
       {
           int n;
           cin>>n;
           int arr[n];
           ll sum=0;
           for(int i=0;i<n;i++)
           {
               cin>>arr[i];
           }
           sort(arr,arr+n);
           for(int j=1;j<=n;j++)
           {
               sum+=(ll)abs(arr[j-1]-j);
           }
           cout<<sum<<endl;
       }
