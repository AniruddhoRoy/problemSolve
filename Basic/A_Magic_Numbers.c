#include <stdio.h>
int check(char arr[])
{
    for (int i = 0, j = 2; arr[i] != '\0' || arr[j] != '\0'; i++, j++)
    {
        if (arr[i] != '1' && arr[i] != '4')
        {
            return 0;
        }
        if (arr[0] == '4')
        {
            return 0;
        }
        if (arr[j - 2] == '4' && arr[j - 1] == '4' && arr[j] == '4')
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char arr[12];
    gets(arr);
    printf("%s", check(arr) ? "YES" : "NO");
    return 0;
}