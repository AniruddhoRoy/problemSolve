#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d\n", n / 2);
        for (int i = 0; i < n / 2; i++)
        {
            printf("%d ", 2);
        }
    }
    else
    {
        printf("%d\n", n / 2);
        for (int i = 0; i < n / 2 - 1; i++)
        {
            printf("%d ", 2);
        }
        printf("3");
    }
    return 0;
}