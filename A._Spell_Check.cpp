#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pr pair<int, int>
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        set<char> s = {'T', 'i', 'm', 'u', 'r'};
        set<char> s2;
        string s1;
        int x;
        cin >> x >> s1;
        if (x > 5)
        {
            cout << "NO" << endl;
            continue;
        }
        for (char x : s1)
        {
            s2.insert(x);
        }
        if (s == s2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}