#include<iostream>
#include<cmath>
#include<string>
#include <cstdio>
using namespace std;

class Conversions
{
    public:
    float lengthInMeters, weightInKilograms, timeInSeconds, temperatureInKelvin, currentInAmperes;
    void unit_coversions(){
    int choice;
    while (true)
    {
    cout << "UNIT CONVERSIONS MENU" << endl;
    cout << "PRESS 1.TO CONVERT m TO cm.   PRESS 2.TO CONVERT kg TO g." << endl;
    cout << "PRESS 3.TO CONVERT s TO cs.   PRESS 4.TO CONVERT Kelvin TO celsius" << endl;
    cout << "PRESS 5.TO CONVERT amperes.   PRESS 6.TO CONVERT radians TO degree" << endl;
    cout << "PRESS 0.TO EXIT" << endl;
    cout << "\nEnter Your Choice: ";
    cin >> choice;


    if (choice==1)
    {
        cout << "Enter length in meters: ";
        cin >> lengthInMeters;
        cout << "Length in centimeters: " << lengthInMeters * 100.0f <<endl;
    }

    else if(choice==2)
    {
        cout << "Enter weight in kilograms: ";
        cin >> weightInKilograms;
        cout << "Weight in grams: " << weightInKilograms * 1000.0f <<endl;
    }
    else if(choice==3)
    {
        cout << "Enter time in seconds: ";
        cin >> timeInSeconds;
        cout << "Time in centiseconds: " << timeInSeconds * 100.0f << endl;
    }
    else if(choice==4)
    {
        cout << "Enter temperature in kelvin: ";
        cin >> temperatureInKelvin;
        cout << "Temperature in celsius: " << (temperatureInKelvin - 273.15f) << endl;
    }
    else if(choice==5)
    {
        cout << "Enter current in amperes: ";
        cin >> currentInAmperes;
        cout << "Current in amperes: " << currentInAmperes * 10.0f << endl;
    }
    else if(choice==6)
    {
        cout << "Enter radians: ";
        float radians;
        cin >> radians;
        cout << "Degrees: " << radians * 180.0f / M_PI <<endl;
    }
    else if(choice==0)
    {
        break;
    }
    }
    }
};

