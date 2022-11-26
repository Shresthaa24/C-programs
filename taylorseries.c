#include <stdio.h>
#include <math.h>
#define PI 3.142857
int main()
{
    float x, degree, N, D, sum, term;
    int i;
    printf("Enter the degree: \n");
    scanf("%f", &degree);
    x = degree * (PI / 180);
    sum = 0;
    N = x;
    D = 1.0;
    i = 1;
    do
    {
        term = N / D;
        sum += term;
        i = i + 2;
        N = N * x * x;
        D = D * i * (i - 1);
    } while (fabs(term) >= 0.00001);
    printf("calculated value of sin(%f)=%f\n", degree, sum);
    printf("value is +%f\n", sin(x));
    return 0;
}