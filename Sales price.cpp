// Sales price.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*To make a profit, a local store marks up the prices of its items by a certain percentage.Write a C++ program that reads the original price of the item sold, the percentage of the marked - up price, and the sales tax rate.The program then outputs the original price of the item, the percentage of the mark - up, the store’s selling price of the item, the amount of the sales tax, and the final price of the item.  (The final price of the item is the selling price plus the sales tax.).Your program must prompt for the input and label the output.Compile and run your program with the following test data :
•	Original price of item : $99.00
•	Mark - up percentage : 60 %
•	Sales tax rate : 5.25 %
•	The final price of the item with tax should be $166.72
*/



#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declare variables
    double originalPrice, markupPercentage, salesTaxRate;

    // Prompt user for input
    cout << "Enter the original price of the item: $";
    cin >> originalPrice;

    cout << "Enter the markup percentage (e.g., 60 for 60%): ";
    cin >> markupPercentage;

    cout << "Enter the sales tax rate (e.g., 5.25 for 5.25%): ";
    cin >> salesTaxRate;

    // Calculate selling price
    double sellingPrice = originalPrice * (1 + markupPercentage / 100.0);

    // Calculate sales tax
    double salesTax = sellingPrice * (salesTaxRate / 100.0);

    // Calculate final price
    double finalPrice = sellingPrice + salesTax;

    // Output results
    cout << fixed << setprecision(2);
    cout << "\nOriginal Price: $" << originalPrice << endl;
    cout << "Markup Percentage: " << markupPercentage << "%" << endl;
    cout << "Selling Price: $" << sellingPrice << endl;
    cout << "Sales Tax: $" << salesTax << endl;
    cout << "Final Price (including tax): $" << finalPrice << endl;

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
