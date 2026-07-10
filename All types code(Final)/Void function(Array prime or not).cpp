#include <iostream>
using namespace std;

void prime(int number) {
    if (number <= 1) {
        cout << number << " is not a prime number." << endl;
        return;
    }

    bool isPrime = true;

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    prime(num);
    
}
