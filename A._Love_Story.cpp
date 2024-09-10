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
        string s, s1 = {"codeforces"};
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != s1[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}