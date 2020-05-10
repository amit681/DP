#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int cost[n+1];
        for(int i=1;i<=n;i++)
        cin >> cost[i];
        
        ll ans[n+1];
        for(int i=1;i<=n;i++)
        {
            ans[i]=cost[i];
            for(int j=1;j<i;j++)
            {
                ans[i]=max(ans[i],ans[j]+ans[i-j]);
            }
        }
        cout << ans [n] << endl;
    }
}


https://www.hackerearth.com/problem/algorithm/tanya-and-lassi/