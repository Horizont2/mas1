#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Введіть розмір першого масиву: ";
    cin >> n1;
    int arr1[n1];
    cout << "Введіть елементи першого масиву: ";
    for (int i = 0; i < n1; ++i) {
        cin >> arr1[i];
    }
    cout << "Введіть розмір другого масиву: ";
    cin >> n2;
    int arr2[n2];
    cout << "Введіть елементи другого масиву: ";
    for (int i = 0; i < n2; ++i) {
        cin >> arr2[i];
    }
    int result[n1 + n2];
    int j = 0;
    for (int i = 0; i < n1; ++i) {
        if (arr1[i] > 0) {
            result[j++] = arr1[i];
        }
    }
    for (int i = 0; i < n2; ++i) {
        if (arr2[i] > 0) {
            result[j++] = arr2[i];
        }
    }
    for (int i = 0; i < n1; ++i) {
        if (arr1[i] == 0) {
            result[j++] = arr1[i];
        }
    }
    for (int i = 0; i < n2; ++i) {
        if (arr2[i] == 0) {
            result[j++] = arr2[i];
        }
    }
    for (int i = 0; i < n1; ++i) {
        if (arr1[i] < 0) {
            result[j++] = arr1[i];
        }
    }
    for (int i = 0; i < n2; ++i) {
        if (arr2[i] < 0) {
            result[j++] = arr2[i];
        }
    }
    cout << "Об'єднаний масив: ";
    for (int i = 0; i < n1 + n2; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
