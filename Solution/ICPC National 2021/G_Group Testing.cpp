#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int be=0,lon=0;
    int i=0,j=1;
    while(k--){
        if(a[i]>1)be+=a[i];
        if(a[n-j]>1)lon+=a[n-j];
        i++;
        j++;
    }
    cout<<be<<" "<<lon;
    return 0;
}
