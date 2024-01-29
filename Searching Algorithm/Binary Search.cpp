#include <stdio.h>
int main()
{ //    index      0  1  2  3  4  5  6  7  8  9

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int search = 9;
    int left = 0, right = 9;

    for (int i = 0; i < 10; i++)
    {
        int middle = (left + right) / 2;

        if (array[middle] == search)
        {
            printf("Found %d ", middle);
            return 0;
        }
        else if (array[middle] < search)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    printf("Not Found ");

    return 0;
}
