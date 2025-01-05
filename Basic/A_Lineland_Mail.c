#include <stdio.h>
#include <math.h>
long long min_distance(int arr[], int x, int n)
{
    if (x > 0 && x < n - 1)
    {
        return (abs(arr[x] - arr[x - 1]) > abs(arr[x] - arr[x + 1])) ? abs(arr[x] - arr[x + 1]) : abs(arr[x] - arr[x - 1]);
    }
    if (x == 0)
    {
        return abs(arr[x] - arr[x + 1]);
    }
    if (x == n - 1)
    {
        return abs(arr[x] - arr[x - 1]);
    }
}
long long max_distance(int firstindex, int x, int lastindex)
{
    return (abs(firstindex - x) > abs(lastindex - x)) ? abs(firstindex - x) : abs(lastindex - x);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    long long priviousdis = 9999999999;
    for (int i = 0; i < n; i++)
    {

        printf("%lld %lld \n", min_distance(arr, i, n), max_distance(arr[0], arr[i], arr[n - 1]));
        // priviousdis = min_distance(priviousdis, arr[i], arr[i + 1]);
    }
}