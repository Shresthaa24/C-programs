#include <stdio.h>
int main()
{
    int a[50], i, j, temp;
    a[50] = {58, 42, 10, 25, 60};
    scanf("%d", &a[50]);

    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    for (j = 1; j < 5; j++)
    {
        for (i = 0; i < 5; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    printf("The sorted array is\t");
    for (i = 0; i < 5; i++)
        printf("%d\t", a[i]);
    return 0;
}
