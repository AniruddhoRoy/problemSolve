#include <stdio.h>
int odd_number(int arr[], int k)
{
    int odd = 0, total_odd = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd++;
            total_odd += arr[i];
        }
    }
    if (k < odd - 1)
    {
        return 0;
    }
    else if ((k - odd) % 2 == 0)
    {
        return 1;
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        getchar();
        int arr[26] = {0};
        for (int i = 0; i < n; i++)
        {
            char a;
            scanf("%c", &a);
            arr[a - 97]++;
        }
        if (n - k == 0 || n - k == 1)
        {
            printf("YES\n");
        }
        else
        {

            printf("%s\n", odd_number(arr, k) ? "YES" : "NO");
        }
    }
    return 0;
}