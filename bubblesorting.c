#include <stdio.h>
int main()
{
    int a[20], n, i, j, temp;
    // Accept array size
    printf("Enter the number of elements :");
    scanf("%d", &n);
    // Accept n elements into the array
    printf("Enter %d integers :", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // Sort the array elements
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    // print the sorted array
    printf("The sorted array is ....\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
        printf("\n");
    }

    return 0;
}
