#include <stdio.h>
int solve(char arr[])
{
    int count = 0;
    for (int i = 2; arr[i] != '\0'; i++)
    {
        if (arr[i - 2] == 'p' && arr[i - 1] == 'i' && arr[i] == 'e')
        {
            arr[i - 2] = 'y';
            count++;
            // printf("[%s]", arr);
        }
    }

    for (int i = 2; arr[i] != '\0'; i++)
    {
        if (arr[i - 2] == 'm' && arr[i - 1] == 'a' && arr[i] == 'p')
        {
            arr[i] = 'x';
            count++;
        }
    }
    return count;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        getchar();
        char arr[n + 5];
        arr[n + 4] = '\0';
        scanf("%s", &arr);
        arr[n] = 'x';
        arr[n + 1] = 'x';
        arr[n + 2] = 'x';
        arr[n + 3] = 'x';
        printf("%d\n", solve(arr));
    }
}