class ScientificCalculator {
public:
    void runCalculator() {
        int choice; 

        do {
            cout << "\nSCIENTIFIC CALCULATOR MENU:\n";
            cout << "1. Logarithm (base 10)\t";
            cout << "2. Natural Logarithm (base e)\t";
            cout << "3. Exponential (e^x)\n";
            cout << "4. Sine\t";
            cout << "5. Cosine\t";
            cout << "6. Tangent\t";
            cout << "7. Cosecant\t";
            cout << "8. Secant\t";
            cout << "9. Cotangent\n";
            cout << "10. Arcsine\t";
            cout << "11. Arccosine\t";
            cout << "12. Arctangent\t";
            cout << "13. Arccosecant\t";
            cout << "14. Arcsecant\t";
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

class NumberConverter {
public:
    void decimalToBinary(int decimal) {
        cout << "Binary: ";
        if (decimal == 0) {
            cout << "0";
            return;
        }
        int index = 0;
        int binary[32];
        while (decimal > 0) {
            binary[index++] = decimal % 2;
            decimal /= 2;
        }
        for (int i = index - 1; i >= 0; i--) {
            cout << binary[i];
        }
        cout << endl;
    }

    void decimalToOctal(int decimal) {
        printf("Octal: %o\n", decimal);
    }

    void decimalToHexadecimal(int decimal) {
        printf("Hexadecimal: %X\n", decimal);
    }

    void binaryToDecimal(string binary) {
        int decimal = stoi(binary, nullptr, 2);
        cout << "Decimal: " << decimal << endl;
    }

    void binaryToOctal(string binary) {
        int decimal = stoi(binary, nullptr, 2);
        decimalToOctal(decimal);
    }

    void binaryToHexadecimal(string binary) {
        int decimal = stoi(binary, nullptr, 2);
        decimalToHexadecimal(decimal);
    }

    void octalToDecimal(string octal) {
        int decimal = stoi(octal, nullptr, 8);
        cout << "Decimal: " << decimal << endl;
    }

    void octalToBinary(string octal) {
        int decimal = stoi(octal, nullptr, 8);
        decimalToBinary(decimal);
    }

    void octalToHexadecimal(string octal) {
        int decimal = stoi(octal, nullptr, 8);
        decimalToHexadecimal(decimal);
    }

    void hexadecimalToDecimal(string hexadecimal) {
        int decimal = stoi(hexadecimal, nullptr, 16);
        cout << "Decimal: " << decimal << endl;
    }

    void hexadecimalToBinary(string hexadecimal) {
        int decimal = stoi(hexadecimal, nullptr, 16);
        decimalToBinary(decimal);
    }

    void hexadecimalToOctal(string hexadecimal) {
        int decimal = stoi(hexadecimal, nullptr, 16);
        decimalToOctal(decimal);
    }

    void runConverter() {
        int choice = -1;
        while (choice != 0) {
            cout << "\nNUMBER CONVERTER MENU:\n";
            cout << "1. Decimal to Binary\n";
            cout << "2. Decimal to Octal\n";
            cout << "3. Decimal to Hexadecimal\n";
            cout << "4. Binary to Decimal\n";
            cout << "5. Binary to Octal\n";
            cout << "6. Binary to Hexadecimal\n";
            cout << "7. Octal to Decimal\n";
            cout << "8. Octal to Binary\n";
            cout << "9. Octal to Hexadecimal\n";
            cout << "10. Hexadecimal to Decimal\n";
            cout << "11. Hexadecimal to Binary\n";
            cout << "12. Hexadecimal to Octal\n";
            cout << "0. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            string input;
            switch (choice) {
                case 1:
                    cout << "Enter a decimal number: ";
                    cin >> input;
                    decimalToBinary(stoi(input));
                    break;
                case 2:
                    cout << "Enter a decimal number: ";
                    cin >> input;
                    decimalToOctal(stoi(input));
                    break;
                case 3:
                    cout << "Enter a decimal number: ";
                    cin >> input;
                    decimalToHexadecimal(stoi(input));
                    break;
                case 4:
                    cout << "Enter a binary number: ";
                    cin >> input;
                    binaryToDecimal(input);
                    break;
                case 5:
                    cout << "Enter a binary number: ";
                    cin >> input;
                    binaryToOctal(input);
                    break;
                case 6:
                    cout << "Enter a binary number: ";
                    cin >> input;
                    binaryToHexadecimal(input);
                    break;
                case 7:
                    cout << "Enter an octal number: ";
                    cin >> input;
                    octalToDecimal(input);
                    break;
                case 8:
                    cout << "Enter an octal number: ";
                    cin >> input;
                    octalToBinary(input);
                    break;
                case 9:
                    cout << "Enter an octal number: ";
                    cin >> input;
                    octalToHexadecimal(input);
                    break;
                case 10:
                    cout << "Enter a hexadecimal number: ";
                    cin >> input;
                    hexadecimalToDecimal(input);
                    break;
                case 11:
                    cout << "Enter a hexadecimal number: ";
                    cin >> input;
                    hexadecimalToBinary(input);
                    break;
                case 12:
                    cout << "Enter a hexadecimal number: ";
                    cin >> input;
                    hexadecimalToOctal(input);
                    break;
                case 0:
                    cout << "Exiting...\n";
                    break;
                default:
                    cerr << "Invalid choice! Please try again.\n";
                    break;
            }
        }
    }
};

class EquationSolver {
public:
    void solve() {
        int choice;
        while (true) {
            cout << "\nEQUATION SOLVER MENU:\n";
            cout << "1. 2D Linear (Two variables)\n";
            cout << "2. 3D Linear (Three variables)\n";
            cout << "3. 4D Linear (Four variables)\n";
            cout << "4. Quadratic (ax^2 + bx + c = 0)\n";
            cout << "0. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    solve2D();
                    break;
                case 2:
                    solve3D();
                    break;
                case 3:
                    solve4D();
                    break;
                case 4:
                    solveQuadratic();
                    break;
                case 0:
                    cout << "Exiting...\n";
                    return;
                default:
                    cout << "Invalid choice! Please try again.\n";
                    break;
            }
        }
    }

    double determinant(double mat[4][4], int n) {
        double det = 0;
        double temp[4][4];
        if (n == 2) {
            return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
        }
        else {
            for (int p = 0; p < n; p++) {
                int h = 0, k = 0;
                for (int i = 1; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        if (j == p)
                            continue;
                        temp[h][k] = mat[i][j];
                        k++;
                        if (k == n - 1) {
                            h++;
                            k = 0;
                        }
                    }
                }
                det = det + mat[0][p] * pow(-1, p) * determinant(temp, n - 1);
            }
        }
        return det;
    }

    void solve2D() {}

    void solve3D() {}

    void solve4D() {}

    void solveQuadratic() {
        double a, b, c;
        cout << "Enter coefficients for quadratic equation (ax^2 + bx + c = 0): ";
        cin >> a >> b >> c;

        if (a == 0) {
            if (b == 0) {
                if (c == 0) {
                    cout << "Infinite solutions (all real numbers)." << endl;
                } else {
                    cout << "No solution." << endl;
                }
            } else {
                double root = -c / b;
                cout << "Single real root: x = " << root << endl;
            }
        } else {
            double discriminant = b * b - 4 * a * c;
            if (discriminant > 0) {
                double root1 = (-b + sqrt(discriminant)) / (2 * a);
                double root2 = (-b - sqrt(discriminant)) / (2 * a);
                cout << "Two real roots: x1 = " << root1 << ", x2 = " << root2 << endl;
            } else if (discriminant == 0) {
                double root = -b / (2 * a);
                cout << "Single real root: x = " << root << endl;
            } else {
                double realPart = -b / (2 * a);
                double imaginaryPart = sqrt(-discriminant) / (2 * a);
                cout << "Complex roots: x1 = " << realPart << " + " << imaginaryPart << "i, "
                     << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
            }
        }
    }
};

class MatrixOperations {
public:
    void displayMenu() {
        cout << "MATRIX CALCULATOR MENU\n";
        cout << "Press 1 to add matrices\n";
        cout << "Press 2 to subtract matrices\n";
        cout << "Press 3 to multiply matrices\n";
        cout << "Press 4 to find out determinant of a matrix\n";
        cout << "Press 0 to terminate program\n";
    }

