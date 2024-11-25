#include <bits/stdc++.h>
using namespace std;
int min_number(int arr[], int n)
{
    int min_num = 300;
    for (int i = 0; i < n; i++)
    {
        if (min_num > arr[i])
        {
            min_num = arr[i];
        }
    }
    return min_num;
}
int max_number(int arr[], int n)
{
    int max_num = 0;
    for (int i = 0; i < n; i++)
    {
        if (max_num < arr[i])
        {
            max_num = arr[i];
        }
    }
    return max_num;
}
int find_index(int arr[], int n, int number)
{
    for (int i = 0; i < n; i++)
    {
        if (number == arr[i])
        {
            return i;
        }
    }
    return NULL;
}
void value_input(int arr[], int index, int value)
{
    arr[index] = value;
}
int total_sum(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}
void print_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < k; i++)
        {
            int min_num = min_number(a, n);
            int max_num = max_number(b, n);
            // cout << min_num << " " << max_num << " index a" << find_index(a, n, min_num) << " " << find_index(b, n, min_num) << endl;
            if (min_num < max_num)
            {
                a[find_index(a, n, min_num)] = max_num;
                b[find_index(b, n, max_num)] = min_num;
            }
        }
        // print_arr(a, n);
        cout << total_sum(a, n) << endl;
        // cout << "N=" << k << endl;
        ;
    }

    return 0;
}