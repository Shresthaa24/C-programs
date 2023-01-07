#include <stdio.h>
int main()
{
    int i, j, first, last, middle, n, search, array[100], temp;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("sorting:\n");
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
        }
    }
    printf("after sorting:\n");
    for (j = 0; j < n; j++)
    {
        printf("%d", &array[j]);
    }

    printf("Enter value to find\n");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while (first <= last)
    {
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search)
        {
            printf("%d found at location %d.\n", search, middle + 1);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last) / 2;
    }
    if (first > last)
        printf("Not found! %d isn't present in the list.\n", search);

    return 0;
}
