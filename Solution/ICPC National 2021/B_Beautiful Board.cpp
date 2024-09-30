#include <bits/stdc++.h>

using namespace std;
int cost(int x, int y) {
    int ans = abs(x - y);
    ans = min(ans, x + 1 + (25 - y));
    ans = min(ans, (25 - x) + 1 + y);
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    int ans = 0;
    for (int i = 0; i < (n + 1) / 2; i++) {
        for (int j = 0; j < (m + 1) / 2; j++) {
            vector<int> choose;
            choose.push_back(s[i][j] - 'A');
            if (n - 1 - i != i) choose.push_back(s[n - 1 - i][j] - 'A');
            if (m - 1 - j != j) choose.push_back(s[i][m - 1 - j] - 'A');
            if (n - 1 - i != i && m - 1 - j != j) choose.push_back(s[n - 1 - i][m - 1 - j] - 'A');
            int best = 1000000;
            for (int c = 0; c < 26; c++) {
                int sum = 0;
                for (int x : choose) {
                    sum += cost(x, c);
                }
                best = min(best, sum);
            }
            ans += best;
        }
    }
    cout << ans;
    return 0;
}
