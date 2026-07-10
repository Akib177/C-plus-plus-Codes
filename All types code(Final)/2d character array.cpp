#include <iostream>
using namespace std;
int main()
{
    char arr[4][4];
    cout << "Enter alphabets: " << endl;
    for(int i = 0; i<4; i++) {
        for(int j=0; j<4;j++) {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    cout << "Inputted alphabets: " ;
    for(int i=0; i<4; i++) {
        for(int j=0;j<4;j++) {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
    for(int i = 0; i<4; i++) {
        for(int j = 0; j<4; j++) {
            if(arr[i][j]=='a'||arr[i][j]=='e'||arr[i][j]=='i'||arr[i][j]=='o'||arr[i][j]=='u'
               ||arr[i][j]=='A'||arr[i][j]=='E'||arr[i][j]=='I'||arr[i][j]=='O'||arr[i][j]=='U'){
                cout << arr[i][j] << " is vowel"<<endl;
            }
            else {
                cout << arr[i][j] << " is consonant" << endl;
            }
        }
    }
}
