#include <iostream>
#include <cmath> // For math functions
using namespace std;

// Function prototypes
void showMenu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exponent);
double squareRoot(double a);
double sine(double angle);
double cosine(double angle);
double tangent(double angle);
double logarithm(double a);

int main() {
    int choice;
    double num1, num2;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    cout << "Result: " << divide(num1, num2) << endl;
                } else {
                    cout << "Error: Division by zero." << endl;
                }
                break;
            case 5:
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << power(num1, num2) << endl;
                break;
            case 6:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << squareRoot(num1) << endl;
                break;
            case 7:
                cout << "Enter an angle in degrees: ";
                cin >> num1;
                cout << "Result: " << sine(num1 * M_PI / 180) << endl; // Convert to radians
                break;
            case 8:
                cout << "Enter an angle in degrees: ";
                cin >> num1;
                cout << "Result: " << cosine(num1 * M_PI / 180) << endl; // Convert to radians
                break;
            case 9:
                cout << "Enter an angle in degrees: ";
                cin >> num1;
                cout << "Result: " << tangent(num1 * M_PI / 180) << endl; // Convert to radians
                break;
            case 10:
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 > 0) {
                    cout << "Result: " << logarithm(num1) << endl;
                } else {
                    cout << "Error: Logarithm of a non-positive number." << endl;
                }
                break;
            case 0:
                cout << "Exiting the calculator." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        cout << endl;
    } while (choice != 0);

    return 0;
}

// Function to display menu options
void showMenu() {
    cout << "Scientific Calculator" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Power" << endl;
    cout << "6. Square Root" << endl;
    cout << "7. Sine" << endl;
    cout << "8. Cosine" << endl;
    cout << "9. Tangent" << endl;
    cout << "10. Logarithm" << endl;
    cout << "0. Exit" << endl;
    cout << "Choose an option: ";
}

// basic operations
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }
double power(double base, double exponent) { return pow(base, exponent); }
double squareRoot(double a) { return sqrt(a); }
double sine(double angle) { return sin(angle); }
double cosine(double angle) { return cos(angle); }
double tangent(double angle) { return tan(angle); }
double logarithm(double a) { return log(a); }
