//program to find the largest digit in the array
#include <stdio.h>
int largest(int list[], int n);
int main()
{
    int n, i;
    int list[n];
    printf("enter size:\n");
    scanf("%d", &n);
    printf("the elements in array of %d :\n", n);
    scanf("%d", &list[n]);
    int l = largest(list, n);
    printf("the largest number in the %d array is %d", n, l);
    return 0;
}
int largest(int list[], int n)
{
    int i;
    int l = list[0];
    // loop
    for (i = 1; i < n; i++)

        if (list[i] > l)
            l = list[i];
    return 1;
}
