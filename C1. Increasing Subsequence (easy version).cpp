#include<bits/stdc++.h>

/*
Nayeem Mollick Joy , Electrical & Electronic Engineering , University of Rajshahi.
Passionate Contest Programmer , Coder , Android Developer */

using namespace std;

#define maxi  100000001

typedef unsigned long long ll;

deque<int>d;

void print()
{
    for(int j=0;j<d.size();j++)
    {
        cout<<d[j]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        d.push_back(a);
    }
    vector<char>v;
    vector<int>f;
    int right =d.back();
    int left  =d.front();
    if(right>=left)
    {
        v.push_back('L');
        f.push_back(left);
      //  print();
        d.pop_front();
    }
    else{
        v.push_back('R');
        f.push_back(right);
       // print();
        d.pop_back();
    }
    int buka;
    while(true&&!(d.empty()))
    {
         right =d.back();
     left  =d.front();
     buka=f[f.size()-1];
     if(buka<right&&buka<left){
         if(right>=left)
    {
        v.push_back('L');
        d.pop_front();
        f.push_back(left);
        //print();
    }
    else {
        v.push_back('R');
        d.pop_back();
        f.push_back(right);
       // print();
    }
    }
    else if(buka<right&&buka>left)
    {
       v.push_back('R');
        d.pop_back();
        f.push_back(right);
       // print();
    }
    else if(buka>right&&buka<left)
    {
         v.push_back('L');
        d.pop_front();
        f.push_back(left);
       // print();
    }
    else if((buka>right&&buka>left)||(d.empty()))
    {
        break;
    }
    }
    cout<<v.size()<<endl;
    for(int l=0;l<v.size();l++)
    {
        cout<<v[l];
    }
}
