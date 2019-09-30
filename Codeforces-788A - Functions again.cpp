#include<bits/stdc++.h>

using namespace std;

const int N=100010;
int n;
long long int a[N],b[N],s1[N],s2[N],mns,ans;

long long maxSubArraySum(long long x[],int siz)
{
   long long max_so_far = x[1];
   long long curr_max = x[1];

   for (int i = 2; i < siz; i++)
   {
        curr_max = max(x[i], curr_max+x[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%lld",a+i);
	for(int i=1;i<n;i++) b[i]=abs(a[i]-a[i+1]);
	for(int i=1;i<n;i++)
		if(i&1) s1[i]=b[i],s2[i]=-b[i];
		else s1[i]=-b[i],s2[i]=b[i];

	long long int res1,res2;
	  res1=maxSubArraySum(s1,n);// max(l,r)
	  res2=maxSubArraySum(s2,n);// max(l,r)
	  ans=max(res1,res2);
	printf("%lld\n",ans);

}
