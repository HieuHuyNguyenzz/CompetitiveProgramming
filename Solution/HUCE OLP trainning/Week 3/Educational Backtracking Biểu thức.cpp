#include <bits/stdc++.h>

using namespace std;
int ans=0;

long long cal(vector<char>b,vector<int>a,long long m){
    int n=a.size();
    for(int i=0;i<n-1;i++){
        if(b[i]=='*'){
        	int k=i;
        	while(a[k]==1&&k>0)k--;
        	a[k]%=m;
            a[k]*=a[i+1];
            a[k]%=m;
            a[i+1]=1;
        }
    }
    int idx=1;
    long long re=a[0];
    for(int i=0;i<n-1;i++){
        if(b[i]=='+'){
            re+=a[idx];
            re%=m;
            idx++;
        }
        else if(b[i]=='-'){
            re-=a[idx];
            re%=m;
            idx++;
        }
        else{
            re*=a[idx];
            idx++; 
        }
    }
    return re;
}

void solve(vector<char>b,vector<int>a,long long m){
    if(b.size()==a.size()-1){
        if(cal(b,a,m)%m==0){
            ans++;
        }
    }
    else{
        for(int i=0;i<3;i++){
            if(i==0){
                b.push_back('+');
                solve(b,a,m);
                b.pop_back();
            }
            else if(i==1){
                b.push_back('-');
                solve(b,a,m);
                b.pop_back();
            }
            else{
                b.push_back('*');
                solve(b,a,m);
                b.pop_back();
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]%=m;
        }
        vector<char>b;
        string s="";
        solve(b,a,m);
        cout<<ans<<"\n";
        ans=0;
    }
    return 0;
}
