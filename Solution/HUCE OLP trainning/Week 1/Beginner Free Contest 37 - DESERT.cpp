#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,c;
    cin>>n>>c;
    int a[n];
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum>=c)cout<<"YES";
    else cout<<"NO";
    return 0;
}
