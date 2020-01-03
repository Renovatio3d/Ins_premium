// AUTHOR: Shallu Nah
// PROGRAM DESCRIPTION: The program calculate the company InsureU, Insurance Premium
// Collision = 2% orig car price – 0.15% of the orig car price per year old
// Comprehensive = 0.35% of original cost + $250, Liability = $290

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>

using namespace std;

void insuranceDes();
int main() {
    // constant variables
    const int originalCost = 250;
    const double liability = 290;
    const double comprehensive = 0.35;
    const double perYearOld = 0.15;
    const double collision = 2;
    const int month = 5;
    const int precent = 100;
    // local variables
    double vehicleCost;
    double origCarYearly;
    double origCarYrResult;
    int purYears;
    double collisionValue;
    double collisionVal;
    double comprehensiveValue;
    double comprehensiveVal;
    double total;
    //Function
    insuranceDes();
    // Reads user inputs
    cout << " Enter original cost of vehicle:  ";
    cin >> vehicleCost;
    cout << " Enter vehicle model year:  ";
    cin >> purYears;
    cout << endl;
    // Calculation, collision value, comprehensive value, liability value, and the annually total
    collisionVal = vehicleCost  * collision / precent;
    origCarYearly = vehicleCost * perYearOld / precent;
    origCarYrResult = origCarYearly * month;
    collisionValue = collisionVal + origCarYrResult;
    comprehensiveVal = vehicleCost * comprehensive / precent;
    comprehensiveValue = comprehensiveVal + originalCost;
    total = collisionValue + comprehensiveValue + liability;
    // Output, display final result to the user
    cout << " RESULTS:" << endl << endl;
    // setprecision output manipulators to the numeric Share values, rounded to additional two decimal places
    cout << setw(7) << fixed << showpoint << setprecision(2);
    cout << " Collision " << setw(11) << "$" << setw(8) << collisionValue << endl;
    cout << " Comprehensive " << setw(7) << "$" << setw(8) << comprehensiveValue << endl;
    cout << " Liability" << setw(12) << "$" << setw(8) << liability << endl;
    // Dividing lines for the Account total.
    cout << setw(20) << "" << setfill('-') << setw(10) << "" << setfill(' ') << endl;
    cout << " TOTAL" << setw(16) << "$" << setw(8) << total << " annually" << endl << endl;

    return 0;
}
void insuranceDes() {
    cout << setw(58) << " InsureU Premium Calculations" << endl;
    cout << setw(44) << " by" << endl;
    cout << setw(50) << " Mr. Shallu J Nah" << endl << endl;
}