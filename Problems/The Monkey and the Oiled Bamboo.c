#include <stdio.h>

int main()
{
    int arr[10000];
    int loop1;
    scanf("%d", &loop1);
    int loop2;
    int bignumber = 0;
    for (int i = 1; i <= loop1; i++)
    {

        scanf("%d", &loop2);

        for (int j = 1; j <= loop2; j++)
        {
            scanf("%d", &arr[j]);

            for (int k = 1; k <= loop2; k++)
            {
                if (arr[j] - arr[j - 1] > bignumber)
                {
                    bignumber = arr[j] - arr[j - 1];
                }
            }
        }

        for (int j = 1; j <= loop2; j++)
        {
            while (j == 1)
            {
                printf("Case %d: %d", i, bignumber);
                break;
            }
        }
        printf("\n");
    }

    return 0;
}
