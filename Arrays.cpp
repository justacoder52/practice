#include <iostream>
using namespace std;

int main() {
    int a[1000];
    int n;
    cout << "Enter number of elements (max 1000): ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}