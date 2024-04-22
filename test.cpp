#include <iostream>
#include <cmath>
using namespace std;

class ScientificCalculator {
public:
    void runCalculator() {
        int choice; // Changed to int

        do {
            cout << "\nScientific Calculator Menu:\n";
            cout << "1. Logarithm (base 10)\n";
            cout << "2. Natural Logarithm (base e)\n";
            cout << "3. Exponential (e^x)\n";
            cout << "4. Sine\n";
            cout << "5. Cosine\n";
            cout << "6. Tangent\n";
            cout << "7. Cosecant\n";
            cout << "8. Secant\n";
            cout << "9. Cotangent\n";
            cout << "10. Arcsine\n";
            cout << "11. Arccosine\n";
            cout << "12. Arctangent\n";
            cout << "13. Arccosecant\n";
            cout << "14. Arcsecant\n";
            cout << "15. ArcCotangent\n";
            cout << "0. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1: 
                    cout << "Enter a number to find logarithm (base 10): ";
                    cin >> a;
                    cout << "Result: " << log(a) << endl;
                    break;
                case 2: 
                    cout << "Enter a number to find natural logarithm (base e): ";
                    cin >> a;
                    cout << "Result: " << naturalLog(a) << endl;
                    break;
                case 3: 
                    cout << "Enter a number for exponential (e^x): ";
                    cin >> a;
                    cout << "Result: " << exponential(a) << endl;
                    break;
                case 4: 
                    cout << "Enter an angle in radians for sine: ";
                    cin >> a;
                    cout << "Result: " << sine(a) << endl;
                    break;
                case 5: 
                    cout << "Enter an angle in radians for cosine: ";
                    cin >> a;
                    cout << "Result: " << cosine(a) << endl;
                    break;
                case 6: 
                    cout << "Enter an angle in radians for tangent: ";
                    cin >> a;
                    cout << "Result: " << tangent(a) << endl;
                    break;
                case 7: 
                    cout << "Enter an angle in radians for cosecant: ";
                    cin >> a;
                    cout << "Result: " << cosecant(a) << endl;
                    break;
                case 8: 
                    cout << "Enter an angle in radians for secant: ";
                    cin >> a;
                    cout << "Result: " << secant(a) << endl;
                    break;
                case 9: 
                    cout << "Enter an angle in radians for cotangent: ";
                    cin >> a;
                    cout << "Result: " << cotangent(a) << endl;
                    break;
                case 10: 
                    cout << "Enter a value for arcsine: ";
                    cin >> a;
                    cout << "Result: " << arcsine(a) << " radians" << endl;
                    break;
                case 11: 
                    cout << "Enter a value for arccosine: ";
                    cin >> a;
                    cout << "Result: " << arccosine(a) << " radians" << endl;
                    break;
                case 12: 
                    cout << "Enter a value for arctangent: ";
                    cin >> a;
                    cout << "Result: " << arctangent(a) << " radians" << endl;
                    break;
                case 13: 
                    cout << "Enter a value for arccosecant: ";
                    cin >> a;
                    cout << "Result: " << arccosecant(a) << " radians" << endl;
                    break;
                case 14: 
                    cout << "Enter a value for arcsecant: ";
                    cin >> a;
                    cout << "Result: " << arcsecant(a) << " radians" << endl;
                    break;
                case 15: 
                    cout << "Enter a value for arccotangent: ";
                    cin >> a;
                    cout << "Result: " << arccotangent(a) << " radians" << endl;
                    break;
                case 0: 
                    cout << "Exiting...\n";
                    break;
                default:
                    cerr << "Invalid choice! Please try again.\n";
            }
        } while (choice != 0);
    }

public:
    double a; 

    double log(double a) {
        if (a <= 0) {
            cerr << "Error: Logarithm of a non-positive number\n";
            return NAN;
        }
        return log10(a);
    }

    double naturalLog(double a) {
        if (a <= 0) {
            cerr << "Error: Logarithm of a non-positive number\n";
            return NAN;
        }
        return log(a);
    }

    double exponential(double a) {
        return exp(a);
    }

    double sine(double angle) {
        return sin(angle);
    }

    double cosine(double angle) {
        return cos(angle);
    }

    double tangent(double angle) {
        return tan(angle);
    }

    double cosecant(double angle) {
        double cosec = 1.0 / sin(angle);
        return cosec;
    }

    double secant(double angle) {
        double sec = 1.0 / cos(angle);
        return sec;
    }

    double cotangent(double angle) {
        double cot = 1.0 / tan(angle);
        return cot;
    }

    double arcsine(double value) {
        return asin(value);
    }

    double arccosine(double value) {
        return acos(value);
    }

    double arctangent(double value) {
        return atan(value);
    }

    double arccosecant(double value) {
        return asin(1.0 / value);
    }

    double arcsecant(double value) {
        return acos(1.0 / value);
    }

    double arccotangent(double value) {
        return atan(1.0 / value);
    }
};

int main() {
    ScientificCalculator calculator;
    calculator.runCalculator();
    cout<<"hello"<<endl;

    return 0;
}
