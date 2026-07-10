#include <iostream>
using namespace std;
void callbyvalue (int a){
    a = a + 7;
    cout << "Call by value: " << a << endl;
}
void callbyreference (int &b){
    b = b + 5;
    cout << "Call by reference : " << b << endl;
}
int main (){
    int value = 15;
    callbyvalue(value);
    cout << "After call by value: " << value << endl;

    int reference1 = 5;
    callbyreference(reference1);
    cout << "After reference: " << reference1 << endl;

    return 0;
}
