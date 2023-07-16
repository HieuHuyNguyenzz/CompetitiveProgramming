#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    long long n;
    cin>>n;
    if(n>=1)cout<<0<<"\n";
    if(n>=2)cout<<6<<"\n";
    if(n>=3)cout<<28<<"\n";
    for(long long i=4;i<=n;i++){
    	cout<<(4*(i*i-3)+8*(i*i-4)+4*(i-4)*(i*i-5)+4*(i*i-5)+(i-4)*4*(i*i-7)+(i-4)*(i-4)*(i*i-9))/2<<"\n";
	}
    
}
