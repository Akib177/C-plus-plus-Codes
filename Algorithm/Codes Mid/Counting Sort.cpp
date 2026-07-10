#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int A[] = {1, 4, 1, 2, 7, 5, 10, 2};
    int n = sizeof(A) / sizeof(A[0]);

    int max = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }

    int C[max + 1];
    memset(C, 0, sizeof(C));

    for (int i = 0; i < n; i++) {
        C[A[i]]++;
    }

    for (int i = 1; i <= max; i++) {
        C[i] += C[i - 1];
    }

    int B[n];
    for (int i = n - 1; i >= 0; i--) {
        B[C[A[i]] - 1] = A[i];
        C[A[i]]--;
    }

    for (int i = 0; i < n; i++) {
        A[i] = B[i];
    }

    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
