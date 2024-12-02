#include <stdio.h>
int main()
{
    long long n, k;
    scanf("%lld %lld", &n, &k);
    // printf("%lld %lld", n, k);
    if (n % 2 == 0 && k <= n / 2)
    {
        printf("%lld", (2 * (k - 1) + 1));
    }
    if (n % 2 != 0 && k <= n / 2 + 1)
    {
        printf("%lld", (2 * (k - 1) + 1));
    }
    if (n % 2 == 0 && k > n / 2)
    {
        printf("%lld", (2 * (k - n / 2)));
    }
    if (n % 2 != 0 && k > n / 2 + 1)
    {
        printf("%lld", (2 * (k - n / 2 - 1)));
        // printf("Hello");
    }
}