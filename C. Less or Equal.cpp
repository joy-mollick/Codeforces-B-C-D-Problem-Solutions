#include<bits/stdc++.h>

using namespace std;

int main()

{
    long int n,t,i;
    cin>>n>>t;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(arr[t-1]==arr[t]||(t==0&&arr[0]<=1))
        cout<<"-1"<<endl;
        else if((t==0 && arr[0]>1))
            cout<<"1"<<endl;
    else
        cout<<arr[t-1]<<endl;


    return 0;
}
