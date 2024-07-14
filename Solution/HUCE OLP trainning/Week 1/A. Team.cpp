#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,c;
	int countx=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		int dem=0;
		if(a==1)dem++;
		if(b==1)dem++;
		if(c==1)dem++;
		if(dem>=2)countx++;
	}
	cout<<countx;
}