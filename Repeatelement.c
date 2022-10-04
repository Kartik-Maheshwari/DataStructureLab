#include <stdio.h>
int main()
{
    int a[60], n, i, j, k = 0, f = 0, l = 0, repeat[60], unique[60];
    printf("THE SIZE OF ARRAY:\n");
    scanf("%d", &n);
    printf("THE ELEMENTS OF ARRAY:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        f = 0;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                a[j] = 0;
                f = 1;
            }
        }
        if (a[i] != 0)
        {

            if (f == 0)
            {
                unique[l++] = a[i];
            }
            else
            {
                repeat[k++] = a[i];
            }
        }
    }

    printf("THE repeated elements OF ARRAY are\n");
    for (i = 0; i < k; i++)
    {
        printf("%d\n", repeat[i]);
    }

    printf("THE non repeated elements OF ARRAY are\n");
    for (i = 0; i < l; i++)
    {
        printf("%d\n", unique[i]);
    }
    return 0;
}