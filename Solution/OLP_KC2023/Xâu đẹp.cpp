#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    vector<vector<int>> a(n + 1, vector<int>(26,0));

    for (int i = 1; i <= n; i++) {
        a[i] = a[i - 1];  
        a[i][s[i - 1]-'a']++; 
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        r++;  
        int m = 0;

        for (int c=0;c<26; c++) {
            int count = a[r][c] - a[l][c];  
            if(count%2==1){
                m++;
            }
        }
        cout<<m/2<<"\n";
    
    }

    return 0;
}
