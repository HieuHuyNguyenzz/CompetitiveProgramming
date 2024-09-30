#include <bits/stdc++.h>

using namespace std;

int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    long long sum=0;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        sum+=x;
    }
    cout<<0-sum;
    
}
