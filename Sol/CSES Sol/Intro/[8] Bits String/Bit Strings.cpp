#include <bits/stdc++.h>
 
using namespace std;
long long mul(long long n){
	if(n==1){
		return 2;
	}
	else{
		long long x = mul(n/2);
		if(n%2==1){
			return (x*x*2)%1000000007;
		}
		else{
			return (x*x)%1000000007;
		}
	}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    cout<<mul(n);
    return 0;
}
