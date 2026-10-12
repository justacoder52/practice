#include <iostream>
using namespace std;

int main() {
    int arr[1000];
    int n;
    cout << "Enter number of elements (max 1000): ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (int i = n - 1; i >= 0; i--) { // Iterate in reverse order
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}