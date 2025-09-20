#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    for (int i = 2; i <= n + 1; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("%d ", j);
        }
        for (int l = i - 2; l >= 1; l--)
        {
            printf("%d ", l);
        }
        printf("\n");
    }
    return 0;
}