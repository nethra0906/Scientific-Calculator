#include <iostream>

using namespace std;

class MatrixOperations {
public:
    void displayMenu() {
        cout << "Press 0 to terminate program\n";
        cout << "Press 1 to add matrices\n";
        cout << "Press 2 to subtract matrices\n";
        cout << "Press 3 to multiply matrices\n";
        cout << "Press 4 to find out determinant of a matrix\n";
    }

    void run() {
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

int main() {
    MatrixOperations calculator;
    calculator.run();
    return 0;
}
