#include <iostream>

using namespace std;

int main() {
    int n;
    setlocale(LC_ALL, "Ru");
    cout << "Введите высоту треугольника: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
