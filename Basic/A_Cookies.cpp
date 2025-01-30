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
    int odd = 0;
    int even = 0;
    // vector<int> v;
    int total = 0;
    loop(n)
    {
        int x;
        cin >> x;
        if (x % 2)
        {
            odd++;
        }
        else
        {
            even++;
        }
        total += x;
    }

    // out(total);
    if (total % 2)
    {
        out(odd);
    }
    else
    {
        out(even);
    }
    return 0;
}