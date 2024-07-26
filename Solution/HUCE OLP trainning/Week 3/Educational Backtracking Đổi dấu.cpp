#include <bits/stdc++.h>

using namespace std;

vector<int>h;
vector<vector<int>>w(17);
int ans=INT_MAX,n;

void cal_phat(vector<int>s){
    int total=0;
    for(int i=0;i<s.size();i++){
        total+=s[i]*h[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            total+=w[i][j]*s[i]*s[i+j+1];
        }
    }
    ans=min(ans,total);
}

void backtrack(vector<int>s,int idx){
    if(idx==s.size()){
        cal_phat(s);
    }
    else{
        backtrack(s,idx+1);
        s[idx]=-1;
        backtrack(s,idx+1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        h.push_back(x);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            int x;
            cin>>x;
            w[i].push_back(x);
        }
    }
    vector<int>s(n,1);
    backtrack(s,0);
    cout<<ans;
    return 0;
}
