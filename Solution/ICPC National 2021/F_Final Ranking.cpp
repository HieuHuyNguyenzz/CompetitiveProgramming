#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    long long ans=1;
    for(int i=1;i<n;i++)ans*=2;
    cout<<ans;
    return 0;
}
