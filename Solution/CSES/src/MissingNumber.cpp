#include <bits/stdc++.h>
 
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    long long n;
    long long missing_sum=0,sum=0;
    cin>>n;
    sum=(n+1)*n/2;
    for(int i=1;i<n;i++){
        long long x;
        cin>>x;
        missing_sum+=x;
    }
    //cout<<sum<<" "<<missing_sum;
    cout<<sum-missing_sum;
}