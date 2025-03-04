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
    int n, d;
    cin >> n >> d;
    vector<int> v;
    loop(n)
    {
        PB(v);
    }
    sort(v.begin(), v.end());

    int i = 0, j = v.size() - 1;
    int result = 0;
    while (i <= j)
    {
        int div = ((float)d / v[j]);
        if (v[j] > d)
        {
            result++;
        }
        else if (v[j] * div <= d)
        {
            div++;
            i += (div - 1);
            if (i <= j)
            {
                result++;
            }
        }
        j--;
    }
    out(result);

    return 0;
}