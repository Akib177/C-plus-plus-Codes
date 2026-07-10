#include <iostream>
using namespace std;

int main() {
    string PLAYER_NAME = "Sakib Al Hasan";
    int run1, run2, run3, run4;
    float average_Last_4_Matches;
    float average_2022;


    cout << "Enter runs for the 1st ODI match: ";
    cin >> run1;
    cout << "Enter runs for the 2nd ODI match: ";
    cin >> run2;
    cout << "Enter runs for the 3rd ODI match: ";
    cin >> run3;
    cout << "Enter runs for the 4th ODI match: ";
    cin >> run4;


    average_Last_4_Matches = (run1 + run2 + run3 + run4) / 4;


    cout << "Enter average ODI run of " << PLAYER_NAME << " in 2022: ";
    cin >> average_2022;


    if (average_Last_4_Matches > average_2022) {
        cout << "The performance of the player " << PLAYER_NAME << " is improving." << endl;
    }

    else {
        cout << "The performance of the player " << PLAYER_NAME << " is deteriorating." << endl;
    }

    return 0;
}
