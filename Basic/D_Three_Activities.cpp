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
bool cmp(pr a, pr b)
{
    return a.first > b.first; // Sort in descending order
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n < 3)
        {
            cout << "0" << endl; // If less than 3 elements, we cannot form a valid triplet
            continue;
        }

        vector<pr> v1, v2, v3;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1.push_back({x, i});
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v2.push_back({x, i});
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v3.push_back({x, i});
        }

        sort(v1.begin(), v1.end(), cmp);
        sort(v2.begin(), v2.end(), cmp);
        sort(v3.begin(), v3.end(), cmp);

        vector<pr> a, b, c;
        for (int i = 0; i < min(3, n); i++) // Prevent out-of-bounds access
        {
            a.push_back(v1[i]);
            b.push_back(v2[i]);
            c.push_back(v3[i]);
        }

        int result[3] = {INT_MIN, INT_MIN, INT_MIN}; // Ensure proper initialization

        for (int i = 0; i < a.size(); i++)
        {
            for (int j = 0; j < b.size(); j++)
            {
                for (int k = 0; k < c.size(); k++)
                {
                    if (a[i].second == b[j].second || a[i].second == c[k].second || c[k].second == b[j].second)
                    {
                        continue;
                    }
                    result[i] = max(result[i], (a[i].first + b[j].first + c[k].first));
                }
            }
        }

        out(max(result[0], max(result[1], result[2])));
    }
    return 0;
}
