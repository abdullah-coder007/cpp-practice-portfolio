#include <iostream>
using namespace std;

int main()
{
    // Declaring and initializing variables
    int quantity = 30;
    float weight = 2.5;
    float price = 100;
    float cost = 120;

    float totalPrice = 0.0;
    float totalCost = 0.0;
    float profit = 0.0;

    // Calculating total price and total cost
    totalPrice = quantity * weight * price;
    totalCost = quantity * weight * cost;

    // Calculating profit percentage
    profit = ((totalPrice - totalCost) / totalCost) * 100;

    // Displaying results
    cout << "Total Price = " << totalPrice << endl;
    cout << "Total Cost  = " << totalCost << endl;
    cout << "Profit %    = " << profit << "%" << endl;

    cout << "\n--- Input Data ---" << endl;
    cout << "Quantity = " << quantity << endl;
    cout << "Weight   = " << weight << endl;
    cout << "Price    = " << price << endl;

    return 0;
}