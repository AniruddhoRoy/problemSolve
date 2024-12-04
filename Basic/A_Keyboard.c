#include <stdio.h>
char arr1[] = "qwertyuiop";
char arr2[] = "asdfghjkl;";
char arr3[] = "zxcvbnm,./";
int getPosition(char x)
{
    int i = 0, pos = -1;
    while (arr1[i] != '\0')
    {
        if (arr1[i] == x)
        {
            pos = i;
        }
        i++;
    }
    i = 0;
    while (arr2[i] != '\0')
    {
        if (arr2[i] == x)
        {
            pos = i;
        }
        i++;
    }
    i = 0;
    while (arr3[i] != '\0')
    {
        if (arr3[i] == x)
        {
            pos = i;
        }
        i++;
    }
    return pos;
}
int get_arr_num(char x)
{
    int i = 0, pos = -1;
    while (arr1[i] != '\0')
    {
        if (arr1[i] == x)
        {
            pos = 1;
        }
        i++;
    }
    i = 0;
    while (arr2[i] != '\0')
    {
        if (arr2[i] == x)
        {
            pos = 2;
        }
        i++;
    }
    i = 0;
    while (arr3[i] != '\0')
    {
        if (arr3[i] == x)
        {
            pos = 3;
        }
        i++;
    }
    return pos;
}
void forR(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        int arrNo = get_arr_num(arr[i]);
        int pos = getPosition(arr[i]);
        if (arrNo == 1)
        {
            printf("%c", arr1[pos - 1]);
        }
        if (arrNo == 2)
        {
            printf("%c", arr2[pos - 1]);
        }
        if (arrNo == 3)
        {
            printf("%c", arr3[pos - 1]);
        }
        i++;
    }
}
void forL(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        int arrNo = get_arr_num(arr[i]);
        int pos = getPosition(arr[i]);
        if (arrNo == 1)
        {
            printf("%c", arr1[pos + 1]);
        }
        if (arrNo == 2)
        {
            printf("%c", arr2[pos + 1]);
        }
        if (arrNo == 3)
        {
            printf("%c", arr3[pos + 1]);
        }
        i++;
    }
}
int main()
{
    char x;
    scanf("%c", &x);
    getchar();
    char arr[100 + 2];
    gets(arr);
    if (x == 'R')
    {
        forR(arr);
    }
    else
    {
        forL(arr);
    }
    return 0;
}