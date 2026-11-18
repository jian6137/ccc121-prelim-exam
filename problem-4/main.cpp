#include <iostream>
#include <stdexcept>
#include <algorithm>
using namespace std;

void rotateClockwise(int m[][8], int n) {
    if (n < 1 || n > 8) {
        throw invalid_argument("invalid size");
    }
    for (int r = 0; r < n; ++r) {
        for (int c = r + 1; c < n; ++c) {
            swap(m[r][c], m[c][r]);
        }
    }
    for (int r = 0; r < n; ++r) {
        for (int c = 0; c < n / 2; ++c) {
            swap(m[r][c], m[r][n - 1 - c]);
        }
    }
}

void printMatrix(const int m[][8], int n) {
    cout << "m={";
    for (int r = 0; r < n; ++r) {
        if (r > 0) {
            cout << ',';
        }
        cout << '{';
        for (int c = 0; c < n; ++c) {
            if (c > 0) {
                cout << ',';
            }
            cout << m[r][c];
        }
        cout << '}';
    }
    cout << '}';
}

int main() {
    int m[8][8] = {};
    int n;

    cout << "Enter n: ";
    cin >> n;
    if (n >= 1 && n <= 8) {
        cout << "Enter " << n << "x" << n << " matrix:\n";
        for (int r = 0; r < n; ++r) {
            for (int c = 0; c < n; ++c) {
                cin >> m[r][c];
            }
        }
    }

    try {
        rotateClockwise(m, n);
        printMatrix(m, n);
        cout << '\n';
    } catch (const invalid_argument&) {
        cout << "invalid_argument\n";
    }

    return 0;
}
