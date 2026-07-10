#include<iostream>
using namespace std;
//Constructor, Destructor
class A{
public:
    A(){
    cout<<"Constructor Called"<<endl;
    }
    void Method_A(){
    cout<<"Method Called"<<endl;
    }

};
int main(){
   A A1;
   A1.Method_A();
}
