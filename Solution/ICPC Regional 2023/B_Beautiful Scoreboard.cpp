#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        char score[n][m];       
        set<int>f1;
        bool check=true;
        for(int i=0;i<n;i++){
        	int count_one=0;
            for(int j=0;j<m;j++){
                cin>>score[i][j];
                if(score[i][j]=='1'){
                	count_one++;
                    f1.insert(j);
                }
            }
            if(count_one==0||count_one==m)check=false;
        }
        if(check==true&&f1.size()==m){
            cout<<"YES"<<"\n";
        }
        else 
            cout<<"NO"<<"\n";
    }
    return 0;
}
