#include <iostream>
using namespace std;

int main()
{
    // Declaration of variables
    int X, Y, Z;

    // Taking input from user
    cout << "Enter the value of X = ";
    cin >> X;

    cout << "Enter the value of Y = ";
    cin >> Y;

    cout << "Enter the value of Z = ";
    cin >> Z;

    // Calculations

    cout << "\n--- Results ---" << endl;

    cout << "Volume (X * Y * Z) = "
         << X * Y * Z << endl;

    cout << "Expression 2 = "
         << 2 * (Y + Z) + 4 * (X + Z) << endl;

    cout << "Expression 3 = "
         << 2 * (Y + Z) + (Y - Z) / (Z * 1.0) * 100 << endl;

    return 0;
}