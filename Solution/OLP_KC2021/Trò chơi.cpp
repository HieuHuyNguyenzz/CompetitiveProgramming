#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n+2];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    a[0]=0;
    a[n+1]=0;
    stack<long long>x;
    x.push(0ll);
    vector<long long>dp1(n+2,0);
    vector<long long>dp2(n+2,0);
    for(int i=1;i<=n;i++){
        while(a[i]<a[x.top()]&&x.top()!=0){
            x.pop();
        }
        dp1[i]+=dp1[x.top()]+a[i]*(i-x.top());
        //cout<<dp1[i]<<" ";
        x.push(i);
    }
    //cout<<"\n";
    while (!x.empty()) {
        x.pop();
    }
    x.push(n+1);
    long long ans=0;
    for(int i=n;i>0;i--){
        while(a[i]<a[x.top()]&&x.top()!=n+1){
            x.pop();
        }
        dp2[i]+=dp2[x.top()]+a[i]*(x.top()-i);
        //cout<<dp2[i]<<" ";
        ans=max(ans, dp1[i]+dp2[i]-a[i]);
        x.push(i);
    }
    cout<<ans;
}
