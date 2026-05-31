#include <iostream>
using namespace std;

int main()
{
    // Room dimensions
    int length, width, height;

    cout << "Enter the length of room: ";
    cin >> length;

    cout << "Enter the width of room: ";
    cin >> width;

    cout << "Enter the height of room: ";
    cin >> height;

    // Costs per unit area
    float paintCost, tileCost, panelCost;

    cout << "Enter paint cost per unit area: ";
    cin >> paintCost;

    cout << "Enter tile cost per unit area: ";
    cin >> tileCost;

    cout << "Enter panel cost per unit area: ";
    cin >> panelCost;

    // Area calculations
    int wallArea = 2 * ((height * length) + (width * height));
    int floorArea = length * width;
    int ceilingArea = length * width;

    cout << "\n--- Areas ---" << endl;
    cout << "Wall Area    = " << wallArea << endl;
    cout << "Floor Area   = " << floorArea << endl;
    cout << "Ceiling Area = " << ceilingArea << endl;

    // Cost calculations
    float totalPaintCost = wallArea * paintCost;
    float totalTileCost = floorArea * tileCost;
    float totalPanelCost = ceilingArea * panelCost;

    float totalCost = totalPaintCost + totalTileCost + totalPanelCost;

    // Display results
    cout << "\n--- Cost Breakdown ---" << endl;
    cout << "Total Paint Cost  = " << totalPaintCost << endl;
    cout << "Total Tile Cost   = " << totalTileCost << endl;
    cout << "Total Panel Cost  = " << totalPanelCost << endl;
    cout << "TOTAL PROJECT COST = " << totalCost << endl;

    return 0;
}

