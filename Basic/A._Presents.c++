#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> f;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        f.push_back(x);
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (f[j] == i)
            {
                cout << j + 1 << " ";
            }
        }
    }
}