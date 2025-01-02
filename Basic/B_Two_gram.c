#include <stdio.h>
void solve(char arr[])
{
    int res = 0;
    int count = 0;
    char arr1[3];
    arr1[2] = '\0';
    for (int i = 0; arr[i] != '\0'; i++)
    {

        for (int j = 0; arr[j] != '\0'; j++)
        {
            if (arr[i] == arr[j] && arr[i + 1] == arr[j + 1])
            {
                count++;
            }
        }
        if (count > res)
        {
            res = count;
            arr1[0] = arr[i];
            arr1[1] = arr[i + 1];
            // printf("%s %d\n", arr1, count);
        }

        count = 0;
    }
    printf("%c%c", arr1[0], arr1[1]);
}
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char arr[n + 2];
    gets(arr);
    // printf("%s", arr);
    solve(arr);
    return 0;
}