#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long x;
        long long time = 0;
        scanf("%lld", &x);
        int Y1 = x - (x / 6) * 6;
        if (x <= 6)
        {
            x = 0;
            time = 15;
        }
        else if (Y1 <= 4)
        {
            time += (x / 6) * 15 - 15;
            x = x - (x / 6) * 6 + 6;
        }
        else
        {
            time += (x / 6) * 15;
            x = x - (x / 6) * 6;
        }
        // printf("[%lld] [%lld]", x, time);
        while (x > 0)
        {
            if (x > 8)
            {
                x -= 10;
                time += 25;
            }
            else if (x > 6)
            {
                x -= 8;
                time += 20;
            }
            else
            {
                x -= 6;
                time += 15;
            }
        }
        // printf("[%d][%d]\n", Y1, Y2);
        printf("%lld\n", time);
    }
    return 0;
}