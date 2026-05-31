#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "Enter values of x and y: ";
    cin >> x >> y;

    // Analysis for x
    cout << "\n--- Analysis of x ---" << endl;

    if (x > 0)
        cout << "x is positive" << endl;
    else if (x < 0)
        cout << "x is negative" << endl;
    else
        cout << "x is zero" << endl;

    if (x % 2 == 0)
        cout << "x is even" << endl;
    else
        cout << "x is odd" << endl;

    if (x > 0 && x % 2 != 0)
        cout << "x is positive and odd" << endl;
    else if (x > 0 && x % 2 == 0)
        cout << "x is positive and even" << endl;
    else if (x < 0 && x % 2 != 0)
        cout << "x is negative and odd" << endl;
    else if (x < 0 && x % 2 == 0)
        cout << "x is negative and even" << endl;

    // Analysis for y
    cout << "\n--- Analysis of y ---" << endl;

    if (y > 0)
        cout << "y is positive" << endl;
    else if (y < 0)
        cout << "y is negative" << endl;
    else
        cout << "y is zero" << endl;

    if (y % 2 == 0)
        cout << "y is even" << endl;
    else
        cout << "y is odd" << endl;

    if (y > 0 && y % 2 != 0)
        cout << "y is positive and odd" << endl;
    else if (y > 0 && y % 2 == 0)
        cout << "y is positive and even" << endl;
    else if (y < 0 && y % 2 != 0)
        cout << "y is negative and odd" << endl;
    else if (y < 0 && y % 2 == 0)
        cout << "y is negative and even" << endl;

    return 0;
}