#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long x;
        scanf("%lld", &x);
        int back;
        long long ans = x;
        while (x >= 10)
        {
            ans += x / 10;
            back = x % 10;
            x = (x / 10) + back;
        }

        printf("%lld\n", ans);
    }

    return 0;
}