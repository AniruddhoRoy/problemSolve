#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.front() == s.back())
        {
            cout << s << endl;
        }
        else if (s.front() == 'a')
        {
            s[0] = 'b';
            cout << s << endl;
        }
        else if (s.front() == 'b')
        {
            s[0] = 'a';
            cout << s << endl;
        }
    }

    return 0;
}