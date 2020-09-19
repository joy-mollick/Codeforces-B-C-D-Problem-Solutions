
/// Codeforces : D. Make a Permutation!.
/// Category : Greedy + easy.

#include<bits/stdc++.h>


using namespace std;

///it is easy to see that the minimum number of changes is the non-appearance number
///store the numbers which don't have appearance
///then greedily fill up our array.

int main()

{
    int n;
    cin>>n;
    int cnt[n+1];
    int arr[n];
    memset(cnt,0,sizeof(cnt));

    for(int i=0;i<n;i++) {cin>>arr[i];cnt[arr[i]]++;}

    vector<int>v;

    for(int i=1;i<=n;i++)
    {
        /// these numbers should be replaced.
        if(!cnt[i]) v.push_back(i);
    }

    bool reserved[n+1];
    memset(reserved,false,sizeof(reserved));

    int ans=(int)v.size();
    int j=0;

    for(int i=0;i<n;i++)
    {
        /// we have to deal with duplicate numbers
        if(cnt[arr[i]]>1)
        {
            /// don't replace
            /// number has to be reserved
            /// because every number needs to be obviously one time
            if(reserved[arr[i]]==false && arr[i]<v[j])
            {
                reserved[arr[i]]=true;
            }
           /// the number arr[i] has been reserved or 
           /// v[j] is smaller one than this duplicate arr[i]
           /// this is greedy option
            else
            {
                ///replace arr[i] with v[j]
                cnt[arr[i]]--;
                arr[i]=v[j];
                j++;
            }
        }
    }

    cout<<ans<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    cout<<endl;

    return 0;
}
