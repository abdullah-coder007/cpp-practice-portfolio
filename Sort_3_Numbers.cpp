#include <iostream>
using namespace std;

int main()
{
    int x, y, z;

    // Input values
    cout << "Enter value of x: ";
    cin >> x;

    cout << "Enter value of y: ";
    cin >> y;

    cout << "Enter value of z: ";
    cin >> z;

    // Sorting using conditions

    if (x <= y && x <= z)
    {
        if (y <= z)
        {
            cout << "\nAscending: " << x << ", " << y << ", " << z << endl;
            cout << "Descending: " << z << ", " << y << ", " << x << endl;
        }
        else
        {
            cout << "\nAscending: " << x << ", " << z << ", " << y << endl;
            cout << "Descending: " << y << ", " << z << ", " << x << endl;
        }
    }
    else if (y <= x && y <= z)
    {
        if (x <= z)
        {
            cout << "\nAscending: " << y << ", " << x << ", " << z << endl;
            cout << "Descending: " << z << ", " << x << ", " << y << endl;
        }
        else
        {
            cout << "\nAscending: " << y << ", " << z << ", " << x << endl;
            cout << "Descending: " << x << ", " << z << ", " << y << endl;
        }
    }
    else
    {
        if (x <= y)
        {
            cout << "\nAscending: " << z << ", " << x << ", " << y << endl;
            cout << "Descending: " << y << ", " << x << ", " << z << endl;
        }
        else
        {
            cout << "\nAscending: " << z << ", " << y << ", " << x << endl;
            cout << "Descending: " << x << ", " << y << ", " << z << endl;
        }
    }

    return 0;
}
