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
        int x, y, z;
        cin >> x >> y >> z;
        if (x < y && y < z)
        {
            cout << "STAIR" << endl;
        }
        else if (x < y && y > z)
        {
            cout << "PEAK" << endl;
        }
        else
        {
            cout << "NONE" << endl;
        }
    }
    return 0;
}