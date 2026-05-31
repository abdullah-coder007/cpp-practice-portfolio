#include <iostream>
using namespace std;

int main()
{
    // Declaration and initialization
    int X = 30;
    float Y = 25.0;
    float Z = 5.5;
    float P = 21.12;
    float Q = 0.25;

    // Expression 1
    cout << "(X + Y) - (X - Z) / (Y - Z) * (P * Q / X) = "
         << (X + Y) - (X - Z) / (Y - Z) * (P * Q / X) << endl;

    // Expression 2
    cout << "X - Y * Z / P - Q * P * X - Q - Y - X - Z = "
         << X - Y * Z / P - Q * P * X - Q - Y - X - Z << endl;

    // Expression 3
    cout << "P - Q * X + Y * Z / P - Q * X = "
         << P - Q * X + Y * Z / P - Q * X << endl;

    // Expression 4
    cout << "P * Q * X * Y / Z * Q * X * Y / P - P * Q - X * Y / Z * Q + X * Y / P = "
         << P * Q * X * Y / Z * Q * X * Y / P - P * Q - X * Y / Z * Q + X * Y / P << endl;

    // Expression 5
    cout << "P - Q * X + Y / Z * Q * X - Y / P - P * Q / X * Y / Z * Q / X - Y / P = "
         << P - Q * X + Y / Z * Q * X - Y / P - P * Q / X * Y / Z * Q / X - Y / P << endl;

    return 0;
}
