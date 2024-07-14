#include<bits/stdc++.h>
using namespace std;
int main(){
	long long m,n,a;
	cin>>m>>n>>a;
	long long dem1=0,dem2=0;
	if(m%a==0){
		dem1=m/a;
	}
	else if(m%a!=0){
		dem1=m/a+1;
	}
	if(n%a==0)dem2=n/a;
	else if(n%a!=0)dem2=n/a+1;		
	cout<<dem1*dem2;
	}	