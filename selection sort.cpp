#include <iostream>
using namespace std;

// Selection Sort using dynamic array
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;

        // Find the minimum element in the unsorted portion
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum with the current element
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n]; // Dynamic memory allocation

    cout << "Enter elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Original array: ";
    printArray(arr);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr);

    
    return 0;
}
