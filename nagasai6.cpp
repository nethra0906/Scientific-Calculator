#include <iostream>
#include <cmath>
using namespace std;

class EquationSolver {
public:
    void solve() {
        int choice;
        while (true) {
            cout << "\nEquation Solver Menu:\n";
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

int main() {
    EquationSolver solver;
    solver.solve();

    return 0;
}

