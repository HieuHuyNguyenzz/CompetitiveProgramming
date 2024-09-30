#include <bits/stdc++.h>

using namespace std;

int limit = 1e9;
int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>a;
    vector<int>check={1};
    for(int i=2;i<=limit;i*=2){
        check.push_back(i);
    }
    for(int i=3;i<=limit;i*=3){
        check.push_back(i);
    }
    for(int i=5;i<=limit;i*=5){
        check.push_back(i);
    }
    sort(check.begin(),check.end());
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(binary_search(check.begin(),check.end(),x)==true){
            a.push_back(x);
        }
    }
    sort(a.begin(),a.end());
    while(m--){
        int lo,hi;
        cin>>lo>>hi;
        auto low = lower_bound(a.begin(),a.end(),lo);
        auto high = upper_bound(a.begin(),a.end(),hi);
        high--;
        if(low==a.end()||*high>hi){
            cout<<0<<"\n";
        }
        else{
            cout<<high-low+1<<"\n";
        }
    }
}
