#include <stdio.h>
#include <math.h>
long long solve(long long x)
{
    int ans = 1;
    int count = 1;
    if (x % 2 == 1)
    {
        return 1;
    }
    else
    {
        for (long long i = 1; i <= 4000; i++)
        {
            if ((x % i == 0) && (x % (i + 1) == 0))
            {
                count++;
            }
            else
            {
                if (count > ans)
                {

                    ans = count;
                    count = 1;
                }
                else
                {
                    count = 1;
                }
            }
        }
    }

    return ans;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long x;
        scanf("%lld", &x);
        printf("%lld\n", solve(x));
    }
    return 0;
}