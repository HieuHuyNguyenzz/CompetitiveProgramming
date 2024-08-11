#include<bits/stdc++.h>
using namespace std;
struct i{
	int a;
	int pos;
};
bool srt(i c, i b){
	return c.a<b.a;
	}
int main(){
	int n,x;
	cin>>n>>x;
	i t[n];
	for(int i=0;i<n;i++){
		cin>>t[i].a;
		t[i].pos=i+1;
	}
	sort(t,t+n,srt);
	int i=0,j=n-1;
	while(t[i].a+t[j].a!=x&&i<j){
		if(t[i].a+t[j].a>x)j--;
		else if(t[i].a+t[j].a<x)i++;
	}
	if(i==j)cout<<"IMPOSSIBLE";
	else{
		cout<<t[i].pos<<" "<<t[j].pos;
	}
}		
