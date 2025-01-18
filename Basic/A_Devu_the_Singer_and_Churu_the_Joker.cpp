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

int song_time(vector<int> v)
{
    int total = 0;
    for (int i = 0; i < v.size(); i++)
    {
        total += v[i];
    }
    return total;
}
int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        PB(v);
    }
    int total_time = song_time(v) + (n - 1) * 10;
    // cout << total_time << endl;
    if (total_time > d)
    {
        cout << -1 << endl;
    }
    else
    {
        int rem = d - total_time;
        cout << (n - 1) * 2 + (rem / 5) << endl;
    }
    return 0;
}
