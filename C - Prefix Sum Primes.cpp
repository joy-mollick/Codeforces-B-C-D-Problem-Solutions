#include<bits/stdc++.h>

/*
Nayeem Mollick Joy , Electrical & Electronic Engineering , University of Rajshahi.
Passionate Contest Programmer , Coder , Android Developer */

using namespace std;

#define maxi  100000001

typedef unsigned long long ll;

int main()
{

    int n,a;
    cin>>n;
    int ar[3]={0};
    int arr[n];
    for(int j=0;j<n;j++)
    {
        cin>>a;
        arr[j]=a;
        ar[a]++;
    }
    //cout<<ar[1]<<" "<<ar[2]<<endl;
       if(ar[2])
       {
           cout<<"2 ";
           ar[2]--;
       }
       if(ar[1])
       {
           cout<<"1 ";
           ar[1]--;
       }
       while(ar[2]--)
       {
           cout<<"2 ";
       }
       while(ar[1]--)
       {
           cout<<"1 ";
       }

    cout<<endl;
}
