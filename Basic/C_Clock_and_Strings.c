#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int max = a > b ? a : b;
        int min = a > b ? b : a;
        int n = 0;
        for (int i = min; i < max; i++)
        {
            if (i == c || i == d)
            {
                n++;
            }
        }
        printf("%s\n", (n % 2 == 0) ? "NO" : "YES");
    }
    return 0;
}