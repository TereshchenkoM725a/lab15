#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int n = 20;
    double a[n], temp;

    srand(time(0));

    cout << "Initial array:\n";
    for (int i = 0; i < n; i++) {
        a[i] = (rand() % 200 - 100) / 10.0;
        cout << setw(6) << a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            int intPartI = (int)a[i];
            int intPartJ = (int)a[j];

            if (intPartI > 1 && intPartJ <= 1) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "\n\nArray after transformation:\n";
    for (int i = 0; i < n; i++) {
        cout << setw(6) << a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "\n\nSorted array in ascending order:\n";
    for (int i = 0; i < n; i++) {
        cout << setw(6) << a[i];
    }

    cout << endl;

    return 0;
}