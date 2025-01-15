#include <stdio.h>
int main()
{
    long long t;
    scanf("%lld", &t);
    while (t--)
    {
        long long a, b, n;
        scanf("%lld%lld%lld", &a, &b, &n);
        long long arr[n];
        long long maxTime = b;
        for (long long i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        for (long long i = 0; i < n; i++)
        {
            if (arr[i] < a)
            {
                maxTime += arr[i];
            }
        }
        for (long long i = 0; i < n; i++)
        {
            if (arr[i] >= a)
            {
                maxTime += (a - 1);
            }
        }
        printf("%lld\n", maxTime);
    }

    return 0;
}