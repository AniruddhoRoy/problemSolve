#include <bits/stdc++.h>>
using namespace std;
#include <math.h>
int Mx(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int s = 1, mx = 0;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        for (int i = 1; i < n; i++)
        {
            if (abs(arr[i] - arr[i - 1]) > k)
            {
                mx = Mx(s, mx);
                s = 1;
            }
            else
            {
                s++;
            }
        }
        mx = Mx(s, mx);
        cout << n - mx << endl;
        }

    return 0;
}