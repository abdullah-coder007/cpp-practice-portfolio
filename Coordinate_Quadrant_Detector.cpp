#include <iostream>
using namespace std;

int main()
{
    // Declaration
    float x, y;

    // Input
    cout << "Enter coordinates of point (x and y): ";
    cin >> x >> y;

    // Axis and origin checks
    if (x == 0 && y == 0)
    {
        cout << "Point is at origin" << endl;
    }
    else if (x == 0 && y != 0)
    {
        cout << "Point is on Y-axis" << endl;
    }
    else if (x != 0 && y == 0)
    {
        cout << "Point is on X-axis" << endl;
    }
    else
    {
        // Quadrant check
        if (x > 0 && y > 0)
            cout << "Point is in First Quadrant" << endl;
        else if (x < 0 && y > 0)
            cout << "Point is in Second Quadrant" << endl;
        else if (x < 0 && y < 0)
            cout << "Point is in Third Quadrant" << endl;
        else if (x > 0 && y < 0)
            cout << "Point is in Fourth Quadrant" << endl;
    }

    return 0;
}
