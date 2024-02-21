#include <iostream>
using namespace std;
#define max 100

int ans[max];

int findMinCoins(int coins[], int size, int value)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        // take as much from coins[i]
        while (value >= coins[i])
        {
            // after taking the coin, reduce the value.
            value = value - coins[i];
            ans[count] = coins[i];
            count++;
        }
        if (value == 0)
            break;
    }

    return count;
}

int main()
{
    int coins[] = {25, 20, 10, 5};
    int value = 100;

    // find the size of the coins array
    int size = 4;

    int MinCount = findMinCoins(coins, size, value);

    printf("Total Coins Needed = %d\n", MinCount);

    printf("Coins are:\t");
    for (int i = 0; i < MinCount; i++)
        printf("%d ", ans[i]);

    return 0;
}
