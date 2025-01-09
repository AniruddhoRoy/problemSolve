#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, b, c, d;
        scanf("%d%d%d%d%d", &n, &a, &b, &c, &d);
        int max = c + d;
        int min = c - d;
        int x = (a - b) * n;
        int y = (a + b) * n;
        if (y < min || max < x)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}