#include <iostream>
using namespace std;

int main()
{
    int array_size;
    cout << "Enter the size of the array: ";
    cin >> array_size;

    int array[array_size];
    cout << "Enter the elements of the array in sorted order:\n";
    for (int i = 0; i < array_size; i++)
    {
        cin >> array[i];
    }

    int search;
    cout << "Enter the number to search for: ";
    cin >> search;

    int left = 0, right = array_size - 1;

    while (left <= right)
    {
        int middle = (left + right) / 2;

        if (array[middle] == search)
        {
            cout << "Found " << search << " at index " << middle << endl;
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

    cout << "Not Found" << endl;

    return 0;
}
