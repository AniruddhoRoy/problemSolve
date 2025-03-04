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
        string s;
        cin >> s;
        int result = 0;
        vector<int> pre, suf;
        set<char> s1;
        set<char> s2;
        // pre.push_back(0);
        for (int i = 0; i < s.size() - 1; i++)
        {
            s1.insert(s[i]);
            pre.push_back(s1.size());
        }
        for (int i = s.size() - 1; i > 0; i--)
        {
            s2.insert(s[i]);
            suf.push_back(s2.size());
        }
        for (int i = 0, j = suf.size() - 1; i < pre.size(); i++, j--)
        {
            result = max((pre[i] + suf[j]), result);
            // printf("[%d %d]", pre[i], suf[j]);
            // cout << pre.size() << " " << suf.size() << endl;
        }
        out(result);
    }
    return 0;
}