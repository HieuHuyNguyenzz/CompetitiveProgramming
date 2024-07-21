#include <bits/stdc++.h>

using namespace std;

char s;
vector <int> v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue <int > q;

    while (cin>>    s)
    {
        if (s=='+')
        {
            int n;cin>>n;
            if (q.size()<15000) q.push(n);
        }
        else
        {
            if (!q.empty())
            {
               int tmp=q.top();
               while (!q.empty() && q.top()==tmp) q.pop();
            }
        }
    }

    int prev=INT_MAX;
    while (!q.empty())
    {
        if (q.top()!=prev)
            v.push_back(q.top()),prev=q.top();
        q.pop();
    }

    cout<<v.size()<<'\n';
    for (auto i:v) cout<<i<<'\n';
}
