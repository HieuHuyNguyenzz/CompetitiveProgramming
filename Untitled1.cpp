#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<bool> is_prime(101, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= 100; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= 100; j += i)
                is_prime[j] = false;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
    
        vector<int>z;
        for(int i=n-1;i>0;i--){
            if(is_prime[a[i]]==false){
                for(int j=i-1;j>=0;j--){
                    z.push_back(__gcd(a[i],a[j]));
                    //cout<<a[i]<<a[j]<<" "<<__gcd(a[i],a[j])<<" ";
                }
            }
        }
        if(z.size()<=1)cout<<1<<"\n";
        else{
        	sort(z.begin(),z.end(),greater<int>());
			cout<<z[1]<<"\n";
        }
        
    }
    return 0;
}
