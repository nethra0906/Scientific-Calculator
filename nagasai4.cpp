#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

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
            cout << "\nNumber Converter Menu:\n";
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

int main() {
    NumberConverter converter;
    converter.runConverter();

    return 0;
}

