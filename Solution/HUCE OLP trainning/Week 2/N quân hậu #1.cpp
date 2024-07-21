#include <bits/stdc++.h>

using namespace std; 
int n, col[12], diag1[25], diag2[25], cnt; 

void Try(int i) 
{
    if(i > n)
    {
        cnt++; 
        return;
    }
    for(int j = 1; j <= n; j++) 
    {
        if(col[j] || diag1[i - j + n] || diag2[i + j])
            continue;
            
        col[j] = diag1[i - j + n] = diag2[i + j] = 1; 
        Try(i + 1);
        col[j] = diag1[i - j + n] = diag2[i + j] = 0; 
        
    }
}

int main() 
{
    cin >> n;
    Try(1); 
    cout << cnt;
}
