#include <stdio.h>
void orrr(char arr[])
{
    int i, j, k;
    i = 0;
    j = 1;
    k = 2;
    while (arr[k] != '\0')
    {
        if (arr[i] == 'W' && arr[j] == 'U' && arr[k] == 'B')
        {
            arr[i] = '1';
            arr[j] = '1';
            arr[k] = '1';
        }
        i++;
        j++;
        k++;
    }
}
int main()
{
    char arr[200 + 2];
    gets(arr);
    orrr(arr);
    int i = 0;
    int f = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == '1')
        {

            i += 3;
            if (f == 0)
            {
                printf(" ");
                f = 1;
            }
        }
        else
        {
            printf("%c", arr[i]);
            f = 0;
            i++;
        }
    }

    return 0;
}