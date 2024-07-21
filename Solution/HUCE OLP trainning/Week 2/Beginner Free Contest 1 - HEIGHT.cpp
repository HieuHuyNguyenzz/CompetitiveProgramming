#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    vector<int>b(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b.begin(),b.end());
    for(int i:a){
        cout<<lower_bound(b.begin(),b.end(),i)-b.begin()<<" ";
    }
    return 0;
}
