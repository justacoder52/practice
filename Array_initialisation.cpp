#include <iostream>
using namespace std;

// int main() {
//     int arr[10] = {10, 20, 30, 40, 50};

//     cout << "Array elements are: ";
//     for (int i = 0; i < 10; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    for (int i = 0; i < size; i++) { // Iterate through all elements
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}