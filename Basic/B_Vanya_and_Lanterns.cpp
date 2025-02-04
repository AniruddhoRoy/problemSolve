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
    int n, l;
    cin >> l >> n;
    vector<int> lights;
    vector<double> distance;
    loop(l)
    {
        PB(lights);
    }
    sort(lights.begin(), lights.end());
    for (int i = 1; i < lights.size(); i++)
    {
        distance.push_back((lights[i] - lights[i - 1]) / 2.00);
    }
    bool first = false, last = false;
    for (int i = 0; i < lights.size(); i++)
    {
        if (lights[i] == 0)
        {
            first = true;
        }
        if (lights[i] == n)
        {
            last = false;
        }
    }
    if (!first)
    {
        distance.push_back(lights[0]);
    }
    if (!last)
    {
        distance.push_back(n - lights.back());
    }
    double max = 0;
    for (int i = 0; i < distance.size(); i++)
    {
        if (distance[i] > max)
        {
            max = distance[i];
        }
    }
    printf("%.10f", max);
    return 0;
}