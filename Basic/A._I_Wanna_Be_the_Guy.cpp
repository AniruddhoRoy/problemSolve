#include <bits/stdc++.h>
using namespace std;
bool solve(int arr[], int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        if (!arr[i])
        {
            // cout << i << endl;
            return false;
        }
    }
    return true;
}
int main()
{
    int p;
    cin >> p;
    int arr[p + 1];
    for (int i = 1; i < p + 1; i++)
    {
        arr[i] = 0;
    }
    int n1;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        arr[x] = 1;
    }
    int n2;
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        arr[x] = 1;
    }
    // for (int i = 0; i < p + 1; i++)
    // {
    //     cout << arr[i] << " " << endl;
    // }
    if (solve(arr, p))
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}