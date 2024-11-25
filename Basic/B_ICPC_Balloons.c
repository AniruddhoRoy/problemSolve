#include <stdio.h>
int arr_sum(int arr[])
{
    int total = 0;
    for (int i = 0; i < 26; i++)
    {
        total += arr[i];
    }
    return total;
}
int unique_solve(int arr[])
{
    int unique = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            unique++;
        }
    }
    return unique;
}
int main()
{

    int t;
    scanf("%d", &t);

    while (t--)
    {
        int arr[26] = {0};
        int n;
        scanf("%d", &n);
        getchar();
        for (int i = 0; i < n; i++)
        {
            char x;
            scanf("%c", &x);
            arr[x - 65]++;
        }
        printf("%d\n", arr_sum(arr) + unique_solve(arr));
    }
    return 0;
}