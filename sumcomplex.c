#include <stdio.h>

/* Declaring Structure */
struct complex
{
    float real;
    float imaginary;
};

int main()
{
    /* Declaring structure variable using struct complex */
    struct complex n1, n2, sum;
    printf("Enter real and imaginary part of first complex number:\n");
    scanf("%f%f", &n1.real, &n1.imaginary);
    printf("Enter real and imaginary part of second complex number:\n");
    scanf("%f%f", &n2.real, &n2.imaginary);

    sum.real = n1.real + n2.real;
    sum.imaginary = n1.imaginary + n2.imaginary;

    printf("SUM = %0.2f + i %0.2f", sum.real, sum.imaginary);

    return 0;
}
