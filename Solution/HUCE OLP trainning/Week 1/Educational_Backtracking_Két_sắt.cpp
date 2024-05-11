#include <bits/stdc++.h>

using namespace std;

int n,m,ans=0;
vector<string>s;
vector<int>a;

bool check(vector<int>b){
    for(int i=0;i<m;i++){
        if(a[i]<b[i]){
            return false;
        }
    }
    return true;
}
bool check_final(vector<int>b){
    for(int i=0;i<m;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}

void backtrack(string s1, vector<int>b,int idx){
    if(idx==n){
        if(check_final(b)==true){
            ans++;
            //cout<<s1<<"\n";
        }
    }
    else{
        for(int i=0;i<m;i++){
            if(s[i][idx]=='0')b[i]++;
        }
        if(check(b)==true){
            backtrack(s1+'0',b,idx+1);
        }
        for(int i=0;i<m;i++){
            if(s[i][idx]=='0')b[i]--;
        }
        for(int i=0;i<m;i++){
            if(s[i][idx]=='1')b[i]++;
        }
        if(check(b)==true){
            backtrack(s1+'1',b,idx+1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        string ss;
        int aa;
        cin>>ss>>aa;
        s.push_back(ss);
        a.push_back(aa);
    }
    vector<int>b(m,0);
    backtrack("",b,0);
    cout<<ans;
    return 0;
}
