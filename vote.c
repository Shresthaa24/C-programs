#include <stdio.h>

int main()
{
    int votes[100], i, j, n, candidate_votes[] = {0, 0, 0, 0, 0}, sb = 0;
    char parties[] = "ABCDE";
    for (i = 0; i < 5; i++)
        printf("%d. %c\n", i + 1, parties[i]);
    printf("Enter the number of voters: ");
    scanf("%d", &n);
    printf("Parties To Votes\n");
    for (i = 0; i < n; i++)
    {
        printf("Voter %d: ", i + 1);
        scanf("%d", &votes[i]);
        if (0 < votes[i] <= 5)
            candidate_votes[votes[i] - 1]++;
        sb++;
    }
    printf("Votes each party got: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%c: %d\n", parties[i], candidate_votes[i]);
    }
    if (sb)
        printf("The ballot is spoilt!\nThe number of spoilt ballot is %d.\n", sb);
    return 0;
}