    void mcalculator() {
        int choice;
        while (true) {
            displayMenu();
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 0) {
                cout << "Terminating program...\n";
                break;
            } else if (choice == 1) {
                performMatrixOperation("addition");
            } else if (choice == 2) {
                performMatrixOperation("subtraction");
            } else if (choice == 3) {
                performMatrixOperation("multiplication");
            } else if (choice == 4) {
                findDeterminant();
            } else {
                cout << "Invalid choice. Please try again.\n";
            }
        }
    }

    void performMatrixOperation(const string& operation) {
        int rows1, cols1, rows2, cols2;
        cout << "Enter the number of rows and columns of the first matrix: ";
        cin >> rows1 >> cols1;
        cout << "Enter the number of rows and columns of the second matrix: ";
        cin >> rows2 >> cols2;

        double matrix1[10][10], matrix2[10][10], result[10][10];

        cout << "Enter elements of the first matrix:\n";
        readMatrix(matrix1, rows1, cols1);
        cout << "Enter elements of the second matrix:\n";
        readMatrix(matrix2, rows2, cols2);

        if (operation == "addition") {
            if (rows1 != rows2 || cols1 != cols2) {
                cout << "Matrices must have the same dimensions for addition.\n";
                return;
            }
            addMatrices(matrix1, matrix2, result, rows1, cols1);
        } else if (operation == "subtraction") {
            if (rows1 != rows2 || cols1 != cols2) {
                cout << "Matrices must have the same dimensions for subtraction.\n";
                return;
            }
            subtractMatrices(matrix1, matrix2, result, rows1, cols1);
        } else if (operation == "multiplication") {
            if (cols1 != rows2) {
                cout << "Number of columns of the first matrix must be equal to the number of rows of the second matrix for multiplication.\n";
                return;
            }
            multiplyMatrices(matrix1, matrix2, result, rows1, cols1, cols2);
        }

        cout << "Result of " << operation << ":\n";
        displayMatrix(result, rows1, cols2);
    }

    void readMatrix(double matrix[][10], int rows, int cols) {
        for (int i = 0; i < rows; ++i) {
            cout << "Enter elements of row " << i + 1 << " separated by space: ";
            for (int j = 0; j < cols; ++j) {
                cin >> matrix[i][j];
            }
        }
    }

