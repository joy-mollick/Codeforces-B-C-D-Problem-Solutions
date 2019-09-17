  // https://codeforces.com/problemset/problem/508/B

   #include<bits/stdc++.h>

   using namespace std;


int main()
{
    int n,i,j;
    string s;
    cin>>s;
    int sz=s.size();
    char c=s[sz-1];
    char c1='8';
    int idx=-1,idx1=-2;
    for(int i=0;i<sz-1;i++)
    {
        char c2=s[i];
        if((c2-'0')%2==0)
        {
            if(c>c2){
            c1=c2;
            idx=i;
            break;
            }
            idx1=i;
            //cout<<idx<<endl;
        }
    }
    if(idx==-1&&idx1==-2)
    {
       cout<<"-1"<<endl;
    }
    else
    {
        if(idx==-1)
        {
            swap(s[sz-1],s[idx1]);
        }
        else
        {
            swap(s[sz-1],s[idx]);
        }
        cout<<s<<endl;
    }
}
