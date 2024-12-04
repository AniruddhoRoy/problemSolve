#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n < 0)
    {
        n = n * -1;
        if ((n % 10) > ((n / 10) % 10))
        {
            printf("%d", (n / 10) * -1);
        }
        else
        {
            int t = n % 10;
            int t1 = (n / 10) % 10;
            printf("%d", (n / 10 - (t1 - t)) * -1);
        }
    }
    else
    {
        printf("%d", n);
    }

    return 0;
}