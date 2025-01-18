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
bool solve(vector<int> v)
{
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i - 1] > v[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            PB(v);
        }
        bool f = true;
        int count = 0;
        vector<int> v1;
        v1 = v;
        while (!solve(v))
        {
            if (f)
            {
                sort(v.begin(), v.end() - 1);
                f = !f;
            }
            else
            {
                sort(v.begin() + 1, v.end());
                f = !f;
            }
            // sort(v.begin(), v.end());
            count++;
        }
        bool f1 = false;
        int count1 = 0;
        while (!solve(v1))
        {
            if (f1)
            {
                sort(v1.begin(), v1.end() - 1);
                f1 = !f1;
            }
            else
            {
                sort(v1.begin() + 1, v1.end());
                f1 = !f1;
            }
            // sort(v.begin(), v.end());
            count1++;
        }
        cout << min(count, count1) << endl;
    }
    return 0;
}