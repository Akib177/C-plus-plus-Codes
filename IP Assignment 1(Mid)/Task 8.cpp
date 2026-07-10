 #include <iostream>
using namespace std;

int main() {
    int min, max;
    cout << "Enter the minimum number: ";
    cin >> min;
    cout << "Enter the maximum number: ";
    cin >> max;

    int Size = (max - min) + 1;
    int arr[Size];
    cout << "Elements of the array: ";
    for (int i = 0; i < Size; i++) {
        arr[i] = min;
        min++;
        cout << arr[i] << " ";
    }
    cout << endl;

    int even[Size];
    int a = 0;
    cout << "Elements that are even: ";
    for (int j = 0; j < Size; j++) {
        if (arr[j] % 2 == 0) {
            even[a] = arr[j];
            cout << even[a] << " ";
            a++;
        }
    }
    cout << endl;

    int odd[Size];
    int b = 0;
    cout << "Elements that are odd: ";
    for (int k = 0; k < Size; k++) {
        if (arr[k] % 2 != 0) {
            odd[b] = arr[k];
            cout << odd[b] << " ";
            b++;
        }
    }
    cout << endl;

    int prime[Size];
    int c = 0;
    cout << "Prime numbers: ";
    for (int l = 0; l < Size; l++) {
        bool is_prime = true;
        if (arr[l] <= 1) {
            is_prime = false;
        }
        else {
            for (int m = 2; m * m <= arr[l]; m++) {
                if (arr[l] % m == 0) {
                    is_prime = false;
                    break;
                }
            }
        }
        if (is_prime) {
            prime[c] = arr[l];
            cout << prime[c] << " ";
            c++;
        }
    }
    cout << endl;

    return 0;
}
