#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    int value;
cout << "Enter 5 number:";

    for (int i = 0; i < 5; i++) {

        cin >> value;
        sum = sum + value;
    }

   float avg = sum / 5;
    cout << "The average is: " << avg << endl;

    return 0;
}
