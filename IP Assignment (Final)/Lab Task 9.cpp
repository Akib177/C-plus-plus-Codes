#include <iostream>
using namespace std;

class LibraryTokenReservation {
private:
    string FromTime;
    string ToTime;
protected:
    float TokenPrice;
private:
    int TokenQuantity;
public:
    void Tokenquantity(int quantity) {

        TokenQuantity = quantity;
    }

    void SetTokenInfo(string from, string to) {
        FromTime = from;
        ToTime = to;
    }

    void CalculatePrice() {
        float price ;
        if (FromTime == "9AM" && ToTime == "1PM") {
            price = 200 * TokenQuantity;
        }
         else if (FromTime == "12PM" && ToTime == "3PM") {
            price = 300 * TokenQuantity;
        }
         else if (FromTime == "1PM" && ToTime == "5PM") {
            price = 420 * TokenQuantity;
        }
         else if (FromTime == "3PM" && ToTime == "7PM") {
            price = 500 * TokenQuantity;
        }
         else {
            cout << "Please enter the right time" << endl;

        }

        cout << "Your total token cost is: " << price << " TK" << endl;
       Membership(price);
    }

    void Membership(float price) {
        cout << "Are you a member? (Yes/No): ";
        string answer;
        cin >> answer;

        if (answer == "Yes" || answer == "yes") {
            float dis_price = price-0.05 * price;
            cout << "After discount you have to pay: " << dis_price << " TK" << endl;
        }
        else {
            cout << "You have to pay the full amount: " << price << " TK" << endl;
        }
    }

    void DisplayTokenInfo() {
        cout << "Entry time: " << FromTime << endl;
        cout << "Exit time: " << ToTime << endl;
        cout << "Number of token: " << TokenQuantity << endl;
    }
};

int main() {
    LibraryTokenReservation L1;
    L1.SetTokenInfo("3PM", "7PM");
    L1.Tokenquantity(4);
    L1.DisplayTokenInfo();
    L1.CalculatePrice();

    return 0;
}
