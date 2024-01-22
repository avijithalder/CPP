#include <iostream>
using namespace std;

int main() {
    bool continueLoop = true;

    do {
        int a, b, sum;

        cout << "Enter Your First number: ";
        cin >> a;

        cout << "Enter Your Second number: ";
        cin >> b;

        if (a > b) {
            sum = a + b;
            cout << sum;
        } else if (a < b) {
            sum = a + b;
            cout << sum;
        } else if (a == b) {
            sum = (a + b) * 3;
            cout << sum;
        } else {
            cout << "False";
        }

        // Ask user if they want to continue
        char choice;
        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;

        // Update the loop condition
        continueLoop = (choice == 'y' || choice == 'Y');

    } while (continueLoop);

    return 0;
}
