#include <bits/stdc++.h>
using namespace std;

int main() {
    long double u, v;
    cin >> u >> v;
    
    u = u / 2.0;
    v = v / 2.0;
    
    long double ans = (u * u)/4 + (v * v)/4;
    
    cout << setprecision(2) << fixed << ans*4;
}
