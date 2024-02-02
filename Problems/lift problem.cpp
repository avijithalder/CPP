/*
All of you must have noticed that the faculty lift of DIU is not available for students. 
But since you deny obeying usual rules, you always use this lift no matter what happens!
Now one day you were sleeping in the class and when you woke up you found none in the 
department except the guard who was in a deep sleep in his room. But luckily you found the 
lift on. So, you want to go to the ground floor using the lift. But the lift can be in a different 
floor. Then you must wait for the lift to come to your floor. Assume that it takes 4 seconds 
for the lift to go from any floor to its adjacent floor (up or down). It takes 3 seconds to open 
or close the door and you need 5 seconds to enter or exit the lift. Given your position and 
the lift's position you have to calculate the time for you to reach the ground floor (floor 0). 
Reaching ground floor means you must get out of the lift in ground floor.

Input
Input starts with an integer T (≤ 25), denoting the number of test cases.
Each case contains two integers. The first integer means your position (different than 0) and 
the second integer means the position of the lift. Assume that the department 
has 100 floors (may be one day it will be :D).

Output
For each case, print the case number and the calculated time in seconds.
Sample

Input	
3
1 2
3 10
5 5

Output
Case 1: 27
Case 2: 59
Case 3: 39

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int a, b, r;
        cin >> a;
        cin >> b;
        if (a == b)
        {
            r = a * 4 + 19;
        }
        if (a < b)
        {
            r = b * 4 + 19;
        }
        else
        {
            r = (a - b + a) * 4 + 19;
        }
        cout << "Case ", cout << i, cout << ": ", cout << r << endl;
    }

    return 0;
}
