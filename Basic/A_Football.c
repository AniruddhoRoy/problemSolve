#include <stdio.h>
int solve(char arr[])
{
    int i = 0;
    int zero = 0;
    int one = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == '0' && zero < 7)
        {
            zero++;
            one = 0;
        }
        if (arr[i] == '1' && one < 7)
        {
            zero = 0;
            one++;
        }
        if (zero >= 7 || one >= 7)
        {
            // printf("%d %d\n", zero, one);
            return 1;
        }

        i++;
    }
    return 0;
}
int main()
{
    char arr[100];
    gets(arr);
    if (solve(arr))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}