
/// Codeforces: Div1 111A - Petya and Inequiations 
/// Category: Observation + BIT.(medium)


#include<bits/stdc++.h>

using namespace std;

const int mxn=100001;

typedef long long ll;


int main()
{
    ll minimum_sum,square_sum,n;
    ll maximum_square_sum;
    cin>>n>>square_sum>>minimum_sum;
    /// considering all elements equal to one without one
    ll largest_element=minimum_sum-(n-1);
    /// this can be maximum sum by those elements
    maximum_square_sum=(n-1)+(largest_element*largest_element);

    if(maximum_square_sum<square_sum || minimum_sum<n)
    {
        cout<<"-1"<<endl;
    }

    else
    {
        for(int i=1;i<n;i++)
        {
            cout<<"1"<<endl;
        }
        cout<<largest_element<<endl;
    }

    return 0;
}
