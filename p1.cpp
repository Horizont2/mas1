#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;
    int arr[n];
    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int j = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }
    while (j < n) {
        arr[j++] = -1;
    }
    cout << "Стиснутий масив: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
