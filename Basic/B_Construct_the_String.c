#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);
        int d = 97;
        char arr[n + 1];
        char arr1[b + 1];
        arr[n] = '\0';
        arr1[b] = '\0';
        for (int i = 0; i < b; i++)
        {
            arr1[i] = d++;
        }
        for (int i = 0, j = 0; i < n; i++, j++)
        {
            if (j == b)
            {
                j = 0;
            }
            arr[i] = arr1[j];
        }
        printf("%s\n", arr);
    }

    return 0;
}