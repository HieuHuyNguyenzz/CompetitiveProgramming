#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n%4==0){
    	cout<<"YES\n"<<n/2<<"\n";
		for(int i=1;i<=n;i++){
			if(i%4==1||i%4==0){
				cout<<i<<" ";
			}	
		}
		cout<<"\n"<<n/2<<"\n";
		for(int i=1;i<=n;i++){
			if(i%4==2||i%4==3){
				cout<<i<<" ";
			}
		}   	
	}
	else if(n%4==3){
		cout<<"YES\n"<<n/2+1<<"\n"<<"1 2 ";
		for(int i=4;i<=n;i++){
			if(i%4==1||i%4==2){
				cout<<i<<" ";
			}	
		}
		cout<<"\n"<<n/2<<"\n"<<"3 ";
		for(int i=4;i<=n;i++){
			if(i%4==0||i%4==3){
				cout<<i<<" ";
			}
		}
	}
	else{
		cout<<"NO";
	}
    return 0;
}
