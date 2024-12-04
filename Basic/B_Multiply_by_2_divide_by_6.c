#include <stdio.h>
int solve(int n)
{
    if (n == 1)
    {
        return 0;
    }
    int moves = 0;
    while (!(n % 6 == 0 && n / 6 == 1))
    {
        // printf("%d ", n);
        if (n % 6 == 0)
        {
            n /= 6;
        }
        else
        {
            n *= 2;
        }
        if (moves > 60 || n < 0)
        {
            return -1;
        }
        moves++;
    }

    return moves + 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        // printf("%d\n", n);
        printf("%d\n", solve(n));
    }
    return 0;
}