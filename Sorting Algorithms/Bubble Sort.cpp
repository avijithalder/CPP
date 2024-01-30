#include <stdio.h>
int main()
{
    int arr[] = {100, 50, 40, 90, 600, 82, 10};
    int n = 7;
    int temp;
    for (int i = 0; i < 7 - 1; i++)
    {
        for (int j = 0; j < 7 - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
