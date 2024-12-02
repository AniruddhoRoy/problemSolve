#include <stdio.h>
int main()
{
    char arr[100 + 2];
    gets(arr);
    for (int i = 0; i < 102; i++)
    {
        if (arr[i] == 'H' || arr[i] == 'Q' || arr[i] == '9')
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}