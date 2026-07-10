#include <iostream>
#include <cstring>
using namespace std;
void StringSearch(string Name, string flower[8]) {
    bool found = false;
    for (int i = 0; i < 8; ++i) {
        if (flower[i] == Name) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "The flower name is present in the array" << endl;
    }

    else {
        cout << "The flower name is not present in the array" << endl;
    }
}

int main() {
     string Name;
     string flower[8];
     cout << "Enter 8 flower names: ";
     for(int i = 0; i<8; i++) {
        cin >> flower[i];
     }
     cout << "Enter a flower name to search: ";
     cin>>Name;
     StringSearch(Name,flower);
}
