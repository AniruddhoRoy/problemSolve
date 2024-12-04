#include <stdio.h>
int solve(char str[], int n)
{
    int one = 0;
    int zero = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '1')
        {
            one++;
        }
        else
        {
            zero++;
        }
        i++;
    }
    // printf("%d %d \n", one, zero);
    return (one >= zero) ? zero : one;
}
int main()
{
    int n;
    scanf("%d", &n);
    char str[n + 2];
    getchar();
    gets(str);
    // printf("%s", str);
    printf("%d", n - 2 * solve(str, n));
    return 0;
}