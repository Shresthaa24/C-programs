#include <stdio.h>
int main()
{
    int num1, num2;
    float result;
    char op;
    printf("Enter two integers :");
    scanf("%d%d", &num1, &num2);
    printf("Enter the operator \n");
    printf("+ for addition\n");
    printf("- for subtraction\n");
    printf("* for multiplication\n");
    printf("/ for division\n");
    printf("%% for modulus\n"); // % is an escape character of printf's, and \ of compiler.
    scanf(" %c", &op);          // Space and %c to accept a character
    if (op == '+')
    {
        result = num1 + num2;
    }

    else if (op == '-')
    {
        result = num1 - num2;
    }

    else if (op == '*')
    {
        result = num1 * num2;
    }

    else if (op == '/')
    {
        if (num2 == 0)
        {
            printf("Retry and enter a non-zero number... \n");
            return (-1);
        }
        result = num1 / num2;
    }

    else if (op == '%')
    {
        if (num2 == 0)
        {
            printf("Retry and enter a non-zero number... \n");
            return (-1);
        }

        result = num1 % num2;
    }
    else
    {
        printf("Invalid operator...\n");
        return 1;
    }
    printf("Result = %f\n", result);
    return 0;
}

