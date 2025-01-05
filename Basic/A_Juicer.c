#include <stdio.h>
long long solve(int arr[], int n, int d)
{
    long long total = 0, west = 0;
    for (int i = 0; i < n; i++)
    {
        west += arr[i];
        if (west > d)
        {
            total++;
            west = 0;
        }
    }
    return total;
}
int main()
{
    int n, b, d;
    scanf("%d %d %d", &n, &b, &d);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x <= b)
        {
            arr[i] = x;
        }
    }
    printf("%lld", solve(arr, n, d));

    return 0;
}