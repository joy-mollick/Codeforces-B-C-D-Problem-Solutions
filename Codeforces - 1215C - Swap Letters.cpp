
/// Codeforces - 1215C - Swap Letters 
/// implementation +greedy

#include<bits/stdc++.h>

using namespace std;

int main()

{
    string s1,s2;
    int n;
    cin>>n;
    cin>>s1>>s2;

    vector<int>a_non_matching;
    vector<int>b_non_matching;

    for (int i = 0; i < n; i++)
    {
		if (s1[i] != s2[i])
        {
			if (s1[i] == 'a')
			{
				a_non_matching.push_back(i);
			}
             else
			{
				b_non_matching.push_back(i);
			}
		}
	}

	int sz_a=a_non_matching.size();
	int sz_b=b_non_matching.size();
	vector<pair<int,int> >ans;

	if(sz_a%2!=sz_b%2) {cout<<"-1"<<endl;return 0;}


	else
    {
        for(int i=0;i<sz_a-1;i+=2)
        {
            ans.push_back(make_pair(a_non_matching[i],a_non_matching[i+1]));
        }
        for(int i=0;i<sz_b-1;i+=2)
        {
            ans.push_back(make_pair(b_non_matching[i],b_non_matching[i+1]));
        }

        if(sz_a%2==1)
        {
            /// think about  a  b
            ///              b  a this case

            ans.push_back(make_pair(a_non_matching[sz_a-1],a_non_matching[sz_a-1]));
            ans.push_back(make_pair(a_non_matching[sz_a-1],b_non_matching[sz_b-1]));
        }

        cout<<(int)ans.size()<<endl;
        for(int i=0;i<(int)ans.size();i++)
        {
            cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
        }
    }

    return 0;
}
