#include <stdio.h>
int main()
{

    int A, B, C;

    printf("Enter the numbers A, B, C\n");
    scanf("%d %d %d", &A, &B, &C);

    if (A >= B && A >= C)
    {
        printf("%d is the largest number", A);
    }
    if (B >= A && B >= C)
    {
        printf("%d is the largest number", C);
    }
    if (C >= B && C >= A)
    {
        printf("%d is the largest number", C);
    }
    return 0;
}
