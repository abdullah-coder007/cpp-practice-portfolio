#include <iostream>
using namespace std;

int main()
{
    int x, y, z, a;

    cout << "Enter values of x, y, z, a: ";
    cin >> x >> y >> z >> a;

    int largest = x;
    int smallest = x;

    if (y > largest) largest = y;
    if (z > largest) largest = z;
    if (a > largest) largest = a;

    if (y < smallest) smallest = y;
    if (z < smallest) smallest = z;
    if (a < smallest) smallest = a;

    cout << "\nLargest value = " << largest << endl;
    cout << "Smallest value = " << smallest << endl;

    return 0;
}
