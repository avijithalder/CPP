#include <iostream>
using namespace std;
int main()
{
    // inde  0   1   2   3   4   5   6   7   8
    int arr[] = {77, 33, 44, 11, 88, 22, 66, 55};
    int value, index;
    for (int i = 1; i < 8; i++)
    {
        value = arr[i];
        index = i;

        while (index > 0 && arr[index - 1] > value)
        {
            arr[index] = arr[index - 1];
            index--;
        }
        arr[index] = value;
    }
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
