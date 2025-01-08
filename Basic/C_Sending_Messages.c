#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, f, a, b;
        scanf("%lld %lld %lld %lld", &n, &f, &a, &b);
        long long arr[n];
        long long temp = 0;
        for (int i = 0; i < n; i++)
        {
            long long x;

            scanf("%lld", &x);
            arr[i] = x - temp;
            temp = x;
        }
        int i = 0;
        long long dec;
        while (f > 0 && i < n)
        {
            if ((a * arr[i]) > b)
            {
                f -= b;
                i++;
                // printf("[%d %lld %lld]", f, b, (a * arr[i]));
            }
            else
            {
                f = f - (a * arr[i]);
                i++;
                // printf("[%d %lld %lld]", f, b, (a * arr[i]));
            }
        }
        printf("%s\n", (f > 0) ? "YES" : "NO");
    }
    return 0;
}