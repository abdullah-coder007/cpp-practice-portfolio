#include <iostream>
using namespace std;

int main()
{
    //  Declaration of variables
    int num1, num2, num3, num4;
    int largest, smallest;

    //  Read first two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    //  Find largest and smallest between first two numbers
    if (num1 > num2)
    {
        largest = num1;
        smallest = num2;
    }
    else
    {
        largest = num2;
        smallest = num1;
    }

    cout << "Largest value after 2 numbers = " << largest << endl;

    //  Read third number
    cout << "Enter third number: ";
    cin >> num3;

    // Compare third number with largest and smallest
    if (num3 > largest)
        largest = num3;
    if (num3 < smallest)
        smallest = num3;

    cout << "Largest value among 3 numbers = " << largest << endl;
    cout << "Smallest value among 3 numbers = " << smallest << endl;

    //  Read fourth number
    cout << "Enter fourth number: ";
    cin >> num4;

    // Compare fourth number with largest and smallest
    if (num4 > largest)
        largest = num4;
    if (num4 < smallest)
        smallest = num4;

    cout << "Largest value among 4 numbers = " << largest << endl;
    cout << "Smallest value among 4 numbers = " << smallest << endl;

    return 0;

}