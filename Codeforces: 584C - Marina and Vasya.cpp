
/// Codeforces: 584C - Marina and Vasya 
/// Category: greedy+ds(medium).


#include<bits/stdc++.h>

using namespace std;


int main()
{

    set<int>non_matching;
    set<int>matching;

    string st1,st2;
    int n,t;
    cin>>n>>t;
    cin>>st1>>st2;

    char ans[n];

    ///initially make all characters different from two strings.
    for(int i=0;i<n;i++)
    {
        if(st1[i]!='a' && st2[i]!='a') ans[i]='a';

         if(st1[i]!='b' && st2[i]!='b') ans[i]='b';

         if(st1[i]!='c' && st2[i]!='c') ans[i]='c';
    }
    ///here ans is the str3 string which differs n characters with str1 and str2
    ///now our target is to match (n-t) characters with str1 and str3 , str2 and str3.

    for(int i=0;i<n;i++)
    {
        if(st1[i]==st2[i]) matching.insert(i);
        else non_matching.insert(i);
    }

    int should_matching_characters=n-t;

///first make match from the matching between s1 and s2
    while(should_matching_characters>0 && !matching.empty())
    {
        auto x=matching.begin();
        ans[(*x)]=st1[(*x)];
        matching.erase(x);
        should_matching_characters--;
    }

///if after completing matching from set,it also need matching.
///then,obviously make equal one character to str1 and another one with str2
///thus another matching ends

    while(should_matching_characters>0 && (int)non_matching.size()>=2)
    {
        auto x=non_matching.begin();
        ans[*x]=st1[*x];
        non_matching.erase(x);

        auto y=non_matching.begin();
        ans[*y]=st2[*y];
        non_matching.erase(y);

        should_matching_characters--;
    }

    if(should_matching_characters!=0) cout<<"-1"<<endl;
    else
    {
        for(int i=0;i<n;i++) cout<<ans[i];
        cout<<endl;
    }

    return 0;
}

