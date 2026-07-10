#include <iostream>
using namespace std;

int main() {
    float monthly_salary, mango_quantity, annual_salary, total_mango_cost;
    float mango_price = 350.0;
    float a = 15000.0;
    float c = 0.24;

    cout << "Enter your monthly salary: ";
    cin >> monthly_salary;

    cout << "Enter the quantity of mangoes you sold in 2022: ";
    cin >> mango_quantity;

    annual_salary = monthly_salary * 12;
    total_mango_cost = mango_quantity * mango_price;

    cout << "Your annual salary is: " << annual_salary << " Taka" << endl;
    cout << "The total cost of mangoes you sold in 2022 is: " << total_mango_cost << " Taka" << endl;

    if (total_mango_cost > a) {
      float bonus_amount = annual_salary * c;
        cout << "Congratulations! You have received a bonus of " << bonus_amount << " Taka" << endl;
        cout << "Your new annual salary with bonus is: " << annual_salary + bonus_amount << " Taka" << endl;
    }
     else {
        float required_mango_quantity = (a / mango_price) - mango_quantity;
        cout << "You needed to sell at least " << required_mango_quantity
             << " more kg of mangoes to receive the bonus and " ;
             float requirs_amount=15001-total_mango_cost;
             cout<<"You need to sell more "<<requirs_amount<<" TAKA"<<endl;
    }

    return 0;
}

