#include <iostream>
using namespace std;

struct Complex {
    double r;
    double i;
};


Complex add(Complex c1, Complex c2 ) {
    Complex result;
    result.r = c1.r + c2.r;
    result.i = c1.i + c2.i;
     return result;
}


Complex subtract(Complex c1, Complex c2 ) {
    Complex result;
    result.r = c1.r - c2.r;
    result.i = c1.i - c2.i;
     return result;
}


Complex multiply(Complex c1, Complex c2) {
    Complex result;
    result.r = c1.r * c2.r - c1.i * c2.i;
    result.i = c1.r * c2.i + c1.i * c2.r;
     return result;
}

Complex divide(Complex c1, Complex c2) {
    Complex result;
    double a = c2.r * c2.r + c2.i* c2.i;
    result.r = (c1.r * c2.r + c1.i* c2.i)/a;
    result.i = (c1.i * c2.r - c1.r* c2.i) /a;
     return result;
}



int main() {
    Complex a,b, result;
    cout << "Enter the two part of 1st number: ";
    cin >> a.r >> a.i;

    cout << "Enter the two part of 2nd number: ";
    cin >> b.r >> b.i;

    result = add(a, b);
    cout << "Addition: " << result.r << " + " << result.i << "i" << endl;

    result = subtract(a,b);
    cout << "Subtraction: " <<  result.r << " + " << result.i << "i" << endl;

    result = multiply(a,b);
    cout << "Multiplication: " <<  result.r << " + " << result.i << "i" << endl;

    result = divide(a,b);
    cout << "Division: " <<  result.r << " + " << result.i << "i" << endl;

    return 0;
}
