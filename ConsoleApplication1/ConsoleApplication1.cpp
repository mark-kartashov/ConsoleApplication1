#include <iostream>
#include "Add.h"

using namespace std;

double getHeight() {
    cout << "Enter the height of the tower: " << "\n";
    double x;
    cin >> x;
    return x;
}

double getBallHeigh(double towerHeight, int timing) {
     double BallHeigh = towerHeight - ((constants::my_gravity * timing * timing) / 2);
     return BallHeigh;
}

void printResult(double towerHeight, int timing) {
    double x = getBallHeigh(towerHeight, timing);
    if (x > 0.0) {
        cout << "In " << timing << "Ball Heigh is" << x << "\n";
    }
    else {
        cout << "Ball on flour" << "\n";
    }
}

int main()
{
    
    const double towerHeight{ getHeight() };
    printResult(towerHeight, 0);
    printResult(towerHeight, 1);
    printResult(towerHeight, 2);
    printResult(towerHeight, 3);
    printResult(towerHeight, 4);
    printResult(towerHeight, 5);

    return 0;
}