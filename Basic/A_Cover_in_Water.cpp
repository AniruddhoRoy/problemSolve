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
        int arr[100] = {0};
        int j = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '#')
            {
                j++;
            }
            else
            {
                arr[j]++;
            }
        }
        int ans = 0;
        for (int i = 0; i < 100; i++)
        {
            if (arr[i] > 2)
            {
                ans = 2;
                break;
            }
            else
            {
                ans += arr[i];
            }
        }
        out(ans);
    }
    return 0;
}