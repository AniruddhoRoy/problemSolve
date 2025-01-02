#include <stdio.h>
int solve(char arr[])
{
    int odd = 0, even = 0;
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == '0')
            odd++;
        if (arr[i] == '1')
            even++;
        i++;
    }
    int min = (odd > even) ? even : odd;

    return (min % 2 == 0) ? 0 : 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char arr[100 + 3];
        getchar();
        scanf("%s", &arr);
        printf("%s\n", solve(arr) ? "DA" : "NET");
    }
}