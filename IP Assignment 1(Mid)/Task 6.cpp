#include <iostream>
using namespace std;

int main() {
    int n,messi_goals, neymar_goals;

    cout << "Enter the number of matches: ";
    cin >> n;

    cout << "Enter the number of goals scored by Lionel Messi: ";
    cin >> messi_goals;

    cout << "Enter the number of goals scored by Neymar da Silva Santos Junior: ";
    cin >> neymar_goals;

    float messi_avg = messi_goals / n;
    float neymar_avg = neymar_goals / n;

    cout << "Average goals scored by Lionel Messi: " << messi_avg << endl;
    cout << "Average goals scored by Neymar da Silva Santos Junior: " << neymar_avg << endl;

    if (messi_avg > neymar_avg) {
        cout << "Lionel Messi is a better player." << endl;
    } else if (neymar_avg > messi_avg) {
        cout << "Neymar da Silva Santos Junior is a better player." << endl;
    } else {
        cout << "Both players are equally good." << endl;
    }

    return 0;
}
