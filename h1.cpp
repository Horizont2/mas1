#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout << "Введіть 10 елементів масиву: ";
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }
    int arr1[5], arr2[5];
    for (int i = 0; i < 5; ++i) {
        arr1[i] = arr[i];
    }
    for (int i = 5; i < 10; ++i) {
        arr2[i - 5] = arr[i];
    }
    cout << "Перший масив: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Другий масив: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}
