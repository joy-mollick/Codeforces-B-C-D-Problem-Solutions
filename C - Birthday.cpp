#include<bits/stdc++.h>

/*
Nayeem Mollick Joy , Electrical & Electronic Engineering , University of Rajshahi.
Passionate Contest Programmer , Coder , Android Developer */

using namespace std;

#define maxi  100000001

typedef unsigned long long ll;

// To minimize adjacent difference , U have to just to choose in which way u have to approach. If it was not circular then obviously only sorting is best way but it is counted as a circular . So, just use even and odd index technique

int main()
{
     int n;
     scanf("%d\n",&n);
     int arr[n];
     for(int i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     sort(arr,arr+n);
     for(int i=0;i<n;i++)
     {
         if(i%2==1)
         {
             printf("%d ",arr[i]);
         }
     }
     for(int j=n-1;j>=0;j--)
     {
         if(j%2==0)
         {
             printf("%d ",arr[j]);
         }
     }
     printf("\n");
     return 0;
}
