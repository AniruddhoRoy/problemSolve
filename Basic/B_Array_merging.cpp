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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            PB(v1);
        }
        for (int i = 0; i < n; i++)
        {
            PB(v2);
        }
        int count = 1;
        map<int, int> m1;
        map<int, int> m2;
        int i = 0, j = 1;
        for (; j < n; i++, j++)
        {
            if (v1[i] == v1[j])
            {
                count++;
            }
            else
            {
                m1[v1[i]] = max(count, m1[v1[i]]);
                count = 1;
            }
        }
        j--;
        m1[v1[j]] = max(count, m1[v1[j]]);

        i = 0, j = 1, count = 1;
        for (; j < n; i++, j++)
        {
            if (v2[i] == v2[j])
            {
                count++;
            }
            else
            {
                m2[v2[i]] = max(count, m2[v2[i]]);
                count = 1;
            }
        }
        j--;
        m2[v2[j]] = max(count, m2[v2[j]]);
        // for (auto it = m1.begin(); it != m1.end(); it++)
        // {
        //     cout << it->first << "->" << it->second << " ";
        // }
        int result = 0;
        for (auto it = m1.begin(); it != m1.end(); it++)
        {
            result = max(m1[it->first] + m2[it->first], result);
        }
        for (auto it = m2.begin(); it != m2.end(); it++)
        {
            result = max(m1[it->first] + m2[it->first], result);
        }
        out(result);
    }
    return 0;
}