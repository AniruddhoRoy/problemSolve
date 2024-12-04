#include <stdio.h>
int solve(int n)
{
    int rem = n % 2020;
    if (rem <= n / 2020)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if (solve(x))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}