#include <stdio.h>
int main()
{
    int arr1[20][20], arr2[20][20];
    int r, c, i, n, j;
    printf("enter elements: \n");
    scanf("%d", &n);
    printf("enter rows and columns:\n");
    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)

        for (j = 0; j < c; j++)

            scanf("%d", &arr1[i][j]);

    for (i = 0; i < r; i++)

        for (j = 0; j < c; j++)

            arr2[i][j] = arr1[i][j];
    printf("transpose is:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d\t", arr2[i][j]);
        printf("\n");
    }
    return 0;
}
