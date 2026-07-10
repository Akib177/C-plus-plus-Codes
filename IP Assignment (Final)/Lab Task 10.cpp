#include <iostream>
using namespace std;

class Car {
protected:
    string CarName;
    string CarID;
    string CarColor;
    double Price;
public:
  void  car(string name, string id, string color, double price){
         CarName=name;
         CarID=id;
         CarColor=color;
         Price=price;
        }

    void DisplayCarInfo() {
        cout << "Car Name: " << CarName << endl;
        cout << "Car ID: " << CarID << endl;
        cout << "Car Color: " << CarColor << endl;
        cout << "Car Price: $" << Price << endl;
    }
};

class TeslaAutopilot : public Car {
private:
    string CarType;
    float TaxPercentage;

public:
   void Tesla(string name, string id, string color, double price, string type, double tax){
         CarName=name;
         CarID=id;
         CarColor=color;
         Price=price;
         CarType=type;
         TaxPercentage=tax;

            }

    void DisplayTeslaInfo() {
        DisplayCarInfo();
        cout << "Car Type: " << CarType << endl;
        cout << "Tax Percentage: " << TaxPercentage << "%" << endl;
    }

    double FinalPrice() {
       cout<<"Final price after deduct tax: "<< Price - (Price * TaxPercentage / 100)<<endl;
    }
};

int main() {
 TeslaAutopilot T1;

 T1.car("Toyota","2561-6","Red Wine",45000);
 T1.Tesla("MODEL S","2356","RED",45000,"AUTONOMUS",5);
 T1.DisplayCarInfo();
 T1.DisplayTeslaInfo();
 T1.FinalPrice();

    return 0;
}
