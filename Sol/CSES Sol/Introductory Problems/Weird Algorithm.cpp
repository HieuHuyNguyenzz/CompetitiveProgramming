#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
    	if(n%2==1)n=n*3+1;
    	else{
    		n/=2;
		}
		cout<<n<<" ";
	}
    return 0;
}
