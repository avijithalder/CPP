#include <iostream>
using namespace std;

int main()
{
    int n, temp, b = 0, r;
    cout << "Enter Any Number: ";
    cin >> n;

    temp = n;
    while (n != 0)
    {
        r = n % 10;
        b = b * 10 + r;
        n = n / 10;
    }
    if (b == temp)
    {
        cout << "Number is Palindrome";
    }
    else
        cout << "Number is not Palindrome";

    return 0;
}
