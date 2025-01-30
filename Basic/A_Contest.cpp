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

double point(double p, double t)
{
    return max(3 * p / 10, p - (p / 250) * t);
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (point(a, c) > point(b, d))
    {
        out("Misha")
    }
    else if (point(a, c) < point(b, d))
    {
        out("Vasya")
    }
    else
    {
        out("Tie");
    }
    return 0;
}