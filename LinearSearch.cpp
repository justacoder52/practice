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

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    // int index = -1; // Initialize index to -1 (not found)

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            // index = i;
            // break; // Exit the loop once the element is found
            cout << "Element found at index: " << i << endl;
            return 0; // Exit after finding the element
        }
    }
    // cout <<index << endl;
    cout << "Element not found." << endl;

    return 0;
}