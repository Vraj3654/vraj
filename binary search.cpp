#include <iostream>
#include <algorithm> // For std::binary_search
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 8, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Element to be searched
    int target = 8;

    // Use binary_search on the array
    if (binary_search(arr, arr + n, target)) {
        cout << target << " found.";
    } else {
        cout << target << " NOT found.";
    }

    return 0;
}
