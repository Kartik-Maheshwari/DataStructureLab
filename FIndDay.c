// By Zeller's Rule
// F=K + [(13*M -1)/5] + D + [D/4] + [C/4] + 5C
#include <stdio.h>
int getMonth(int MM)
{
    return MM >= 3 ? MM - 2 : MM + 10;
}

int main()
{
    int dd, mm, yy, K, D, C, F, M;
    printf("Enter the Date:");
    scanf("%d %d %d", &dd, &mm, &yy);
    K = dd;
    M = getMonth(mm);
    D = yy % 100;
    C = yy / 100;
    F = K + ((13 * M - 1) / 5) + D + (D / 4) + (C / 4) + 5 * C;
    switch (F%7)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 0:
        printf("Sunday");
        break;
    default:
        break;
    }
    return 0;
}