    void displayMatrix(double matrix[][10], int rows, int cols) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << matrix[i][j] << "\t";
            }
            cout << endl;
        }
    }

    void addMatrices(double matrix1[][10], double matrix2[][10], double result[][10], int rows, int cols) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
    }

    void subtractMatrices(double matrix1[][10], double matrix2[][10], double result[][10], int rows, int cols) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result[i][j] = matrix1[i][j] - matrix2[i][j];
            }
        }
    }

    void multiplyMatrices(double matrix1[][10], double matrix2[][10], double result[][10], int rows1, int cols1, int cols2) {
        for (int i = 0; i < rows1; ++i) {
            for (int j = 0; j < cols2; ++j) {
                result[i][j] = 0;
                for (int k = 0; k < cols1; ++k) {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
    }

    void findDeterminant() {
        int order;
        cout << "Enter the order of the square matrix: ";
        cin >> order;

        double matrix[10][10];
        cout << "Enter elements of the square matrix:\n";
        readMatrix(matrix, order, order);

        double det = determinant(matrix, order);

        cout << "Determinant: " << det << endl;
    }

    double determinant(double matrix[][10], int order) {
        if (order == 1) {
            return matrix[0][0];
        } else {
            double det = 0;
            for (int i = 0; i < order; ++i) {
                double minor[10][10];
                getMinor(matrix, minor, 0, i, order);
                det += matrix[0][i] * (i % 2 == 0 ? 1 : -1) * determinant(minor, order - 1);
            }
            return det;
        }
    }

    void getMinor(double matrix[][10], double minor[][10], int row, int col, int order) {
        int minorRow = 0, minorCol = 0;
        for (int i = 0; i < order; ++i) {
            if (i != row) {
                minorCol = 0;
                for (int j = 0; j < order; ++j) {
                    if (j != col) {
                        minor[minorRow][minorCol++] = matrix[i][j];
                    }
                }
                minorRow++;
            }
        }
    }
};

class basic_calculator{
public:
    float number1;
    float number2;
    void basic_calc(){
        int choice;
        while(1){
            cout<<"Options:"<<endl;
            cout<<"Click 1. To Add two numbers"<<endl;
            cout<<"Click 2. To Subtract two numbers"<<endl;
            cout<<"Click 3. To Multiply two numbers"<<endl;
            cout<<"Click 4. To Divide two numbers"<<endl;
            cout<<"Click 5. To Calculate square of a number"<<endl;
            cout<<"Click 6. To Calculate square root of a number"<<endl;
            cout<<"Click 7. To Calculate cube of a number"<<endl;
            cout<<"Click 8. To Calculate cube root of a number"<<endl;
            cout<<"Click 0. To Exit the program"<<endl;
            cout<<"Enter your choice"<<endl;
            cout<<"What whould you like to do? "<<endl;
            cin>>choice;
            if(choice==1){
                cout<<"Enter the two numbers:";
                cin>>number1>>number2;
                cout<<"Addition of two numbers is:"<<number1+number2<<endl;
            }
            else if(choice==2){
                cout<<"Enter the two numbers:";
                cin>>number1>>number2;
                cout<<"Subtraction of two numbers is:"<<number1-number2<<endl;
            }
            else if(choice==3){
                cout<<"Enter the two numbers:";
                cin>>number1>>number2;
                cout<<"Multiplication of two numbers is:"<<number1*number2<<endl;
            }
            else if(choice==4){
                cout<<"Enter the two numbers:";
                cin>>number1>>number2;
                cout<<"Division of two numbers is:"<<number1/number2<<endl;
            }
            else if(choice==5){
                cout<<"Enter the number:";
                cin>>number1;
                cout<<"Square of the number is:"<<number1*number1<<endl;
            }
            else if(choice==6){
                cout<<"Enter the number:";
                cin>>number1;
                cout<<"Square root of the number is:"<<sqrt(number1)<<endl;
            }
            else if(choice==7){
                cout<<"Enter the number:";
                cin>>number1;
                cout<<"Cube of the number is:"<<number1*number1*number1<<endl;
            }
            else if(choice==8){
                cout<<"Enter the number:";
                cin>>number1;
                cout<<"Cube root of the number is:"<<cbrt(number1)<<endl;
            }
            else if(choice==0){
                break;
            }
            else {
                cout<<"Invalid choice!"<<endl;
            }
        }
    }
};

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
        double argument = atan2(imaginary, real);
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

class inhrt:public Conversions,public ScientificCalculator,public NumberConverter,public EquationSolver,public MatrixOperations,public basic_calculator,public ComplexCalculator
{

};

int main() {

    inhrt obj;
    int choice;
    while (true)
    {
    cout << "\nMENU" << endl<<endl;
    cout << "PRESS 1.TO OPEN BASIC CALCULATOR"<<endl; cout<<"PRESS 2.TO OPEN SCIENTIFIC CALCULATOR." << endl;
    cout << "PRESS 3.TO OPEN COMPLEX NUMBERS CALCULATOR"<<endl;cout<<"PRESS 4.TO OPEN NUMBER SYSTEM CONVERTER" << endl;
    cout << "PRESS 5.TO OPEN MATRIX CALCULATOR"<<endl; cout<<"PRESS 6.TO OPEN EQUATION SOLVER" << endl;
    cout << "PRESS 7.TO OPEN UNIT CONVERTER" << endl;cout << "PRESS 0.TO EXIT" << endl;
    cout << "\nEnter Your Choice: ";
    cin >> choice;
    if (choice==1)
    {
        obj.basic_calc();
    }
    if(choice==2)
    {
        obj.runCalculator();
    }
    else if(choice==3)
    {
          obj.calculation(); 
    }
    else if(choice==4)
    {
        obj.runConverter();
        continue;
    }
    else if(choice==5)
    {
        obj.mcalculator();
    }
    else if(choice==6)
    {
        obj.solve();
        continue;
    }
    else if(choice==7)
    {
        obj.unit_coversions();
        continue;
    }
     else if(choice==0)
    {   cout<<"Exiting......."<<endl;
        exit(0);
    }
    }
    return 0;
}
