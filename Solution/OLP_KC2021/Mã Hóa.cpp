#include <bits/stdc++.h>

using namespace std;
int connect(int n){
    return n*(n-1)/2;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a,r,l,k;
    cin>>l>>r>>a>>k;
    long long n=k/__gcd(a,k);
    if(l%n==0)l/=n;
    else {
        l/=n;
        l++;
    }
    r/=n;
    cout<<(r-l)+1;
    return 0;
}
