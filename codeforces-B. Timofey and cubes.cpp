  // https://codeforces.com/problemset/problem/764/B

   #include<bits/stdc++.h>

   using namespace std;

   vector<int>v;

   void print()
   {
        for(int k=0;k<v.size();k++)
        {
            cout<<v[k]<<" ";
        }
        cout<<endl;
   }


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    int n,sz;
    cin>>n;
    while(n--)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<v.size()/2;i++)
    {
        if(i%2==0)
        swap(v[i],v[v.size()-i-1]);
    }
       print();
}
