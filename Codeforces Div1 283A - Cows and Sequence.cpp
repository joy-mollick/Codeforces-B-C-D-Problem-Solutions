

/// Codeforces Div1A. Cows and Sequence
/// Nice one !


/// data structure


#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mx=200001;

double add_value[mx];
double value[mx];

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int query,typ,len,x;
    cin>>query;
    /// initially there is zero
    int indx=1;
    double sum=0.0;
    while(query--)
    {
        cin>>typ;

        if(typ==1)
        {
            cin>>len>>x;
            /// first 1 to len numbers will take value x as addition 
            add_value[len]+=x;
            sum+=(double)(len)*(double)x;
        }

        /// add at the end
        else if(typ==2)
        {
            cin>>x;
            sum+=(double)x;
            /// index is increased at the end 
            indx++;
            value[indx]=x;
        }

        /// delete the last element
        else
        {
            sum-=value[indx];
            sum-=add_value[indx];
            ///take the extra value of add_value 
            add_value[indx-1]+=add_value[indx];
            /// last index has been empty 
            value[indx]=0;
            add_value[indx]=0;
            indx--;
        }
        printf("%0.10lf\n",(double)sum/(double)indx);
    }
    return 0;
}
