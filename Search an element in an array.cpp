#include <iostream>
using namespace std;

int main()
{
    int arraysize, searching;

    cout << "Enter your Array Size: ";
    cin >> arraysize;

    int arr[arraysize]; 

    cout << "Enter your Array Elements: ";
    for (int i = 0; i < arraysize; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter Your Searching Number: ";
    cin >> searching;
    bool found = false;
    int index = -1;
    for (int i = 0; i < arraysize; i++)
    {
        if (arr[i] == searching)
        {
            found = true;
            index = i;
            break;
        }
    }

    if (found)
    {
        cout << "Number is found " << index;
    }
    else
    {
        cout << "Number is not found";
    }

    return 0;
}
