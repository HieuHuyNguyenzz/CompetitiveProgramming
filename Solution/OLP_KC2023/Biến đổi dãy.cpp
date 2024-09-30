//Sol này ăn được 13/20 test
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int threshold = 0;
    vector<int>chonx(m+1, 0);
    for(int i=0;i<n-1;i++){
            int nox;
            if(a[i]<a[i+1]){
                nox=a[i+1]-a[i];
            }
            else{
                nox=(a[i+1]+m-a[i])%m;
            }
            threshold+=nox;
    }
    for(int i=0;i<n-1;i++){
        for(int j=1;j<=m;j++){
            if(chonx[j]>threshold){
                break;
            }
            int nox,yesx;
            if(a[i]<a[i+1]){
                nox=a[i+1]-a[i];
            }
            else{
                nox=(a[i+1]+m-a[i])%m;
            }
            if(j<a[i+1]){
                yesx=a[i+1]-j+1;
            }
            else {
                yesx=(a[i+1]+m-j)%m+1;
            }
            chonx[j]+=min(nox,yesx);
        }
    }
    sort(chonx.begin(),chonx.end());
    cout<<chonx[1];
}
