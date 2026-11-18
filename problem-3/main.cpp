#include <iostream>
#include <stdexcept>
using namespace std;

int bumpColumn(int grid[][8], int rows, int cols, int col, int amount, int out[]) {
    if (rows < 1 || rows > 8 || cols < 1 || cols > 8 || col < 0 || col >= cols) {
        throw invalid_argument("invalid column");
    }

    for (int r = 0; r < rows; ++r) {
        grid[r][col] += amount;
        out[r] = grid[r][col];
    }

    return rows;
}

void printArray(const int arr[], int n) {
    cout << '{';
    for (int i = 0; i < n; ++i) {
        if (i > 0) {
            cout << ',';
        }
        cout << arr[i];
    }
    cout << '}';
}

void printGrid(const int grid[][8], int rows, int cols) {
    cout << '{';
    for (int r = 0; r < rows; ++r) {
        if (r > 0) {
            cout << ',';
        }
        printArray(grid[r], cols);
    }
    cout << '}';
}

int main() {
    int grid[8][8] = {};
    int out[8] = {};
    int rows, cols, col, amount;

    cout << "Enter rows and cols: ";
    cin >> rows >> cols;
    if (rows >= 1 && rows <= 8 && cols >= 1 && cols <= 8) {
        cout << "Enter " << rows << "x" << cols << " grid:\n";
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                cin >> grid[r][c];
            }
        }
    }

    cout << "Enter col and amount: ";
    cin >> col >> amount;

    try {
        int ret = bumpColumn(grid, rows, cols, col, amount, out);
        cout << "return " << ret << ", out=";
        printArray(out, ret);
        cout << ", grid=";
        printGrid(grid, rows, cols);
        cout << '\n';
    } catch (const invalid_argument&) {
        cout << "invalid_argument\n";
    }

    return 0;
}
