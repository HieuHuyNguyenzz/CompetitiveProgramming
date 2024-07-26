// 21/22 test
#include <bits/stdc++.h>

using namespace std;

int n;
int curr_min=INT_MAX;
vector<int>path;
int weights[50][50];

void backtrack(int k, int s, int curr_state, int weight, vector<int>p, vector<bool>check){
    if(k==1){
        weight+=weights[curr_state][s];
        if(weight<curr_min){
            curr_min = weight;
            path = p;
        }
    }
    else {
        for(int i=0;i<n;i++){
            if(i!=curr_state&&check[i]==0&&weight+weights[curr_state][i]<curr_min){
                p.push_back(i);
                check[i]=1;
                backtrack(k-1, s, i, weight+weights[curr_state][i], p, check);
                check[i]=0;
                p.pop_back();
            }
        }
    }
}
int main(){
    ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>weights[i][j];
        }
    }
    vector<int>p={0};
    vector<bool>check(n,0);
    check[0]=1;
    backtrack(k, 0, 0, 0, p, check);
    cout<<curr_min<<"\n";
    for(int i:path){
        cout<<i+1<<" ";
    }
}
