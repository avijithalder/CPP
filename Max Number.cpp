#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    cout << "Enter your Array Size ";
    int arraysize;
    cin >> arraysize;

    for (int i = 0; i < arraysize; i++)
    {
        cin >> arr[i];
    }

    int maxnumber = 0;
    for (int i = 0; i < arraysize; i++)
    {
        if (arr[i] > maxnumber)
        {
            maxnumber = arr[i];
        }
    }
    cout << "The largest number in the array is: " << maxnumber << endl;

    return 0;
}
