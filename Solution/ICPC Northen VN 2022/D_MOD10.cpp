#include <bits/stdc++.h>

using namespace std;

int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    if(n==1){
        cout<<0;
        return 0;
    }
    
    int f=1;
    vector<int>a;
    for(int i=1;i<=9;i++){
        f*=i;
        a.push_back(f);
    }
    vector<int>ans;
    while(n){
        for(int i=8;i>=0;i--){
            if(a[i]<=n){
                int cnt=n/a[i];
                for(int j=0;j<cnt;j++){
                    ans.push_back(i+1);
                }
                n-=cnt*a[i];
                break;
            }
        }
    }
    sort(ans.begin(),ans.end());
    long long num_ans=0;
    for(int i:ans){
        cout<<i;
    }
}
