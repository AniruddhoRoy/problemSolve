#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;
    vector<long long> arr;
    for (long long i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end(), greater<long long>());
    long long arr1[n + 1];
    arr1[0] = 0;
    arr1[1] = arr[0];
    for (int i = 2; i <= n; i++)
    {
        arr1[i] = arr[i - 1] + arr1[i - 1];
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << arr1[i] << endl;
    // }
    while (q--)
    {
        long long x, y;
        cin >> x >> y;
        cout << arr1[x] - arr1[x - y] << endl;
        // int q = x - 1;
        // int w = y;
        // if ((q - w) >= 0)
        // {
        //     cout << arr1[q] - arr1[q - w] << endl;
        // }
        // else
        // {
        //     cout << arr1[q] << endl;
        // }
    }
    return 0;
}