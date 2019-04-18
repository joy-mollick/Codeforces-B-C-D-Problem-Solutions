#include<bits/stdc++.h>

using namespace std;

long countValues(long n)
{
    // unset_bits keeps track of count of un-set
    // bits in binary representation of n
    long unset_bits=0;
    while (n)
    {
        if ((n & 1) == 1)
            unset_bits++;
        n=n>>1;
    }

    // Return 2 ^ unset_bits
    return 1 << unset_bits;
}

int main()
{
    long a,b,c;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cout<<countValues(a)<<endl;
    }
    return 0;
}
