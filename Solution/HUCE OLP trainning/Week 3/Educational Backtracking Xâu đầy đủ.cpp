#include <bits/stdc++.h>

using namespace std;
long long ans=0;

bool cal(map<char,int>z){
    for(char i='a';i<='a'+25;i++){
        if(z[(int)i]==0)return false;
    }
    return true;
}

void backtrack(vector<string>s, vector<bool>a,map<char,int>z){
    if(a.size()==s.size()){
        if(cal(z)==true)
            ans++;
    }
    else{
        int n=a.size();
        for(char i:s[n]){
            z[(int)i]++;
        }
        a.push_back(true);
        if(cal(z)==true){
            ans+=pow(2,s.size()-n-1);
        }
        else{
            backtrack(s,a,z);
        }
        a.pop_back();
        for(char i:s[n]){
            z[(int)i]--;
        }
        a.push_back(false);
        backtrack(s,a,z);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    vector<bool>a;
    map<char,int>z;
    backtrack(s,a,z);
    cout<<ans;
    return 0;
}
