#include <stdio.h>
int max(int a, int b)
{
    return (a > b) ? a : b;
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
        char arr[n + 2];
        scanf("%s", &arr);
        int ans = 0, count = 0;
        for (int i = 0; arr[i] != '\0'; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                count++;
            }
            else
            {
                ans = max(ans, count);
                count = 0;
            }
        }
        printf("%d\n", ans + 2);
    }
    return 0;
}