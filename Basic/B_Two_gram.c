#include <stdio.h>
int solve(char arr[], int n)
{
    int f = 0;
    int s = 0;
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[i] == arr[j + 2] && arr[i + 1] == arr[j + 3])
            {
                count++;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char str[n + 2];
    gets(str);

    return 0;
}