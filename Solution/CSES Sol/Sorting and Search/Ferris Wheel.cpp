#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int n,x,ans=0;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	sort(a,a+n);
	int s=0,e=n-1;
	while(s<=e){
		if(a[s]+a[e]<=x){
			ans++;
			s++;
			e--;
		}
		else{
			ans++;
			e--;
		}
	}
	cout<<ans;
    return 0;
}
