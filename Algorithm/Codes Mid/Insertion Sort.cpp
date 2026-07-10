#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int startingIndex = 1; startingIndex < n; startingIndex++) {
        int elementOnHand = arr[startingIndex];
        int currentIndex = startingIndex - 1;

        while (currentIndex >= 0 && arr[currentIndex] > elementOnHand) {
            arr[currentIndex + 1] = arr[currentIndex];
            currentIndex--;
        }
        arr[currentIndex + 1] = elementOnHand;

        cout << "Iteration " << startingIndex << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {13, 17, 6, 9, 2, 76, 35};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Initial Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertionSort(arr, n);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
