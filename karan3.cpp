#include<iostream>
#include<cmath>
using namespace std;

class ComplexCalculator {
public:
    float real;
    float imaginary;

    void calculation() {
        int choice;
        while (1) {
            cout << "Options:" << endl;
            cout << "Click 1. To Add two complex numbers" << endl;
            cout << "Click 2. To Subtract two complex numbers" << endl;
            cout << "Click 3. To Multiply two complex numbers" << endl;
            cout << "Click 4. To Divide two complex numbers" << endl;
            cout << "Click 5. To Calculate modulus of a complex number" << endl;
            cout << "Click 6. To Calculate argument (phase) of a complex number" << endl;
            cout << "Click 7. To Calculate square root of a complex number" << endl;
            cout << "Click 0. To Exit the program" << endl;
            cout << "Enter your choice" << endl;
            cin >> choice;
            switch (choice) {
            case 1:
                performAddition();
                break;
            case 2:
                performSubtraction();
                break;
            case 3:
                performMultiplication();
                break;
            case 4:
                performDivision();
                break;
            case 5:
                calculateModulus();
                break;
            case 6:
                calculateArgument();
                break;
            case 7:
                calculateSquareRoot();
                break;
            case 0:
                return;
            default:
                cout << "Invalid choice!" << endl;
            }
        }
    }

    void performAddition() {
        cout << "Enter the real and imaginary parts of the first complex number: ";
        cin >> real >> imaginary;
        cout << "Enter the real and imaginary parts of the second complex number: ";
        float real2, imaginary2;
        cin >> real2 >> imaginary2;
        cout << "Addition of two complex numbers is: " << real + real2 << " + " << imaginary + imaginary2 << "i" << endl;
    }

    void performSubtraction() {
        cout << "Enter the real and imaginary parts of the first complex number: ";
        cin >> real >> imaginary;
        cout << "Enter the real and imaginary parts of the second complex number: ";
        float real2, imaginary2;
        cin >> real2 >> imaginary2;
        cout << "Subtraction of two complex numbers is: " << real - real2 << " + " << imaginary - imaginary2 << "i" << endl;
    }

    void performMultiplication() {
        cout << "Enter the real and imaginary parts of the first complex number: ";
        cin >> real >> imaginary;
        cout << "Enter the real and imaginary parts of the second complex number: ";
        float real2, imaginary2;
        cin >> real2 >> imaginary2;
        cout << "Multiplication of two complex numbers is: " << (real * real2 - imaginary * imaginary2) << " + " << (real * imaginary2 + imaginary * real2) << "i" << endl;
    }

    void performDivision() {
        cout << "Enter the real and imaginary parts of the first complex number: ";
        cin >> real >> imaginary;
        cout << "Enter the real and imaginary parts of the second complex number: ";
        float real2, imaginary2;
        cin >> real2 >> imaginary2;
        cout << "Division of two complex numbers is: " << ((real * real2 + imaginary * imaginary2) / (real2 * real2 + imaginary2 * imaginary2)) << " + " << ((imaginary * real2 - real * imaginary2) / (real2 * real2 + imaginary2 * imaginary2)) << "i" << endl;
    }

    void calculateModulus() {
        cout << "Enter the real and imaginary parts of the complex number: ";
        cin >> real >> imaginary;
        cout << "Modulus of the complex number is: " << sqrt(real * real + imaginary * imaginary) << endl;
    }

    void calculateArgument() {
        cout << "Enter the real and imaginary parts of the complex number: ";
        cin >> real >> imaginary;
        double argument = atan2(imaginary, real); // atan2 returns the principal value of the argument in radians
        cout << "Argument (phase) of the complex number is: " << argument << " radians" << endl;
    }

    void calculateSquareRoot() {
        cout << "Enter the real and imaginary parts of the complex number: ";
        cin >> real >> imaginary;
        double mod = sqrt(real * real + imaginary * imaginary);
        double arg = atan2(imaginary, real);
        double sqrtMod = sqrt(mod);
        double sqrtArg = arg / 2.0;
        cout << "Square root of the complex number is: " << sqrtMod * cos(sqrtArg) << " + " << sqrtMod * sin(sqrtArg) << "i" << endl;
    }
};

int main() {
    ComplexCalculator cc;
    cc.calculation();
    return 0;
}
