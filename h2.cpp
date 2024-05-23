#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введіть розмір масивів: ";
    cin >> n;
    int arr1[n], arr2[n], result[n];
    cout << "Введіть елементи першого масиву: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }
    cout << "Введіть елементи другого масиву: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr2[i];
    }
    for (int i = 0; i < n; ++i) {
        result[i] = arr1[i] + arr2[i];
    }
    cout << "Результуючий масив: ";
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
