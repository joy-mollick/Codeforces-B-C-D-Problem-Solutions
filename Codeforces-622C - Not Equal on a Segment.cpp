

/// Codeforces Div1 713A - Sonya and Queries
/// Nice one !


/// As it should be matched from right and
///  it's supplemented with 0-s from the left

/// So , we can convert our given number to another number by 0 and 1


#include<bits/stdc++.h>

using namespace std;

typedef long long ll;




int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,l,r,x;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int left_pos_not_equal_to_arr_i[n];
    left_pos_not_equal_to_arr_i[0]=-1;
    /// pre-process
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1]) left_pos_not_equal_to_arr_i[i]=left_pos_not_equal_to_arr_i[i-1];
        else left_pos_not_equal_to_arr_i[i]=i-1;
    }
    while(m--)
    {
        cin>>l>>r>>x;
        l--;r--;
        if(arr[r]!=x) cout<<r+1<<'\n';
        else if(left_pos_not_equal_to_arr_i[r]>=l) cout<<left_pos_not_equal_to_arr_i[r]+1<<'\n';
        else cout<<"-1"<<'\n';
    }
    return 0;
}
