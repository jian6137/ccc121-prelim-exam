#include <iostream>
using namespace std;

int removeValue(int a[], int& n, int target) {
    int removed = 0;
    for (int i = 0; i < n; ) {
        if (a[i] == target) {
            for (int j = i; j < n - 1; ++j) a[j] = a[j + 1];
            --n;
            ++removed;
        } else {
            ++i;
        }
    }
    return removed;
}

void printArray(const int a[], int n) {
    cout << '{';
    for (int i = 0; i < n; ++i) {
        if (i > 0) {
            cout << ',';
        }
        cout << a[i];
    }
    cout << '}';
}

int main() {
    int a[100] = {};
    int n, target;

    cout << "Enter n: ";
    cin >> n;
    if (n < 0) {
        n = 0;
    } else if (n > 100) {
        n = 100;
    }
    if (n > 0) {
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
    }

    cout << "Enter target: ";
    cin >> target;

    int removed = removeValue(a, n, target);
    cout << "return " << removed << ", n=" << n;
    if (n > 0) {
        cout << ", a[0.." << (n - 1) << "]=";
        printArray(a, n);
    }
    cout << '\n';

    return 0;
}
