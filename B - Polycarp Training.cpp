#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, x, y;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int days=1;
    int ans=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]>=days)
            {
                ans++;
                days++;
            }
        }
    cout<<ans<<endl;
}
