#include <stdio.h>
int main()
{
    float uc, charge = 0, total;
    char name[20];
    printf("Enter your name: ");
    gets(name);
    printf("enter the unit consumed: ");
    scanf("%f", &uc);
    if (uc >= 1 && 200 >= uc)
    {
        charge = 0.8 * uc;
    }
    else if (uc >= 201 && uc <= 300)
    {
        charge = 0.8 * (200) + 0.9 * (uc - 200);
    }
    else if (uc > 300)
    {
        charge = 0.8 * (200) + 0.9 * (100) + 1 * (uc - 300);
    }
    total = charge + 100;
    if (total > 400)
    {
        total += total * 0.15;
    }
    printf("name=%s and units consumed = %fand totalcharge per unit= %f ", name, uc, total);
    return 0;
}
