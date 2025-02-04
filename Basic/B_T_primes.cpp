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

bool solve(ll x)
{
    ll a = sqrt(x);
    return (a * a == x) ? true : false;
}
int main()
{
    bool arr[1000000] = {false};
    arr[1] = true;
    for (int i = 2; i <= 1000000; i++)
    {
        if (arr[i] == false)
        {
            for (int j = 2; i * j <= 1000000; j++)
            {
                arr[i * j] = true;
            }
        }
    }
    int n;
    cin >> n;
    loop(n)
    {
        ll x;
        cin >> x;
        if (solve(x) && !arr[int(sqrt(x))])
        {
            out("YES");
        }
        else
        {
            out("NO");
        }
    }
    return 0;
}