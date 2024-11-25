#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m, v;
    cin >> n >> m >> v;
    vector<int> v1, v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 1; i < n; i++)
    {
        v2.push_back(v1[i] + v1[i - 1]);
    }
    for (int x : v1)
    {
        cout << x << " ";
    }
}