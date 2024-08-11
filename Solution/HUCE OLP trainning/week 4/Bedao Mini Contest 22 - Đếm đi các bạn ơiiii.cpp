#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    vector<vector<int>>pre_sum(n,vector<int>(23,0));
    for(int i=0;i<n;i++){
        cin>>a[i];
        pre_sum[i][a[i]%23]++;
        if(i>0){
            for(int j=0;j<23;j++){
                pre_sum[i][j]+=pre_sum[i-1][j];
            }
        }
    }
    long long ans=0;
    for(int i=0;i<n-5;i++){
        ans+=pre_sum[n-1][a[i]%23]-pre_sum[i+5][a[i]%23];
    }
    cout<<ans;
    return 0;
}
