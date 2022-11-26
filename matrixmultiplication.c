#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], n, m, p, q, i, j, k;

    printf("Enter the order of the matrix a: ");
    scanf("%d%d", &n, &m);
    printf("Enter the elements of Matrix-A: \n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the order of the matrix b: ");
    scanf("%d%d", &p, &q);
    printf("Enter the elements of Matrix-B: \n");

    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The product of the two matrices is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
