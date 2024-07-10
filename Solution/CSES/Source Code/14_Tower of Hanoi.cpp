#include <bits/stdc++.h>
using namespace std;
 
void hanoi(int a, int b, int c, int n){
    if(n==1){
        cout<<a<<" "<<b<<"\n";
    }
    else{
        hanoi(a,c,b,n-1);
        hanoi(a,b,c,1);
        hanoi(c,b,a,n-1);
    }
}
 
int main() {
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<"\n";
    hanoi(1, 3, 2, n);
}