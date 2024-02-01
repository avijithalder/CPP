#include <iostream>
using namespace std;
int main()
{    
    // inde  0   1   2   3   4   5   6   7   8
    int arr[] = {77, 33, 44, 11, 88, 22, 66, 55};
    int value, hole;
    for (int i = 1; i < 8; i++)
    {
        value = arr[i];
        hole = i;

        while (hole > 0 && arr[hole - 1] > value)
        {
            arr[hole] = arr[hole - 1];
            hole--;
        }
        arr[hole] = value;
    }
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
