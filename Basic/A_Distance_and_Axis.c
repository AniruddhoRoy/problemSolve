#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        if (n < k)
        {
            printf("%d\n", k - n);
        }
        else
        {
            if ((n - k) % 2 == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("1\n");
            }
        }
    }
    return 0;
}