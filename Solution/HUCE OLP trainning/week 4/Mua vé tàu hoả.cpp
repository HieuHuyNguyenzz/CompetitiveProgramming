#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll N = 1e5+ 10;
#define INF 1e9 + 1
ll a[N],dp[N];
ll l[3],c[3],n,f,s;
void solve()
{

    cin>>l[0]>>l[1]>>l[2]>>c[0]>>c[1]>>c[2];
    cin>>n>>s>>f;
    for(int i = 2 ; i<= n ; i++)
    {
        cin>>a[i];
    }
    if(s > f) swap(s,f);
    fill(dp+s+1, dp+n+1, LLONG_MAX-2*INF);
    ll ans = 0;
    for(int i = s + 1; i <= f; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            ans = lower_bound(a + 1 , a + n + 1, a[i] - l[j]) - a;
            dp[i] = min(dp[i], dp[ans] + c[j]);
        }
    }
    cout << dp[f]<<endl;
}
int main()
{
    solve();
}
