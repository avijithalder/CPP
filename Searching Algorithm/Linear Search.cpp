#include <stdio.h>
int main()
{
    int array[] = {4, 5, 3, 6, 8};
    int search = 8;

    for (int i = 0; i < 5; i++)
    {
        if (array[i] == search)
        {
            printf("Found %d ", i);
            return 0;
        }
    }
    printf("Not Found ");

    return 0;
}
