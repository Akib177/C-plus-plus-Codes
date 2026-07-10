#include <iostream>
#include <climits>
using namespace std;

int mergeCallCount = 0;

void printArray(int A[], int size) {
    for (int i = 0; i < size; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

void merge(int A[], int start, int mid, int endd) {
    mergeCallCount++;
    int n1 = mid - start + 1;
    int n2 = endd - mid;


    int* L = new int[n1 + 1];
    int* R = new int[n2 + 1];


    for (int i = 0; i < n1; i++)
        L[i] = A[start + i];
    for (int j = 0; j < n2; j++)
        R[j] = A[mid + 1 + j];
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    cout << "Merge call #" << mergeCallCount << ":\n";
    cout << "  Start index: " << start << ", End index: " << endd << ", Mid index: " << mid << endl;
    cout << "  Left array size (n1): " << n1 << ", Right array size (n2): " << n2 << endl;
    cout << "  Left array: ";
    for (int i = 0; i < n1; i++) cout << L[i] << " ";
    cout << endl;
    cout << "  Right array: ";
    for (int j = 0; j < n2; j++) cout << R[j] << " ";
    cout << endl;
    int i = 0, j = 0;
    for (int k = start; k <= endd; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
    cout << "  Array after merge #" << mergeCallCount << ": ";
    printArray(A, endd + 1);
    delete[] L;
    delete[] R;
}

void mergeSort(int A[], int start, int endd) {
    if (start < endd) {
        int mid = start + (endd - start) / 2;
        mergeSort(A, start, mid);
        mergeSort(A, mid + 1, endd);
        merge(A, start, mid, endd);
    }
}
int main() {
    int A[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(A) / sizeof(A[0]);
    cout << "Original array: ";
    printArray(A, n);
    mergeSort(A, 0, n - 1);
    cout << "Final sorted array: ";
    printArray(A, n);
    cout << "\nTotal number of merge calls: " << mergeCallCount << endl;
}
