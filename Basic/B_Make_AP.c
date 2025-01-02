#include <stdio.h>
int max(int a, int b, int c)
{
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}
int solve(int a, int b, int c)
{
    if (a == 0)
    {
        return 1;
    }
    if (b == 0)
    {
        return 1;
    }
    if (c == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int f = 0;
        if ((2 * b - c) % a == 0)
        {
            if ((2 * b - c) / a > 0)
            {
                f = 1;
            }
        }
        if ((c + a) % (2 * b) == 0)
        {
            f = 1;
        }
        if ((2 * b - a) % c == 0)
        {
            if ((2 * b - a) / c > 0)
            {
                f = 1;
            }
        }
        printf("%s\n", (f) ? "YES" : "NO");
    }
    return 0;
}