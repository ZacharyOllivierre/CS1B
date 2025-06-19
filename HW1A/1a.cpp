// =============================================================================
// Attached: HW1A
// File: HW1A.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Calculate Employee Pay
// =============================================================================
// Description:
// This program prompts user for monthly sales and calculates total pay for 
// employee. This total pay is calculated as commission plus base pay. Data is
// output to user with a reciept format.
// =============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
double getSalesAmt();
double calcCommission(double monthlySales);
double calcPay(const double basePay, double commission);
void displayPay(const double basePay, double monthlySales, double commission, double totalPay);

// ==== main ===================================================================
int main() {

    // Declaring Variables
    const double basePay = 2500;

    bool running = true;
    char userAnswer = ' ';

    double monthlySales = 0;
    double commission = 0;
    double totalPay = 0;

    // Main Program Loop
    while (running) {
        
        // Prompt user for monthly sales
        monthlySales = getSalesAmt();

        // Caclulate user commission
        commission = calcCommission(monthlySales);

        // Calculate user total pay
        totalPay = calcPay(basePay, commission);

        // Display user pay receipt
        displayPay(basePay, monthlySales, commission, totalPay);

        // Prompt user to run again
        cout << "\nDo it again? (Y/N): ";
        cin.ignore();
        userAnswer = cin.get();

        // Update running loop controller
        if (!(userAnswer == 'Y' || userAnswer == 'y')) {
            running = false;
        }
    }

    return 0;
}
// ==== End of main ============================================================


// ======= getSalesAmt =========================================================
// Description: 
// This function prompts the user to enter their monthly sales amount. This 
// value is returned to main
//
// Input:
// User entered monthly sales amount
//
// Output:
// User entered monthly sales amount returned to main
// =============================================================================

double getSalesAmt() {
    double monthlySales = 0;

    // Prompt user to enter monthly sales
    cout << "\nEnter monthly sales amount: ";
    cin >> monthlySales;

    return monthlySales;
}
// ======= End of getSalesAmt ==================================================

// ======= calcCommission ======================================================
// Description:
// This function calculates commission based on the threshold of user entered 
// monthly sales. Pay and commission is as follows 
// 50,000 or above = 2%
// 25,000 to 49,999 = 1.5%
// 0 to 24,999 = 0%
//  
// Input:
// User entered monthly sales amount from main
// 
// Output:
// Calculated employee commission 
// =============================================================================

double calcCommission(double monthlySales) {
    double commission = 0;
    float commissionPercentage = 0;

    // Calculate commission percentage base on monthly sales
    if (monthlySales >= 50000) {
        commissionPercentage = 0.02;

    } else if (monthlySales >= 25000) {
        commissionPercentage = 0.015;

    } else {
        commissionPercentage = 0;
    }

    // Calculate commission
    commission = monthlySales * commissionPercentage;

    return commission;
}
// ======= End of calcCommission ===============================================

// ======= calcPay =============================================================
// Description:
// This function calculates total employee pay (base + commission) and returns 
// it to main
//
// Input:
// Const Base employee pay from main
// Calculated employee commission
//
// Output:
// Calculated total employee pay
// =============================================================================

double calcPay(const double basePay, double commission) {
    double totalPay = 0;

    // Calculate total pay
    totalPay = basePay + commission;

    return totalPay;
}
// ======= End of calcPay ======================================================

// ======= displayPay ==========================================================
// Description:
// This function displays monthly sales, commission, base pay, and total pay 
// for employee. Output is aligned and formatted to two decimal places.
//
// Input:
// User entered monthly sales
// Calculated commission
// Const base employee pay
// Calculated total pay
//
// Output:
// User entered monthly sales
// Calculated commission
// Const base employee pay
// Calculated total pay
// =============================================================================

void displayPay(const double basePay, double monthlySales, double commission, double totalPay) {
    // Fieldwidths for labels and values
    const unsigned int labelWidth = 22;
    const unsigned int valueWidth = 10;

    // Formatt display
    cout << fixed << setprecision(2) << showpoint;

    // Display Data to user
    cout << endl << left << setw(labelWidth) << "Monthly Sales:" << "$" << right 
         << setw(valueWidth) << monthlySales << endl;

    cout << left << setw(labelWidth) << "Commission:" << "$" << right 
         << setw(valueWidth) << commission << endl;

    cout << left << setw(labelWidth) << "Base Pay:" << "$" << right 
         << setw(valueWidth) << basePay << endl;
         
    cout << left << setw(labelWidth) << "Total Pay:" << "$" << right 
         << setw(valueWidth) << totalPay << endl;

}
// ======= End of displayPay ===================================================



/* ================================== Output ===================================
Enter monthly sales amount: 60000

Monthly Sales:        $  60000.00
Commission:           $   1200.00
Base Pay:             $   2500.00
Total Pay:            $   3700.00

Do it again? (Y/N): n
==================================== Output ===================================*/