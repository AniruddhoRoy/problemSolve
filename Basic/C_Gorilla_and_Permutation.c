#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int arr[a];
        int j = 0;
        for (int i = a; i > b; i--)
        {
            arr[j] = i;
            j++;
        }
        for (int i = 1; j < a; j++, i++)
        {
            arr[j] = i;
        }
        for (int i = 0; i < a; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}