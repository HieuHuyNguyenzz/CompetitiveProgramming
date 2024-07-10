#include <bits/stdc++.h>
using namespace std;
long long p[20];
long long ans=INT_MAX;
 
void dequi(long long a,long long b,int n){
    if(n==0){
        ans=min(ans, abs(a-b));
    }
    else{
        dequi(a+p[n-1],b,n-1);
        dequi(a,b+p[n-1],n-1);
    }
}
 
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    dequi(0,0,n);
    cout<<ans;
}