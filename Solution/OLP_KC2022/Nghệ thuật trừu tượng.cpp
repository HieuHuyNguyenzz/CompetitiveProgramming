#include <bits/stdc++.h>

using namespace std;


int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int n,m,ans;
    cin>>n>>m;
    ans=(n+m)*2-4;
    if(n==1&&m==1){
        cout<<1;
        return 0;
    }
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int x[4][n][m];
    map<int,pair<int,int>>z;
    z[0]={0,-1};
    z[1]={0,1};
    z[2]={-1,0};
    z[3]={1,0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==0){
                x[0][i][j]=a[i][j];
                if(a[i][j]==0){
                    ans--;
                }
            }
            else{
                x[0][i][j]=max(x[0][i][j-1], a[i][j]);
            }
        }
        for(int j=m-1;j>=0;j--){
            if(j==m-1){
                if(a[i][j]==0){
                    ans--;
                }
                x[1][i][j]=a[i][j];
            }
            else{
                x[1][i][j]=max(x[1][i][j+1], a[i][j]);
            }
        }
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(i==0){
                if(a[i][j]==0&&j!=0&&j!=m-1){
                    ans--;
                }
                x[2][i][j]=a[i][j];
            }
            else{
                x[2][i][j]=max(x[2][i-1][j], a[i][j]);
            }
        }
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                if(a[i][j]==0&&j!=0&&j!=m-1){
                    ans--;
                }
                x[3][i][j]=a[i][j];
            }
            else{
                x[3][i][j]=max(x[3][i+1][j], a[i][j]);
            }
        }
    }
    for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            for(int k=0;k<4;k++){
                if(x[k][i][j]>x[k][i+z[k].first][j+z[k].second]){
                    ans++;
                    break;
                }
            }
        }
    }
    cout<<ans;
}
