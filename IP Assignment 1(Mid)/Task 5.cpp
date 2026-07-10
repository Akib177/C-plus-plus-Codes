 #include <iostream>
using namespace std;
int main() {
    string str1, str2;
    cout<<"Enter a string; ";
    cin >> str1;

    for (int i = str1.size() - 1; i >= 0; i--)
    {
        str2 += str1[i];
    }

    cout << "The reversed form of the string : " << str2 << endl;

    if (str1 == str2)
    {
        cout << "It's a Palindrome." << endl;
    }
    else
    {
        cout << "It's not a Palindrome." << endl;
    }

    return 0;
}
