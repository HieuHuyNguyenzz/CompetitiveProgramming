#include <bits/stdc++.h>

using namespace std;
set<int>x;
map<int,int>y;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    set<int>x;
    map<int,int>y;
    while(n--){
        int a;
        cin>>a;
        x.insert(a);
        y[a]++;
        if(y[a]>1){
            x.erase(a);
        }
        if(x.empty()){
            cout<<-1<<"\n";
        }
        else
            cout<<*x.begin()<<"\n";
    }
    return 0;
}
