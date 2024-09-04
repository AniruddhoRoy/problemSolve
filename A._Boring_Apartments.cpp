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
        string s;
        int sum = 0;
        cin >> s;
        int x = s.front() - '0';
        for (int i = 1; i < x; i++)
        {
            sum += 10;
        }
        if (s.size() == 4)
        {
            sum += 10;
        }
        if (s.size() == 3)
        {
            sum += 6;
        }
        if (s.size() == 2)
        {
            sum += 3;
        }
        if (s.size() == 1)
        {
            sum += 1;
        }
        cout << sum << endl;
    }
    return 0;
}