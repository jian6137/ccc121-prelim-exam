#include <iostream>
#include <stdexcept>
using namespace std;

int transform(int a[], int n, int left, int right, int delta, int out[]) {
    if (n <= 0 || n > 100 || left < 0 || right >= n || left > right) {
        throw invalid_argument("invalid range");
    }

    for (int i = left; i <= right; ++i) {
        a[i] += delta;
    }

    int count = 0;
    for (int i = right; i >= left; --i) {
        out[count++] = a[i];
    }

    return count;
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

int main() {
    int a[100] = {};
    int out[100] = {};
    int n, left, right, delta;

    cout << "Enter n: ";
    cin >> n;
    if (n > 0 && n <= 100) {
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
    }

    cout << "Enter left, right, delta: ";
    cin >> left >> right >> delta;

    try {
        int count = transform(a, n, left, right, delta, out);
        cout << "count=" << count << ", a=";
        printArray(a, n);
        cout << ", out=";
        printArray(out, count);
        cout << '\n';
    } catch (const invalid_argument&) {
        cout << "invalid_argument\n";
    }

    return 0;
}
