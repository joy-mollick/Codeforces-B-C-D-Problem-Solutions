
/// Codeforces- 918C - The Monster.
/// Category:  bracket+greedy.


#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


int main()

{
    int ans=0;
    string s;
    cin>>s;
    int sz=(int)s.size();

    /// we will assume question as closing bracket
    int question=0;
    int balance=0;

    for(int i=0;i<sz;i++)
    {
        ///starting can't be without starting bracket
        if(s[i]==')') continue;

        question=0;
        balance=0;

        for(int j=i;j<sz;j++)
        {
            if(s[j]==')') {balance--;}
            if(s[j]=='(') {balance++;}
            if(s[j]=='?') {question++;balance--;}

            if(balance<0)
            {
        ///if one question turns into starting bracket
        ///then balance will increase by two
                if(question>0)
                {
                    balance+=2;
                    question--;
                }
                else break;
            }
           /// cout<<i<<" "<<j<<" "<<balance<<endl;
        /// one correct substring found with starting index i
            if(balance==0) {ans++;}
        }

    }

    cout<<ans<<endl;

    return 0;
}
