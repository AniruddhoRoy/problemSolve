#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        vector<int> odd;
        vector<int> even;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                even.push_back(x);
            }
            else
            {
                odd.push_back(x);
            }
        }
        int o = odd.size();
        int e = n - o;
        long long int ans = e * o;
        for (int i = 0; i < o; i++)
        {
            for (int j = i + 1; j < o; j++)
            {
                if ((__gcd(odd[i], 2 * odd[j])) > 1)
                {
                    ans++;
                }
            }
        }
        ans += (e * (e - 1) / 2);
        ;
        cout << ans << endl;
    }
}