#include <stdio.h>
int index(int x, int arr[])
{
    for (int i = 0; i < 26; i++)
    {
        if (x == arr[i])
        {
            arr[i]++;
            return i;
        }
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[26] = {0}; /////
        for (int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            printf("%c", index(x, arr) + 97);
        }
        printf("\n");
    }

    return 0;
}