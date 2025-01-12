#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    long long joy = -9000000000000;
    while (n--)
    {
        int f, t;
        scanf("%d %d", &f, &t);
        if (t > k)
        {
            f = f - (t - k);
        }
        if (f > joy)
        {
            joy = f;
        }
    }
    printf("%lld", joy);

    return 0;
}