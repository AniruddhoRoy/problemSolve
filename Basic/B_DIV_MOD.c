#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l, r, a;
        scanf("%d%d%d", &l, &r, &a);
        if ((l / a) == (r / a))
        {
            printf("%d\n", (r / a) + (r % a));
        }
        else
        {
            printf("%d\n", max(((r / a) + (r % a)), ((r / a) - 1 + (a - 1))));
        }
    }
    return 0;
}