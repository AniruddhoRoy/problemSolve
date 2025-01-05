#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int val = arr[0];
        for (int i = 1; i < n; i++)
        {
            val = val & arr[i];
        }
        printf("%d\n", val);
    }

    return 0;
}