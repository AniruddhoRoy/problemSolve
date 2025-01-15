#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long x, j, n = 0;
        scanf("%lld %lld", &x, &j);
        int y = j % 4;
        if (y == 1)
            n = -j;
        else if (y == 2)
            n = 1;
        else if (y == 3)
            n = j + 1;
        if (x & 1)
        {
            printf("%lld\n", x - n);
        }
        else
        {
            printf("%lld\n", x + n);
        }
    }

    return 0;
}