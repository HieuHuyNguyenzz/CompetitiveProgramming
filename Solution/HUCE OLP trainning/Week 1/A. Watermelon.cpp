#include<iostream>
using namespace std;
int main(){
	int w,n;
	cin>>w;
	if(w%2==1)cout<<"NO";
	else if(w==2)cout<<"NO";
	else if(w%2==0&&w>2)cout<<"YES";
	return 0;
	}		