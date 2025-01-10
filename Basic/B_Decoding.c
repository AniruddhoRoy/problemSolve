#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    char arr[n];
    if (n % 2 == 0)
    {
        int x = n - 1;
        for (int i = x / 2, j = x / 2; i >= 0; i--, j++)
        {
            scanf("%c", &arr[j]);
            scanf("%c", &arr[i]);
        }
        scanf("%c", &arr[x]);
    }
    else
    {
        int x = n;
        for (int i = x / 2, j = x / 2; i >= 0; i--, j++)
        {
            scanf("%c", &arr[i]);
            scanf("%c", &arr[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}