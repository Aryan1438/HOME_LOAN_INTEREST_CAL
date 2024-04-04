
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Constants
    const int MONTHS_IN_YEAR = 12;

    // Variables
    double principal, annualRate, monthlyRate, monthlyPayment,total_interest,total_amount;
    int loanTermYears, numPayments;

    // Input
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Welcome to our bank dear Sir / Madam ." << endl;
    cout << "We are providing Loan Service to our client , Plese kindly request you to fill detail as ask you ." << endl;
    cout << "Enter loan amount as you need for loan : ";
    cin >> principal;

    cout << "Enter annual interest rate (in percentage): ";
    cin >> annualRate;

    cout << "Enter loan term in years: ";
    cin >> loanTermYears;

    // Calculate monthly interest rate
    monthlyRate = annualRate / (100 * MONTHS_IN_YEAR);

    // Calculate total number of payments
    numPayments = loanTermYears * MONTHS_IN_YEAR;

    // Calculate monthly payment using formula: M = P[r(1+r)^n] / [(1+r)^n - 1]
    monthlyPayment = (principal * monthlyRate) / (1 - pow(1 + monthlyRate, -numPayments));

    total_amount = ( monthlyPayment * 12 * loanTermYears ) ;
    total_interest = ( total_amount - principal );

    // Output
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\nYour Total Interest Amount Will be :  " << total_interest <<  endl;
    cout << " \nYour Total Amount within cycle (With Interest) Will be  :  " << total_amount << endl;

    cout << "\nYou have to pay " << total_interest << " amount of money as total interest." << endl;


    cout << "\nYour Monthly payment : $" << monthlyPayment << "\n"<<endl;

    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
    

    return 0;
}

