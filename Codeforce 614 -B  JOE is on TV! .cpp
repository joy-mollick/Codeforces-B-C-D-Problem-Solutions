#include<bits/stdc++.h>

using namespace std;

// Greedy Algorithm

// Think about the remaining opponent s and in each round one person eliminated (1/s)+(1/s-1)+(1/s-2)+(1/s-3) +.....+1

int main()

{
    double x;
    cin>>x;
    double ans=0.0;
    for(double i=1.0;i<=x;i=i+1.0)
    {
        ans+=(1.0/i);
    }
    printf("%0.04lf\n",ans);
    return 0;
}
