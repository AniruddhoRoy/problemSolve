#include <stdio.h>
long long find_min(long long arr[], long long n)
{
    long long min = 1000000000000;
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
long long find_max(long long arr[], long long n)
{
    long long max = 0;
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
long long solve(long long arr[], long long n)
{
    long long count = 0;
    long long max = find_max(arr, n);
    long long min = find_min(arr, n);
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] > min && arr[i] < max)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    long long n;
    scanf("%lld", &n);
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    // insertionSort(arr, n);
    printf("%lld", solve(arr, n));
    // printf("%lld", n - 2);
    return 0;
}