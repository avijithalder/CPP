#include <iostream>
using namespace std;

int main()
{
    const int maxSize = 100;
    int arr[maxSize];

    int n;
    cin >> n;

    if (n <= 0 || n > maxSize)
    {
        cout << "Invalid input for the number of elements. Exiting program." << endl;
        return 1; // Exit with an error code
    }

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int minNumber = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minNumber)
        {
            minNumber = arr[i];
        }
    }

    cout << "The minimum number is: " << minNumber << endl;

    return 0;
}
