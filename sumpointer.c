#include <stdio.h>
int main()
{
    int n;
    int i, sum = 0;
    int *p;
    printf("Enter n :");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter array elements :");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    /* array is equal to base address
     * array = &array[0] */
    p = a;

    for (i = 0; i < n; i++)
    {
        //*ptr refers to the value at address
        sum = sum + *p;
        p++;
    }

    printf("\nThe sum is: %d", sum);
    return 0;
}