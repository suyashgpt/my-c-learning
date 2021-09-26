#include <stdio.h>

int main()
{
    int physics, chemistry, math;
    int total;

    printf("ENTER PHYSICS MARKS\n");
    scanf("%d", &physics);

    printf("ENTER CHEMISTRY MARKS\n");
    scanf("%d", &chemistry);

    printf("ENTER MATH MARKS\n");
    scanf("%d", &math);

    total = (math + physics + chemistry)/3;


    if ((total < 40) || math < 33 || chemistry < 33|| physics < 33)

    {
        printf("YOUR TOTAL PERRCENTAGEIS %d and YOU ARE FAIL\n", total);
    }
    else
    {
        printf("YOUR TOTAL PERRCENTAGEIS %d and YOU ARE PASS\n", total);
    }
    return 0;
}