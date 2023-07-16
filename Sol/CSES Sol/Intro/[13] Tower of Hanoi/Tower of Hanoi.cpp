#include <bits/stdc++.h>
using namespace std;
void dequi(int n,int a,int b,int c){
	if(n==1){
		cout<<a<<" "<<b<<"\n";
	}
	else{
		dequi(n-1,a,c,b);
		dequi(1,a,b,c);
		dequi(n-1,c,b,a);
	}
}
using namespace std;
int main() {
    
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<"\n";
    dequi(n,1,3,2);
    return 0;
}
