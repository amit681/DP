#include <bits/stdc++.h>
using namespace std;
long long a[100005],dp[100005];
int main()
{
int t; cin>>t;
while(t--)
{
int n,k; cin>>n>>k;
for(int i=0;i<n;++i)
{
cin>>a[i];
}
dp[0] = a[0];
for(int i=1;i<=k;++i)
{
dp[i] = max(dp[i-1],a[i]);
}
for(int i=k+1;i<n;++i)
{
dp[i] = max(max(dp[i-k-1]+a[i],dp[i-1]),max(dp[i-k-1],a[i]));
}
if(dp[n-1]<0)
dp[n-1] =0;

cout<<dp[n-1]<<endl;
}
}



https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/once-upon-a-time-in-time-land/