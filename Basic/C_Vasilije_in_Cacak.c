#include <stdio.h>
long long min(long long k)
{
    return (k * (k + 1)) / 2;
}
long long max(long long n, long long k)
{
    return ((n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2);
}
long long solve(long long n, long long k, long long x)
{
    // printf("min = %lld x= %lld max = %lld\n", min(k), x, max(n, k));
    if (x >= min(k) && x <= max(n, k))
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    long long t;
    scanf("%lld", &t);
    while (t--)
    {
        long long n, k, x;
        scanf("%lld %lld %lld", &n, &k, &x);
        printf("%s\n", solve(n, k, x) ? "YES" : "NO");
    }
    return 0;
}