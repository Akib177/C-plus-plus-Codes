#include <iostream>
#include <string>
using namespace std;

int main() {
    string x = "GXTXAYB";
    string y = "AGGTAB";

    int m = x.length();
    int n = y.length();

    int c[m + 1][n + 1] = {0};
    char b[m + 1][n + 1] = {0};

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                c[i][j] = 0;
                b[i][j] = '-';
            }
             else if (x[i - 1] == y[j - 1]) {
                c[i][j] = c[i - 1][j - 1] + 1;
                b[i][j] = 'D';
            }
            else if (c[i - 1][j] >= c[i][j - 1]) {
                c[i][j] = c[i - 1][j];
                b[i][j] = 'U';
            }
             else {
                c[i][j] = c[i][j - 1];
                b[i][j] = 'L';
            }
        }
    }

    cout << "Length table (c):" << endl;
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Direction table (b):" << endl;
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
