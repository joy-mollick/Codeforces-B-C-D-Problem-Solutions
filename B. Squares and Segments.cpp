#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"2"<<endl;
    }
    else if(n==2)
    {
        cout<<"3"<<endl;
    }
    else if(n==3)
    {
        cout<<"4"<<endl;
    }
    else if(n==4){
        cout<<"4"<<endl;
    }
    else if(n==6||n==5)
    {

        cout<<"5"<<endl;
    }
    else
    {
        int ans=3;
        int range=6;
        int prev=6;

          for(int i=6;;i++)
          {
              int start=prev+1;
              int end=start+(i/2)-1;
              if(start<=n&&n<=end)
              {
                  cout<<i<<endl;
                  return 0;
              }
              prev=end;
          }

    }
}
