#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pr pair<int, int>
#define PB(v)           \
    {                   \
        int x;          \
        std::cin >> x;  \
        v.push_back(x); \
    }
#define out(text)             \
    {                         \
        cout << text << endl; \
    }

#define loop(n) for (int i = 1; i <= (n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        PB(v);
    }
    int x = 0;
    loop(n)
    {
        int a1 = v[i - 1] + x;
        cout << a1 << " ";
        x = max(x, a1);
    }
    return 0;
}