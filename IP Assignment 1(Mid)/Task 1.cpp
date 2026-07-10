#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter Your Physics Marks: ";
    cin>>a;
    if (a >= 80 && a<=100){
        cout<<"Your Grade in Physics is A+";
    }
    else if (a >= 70 && a<=79.99){
        cout<<"Your Grade in Physics is A";
    }
    else if (a >=60 && a<=69.99){
        cout<<"Your Grade in Physics is B+";
    }
    else if (a >=50 && a<=59.99){
        cout<<"Your Grade in Physics is B";
    }
    else if (a <=50){
        cout<<"Your Grade in Physics is F";
    }
    else{
        cout<<"Invalid Number"<<endl;
    }
    cout<<endl;
    cout<<endl;
cout<<"Enter Your Chemistry Marks: ";
    cin>>b;
    if (b >= 80 && b<=100){
        cout<<"Your Grade in Chemistry is A+";
    }
    else if (b >= 70 && b<=79.99){
        cout<<"Your Grade in Chemistry is A";
    }
    else if (b >=60 && b<=69.99){
        cout<<"Your Grade in Chemistry is B+";
    }
    else if (b >=50 && b<=59.99){
        cout<<"Your Grade in Chemistry is B";
    }
    else if (b <=50){
        cout<<"Your Grade in Chemistry is F";
    }
    else{
        cout<<"Invalid Number"<<endl;
    }
    cout<<endl;
    cout<<endl;
cout<<"Enter Your Math Marks: ";
    cin>>c;
    if (c >= 80 && c<=100){
        cout<<"Your Grade in Math is A+";
    }
    else if (c >= 70 && c<=79.99){
        cout<<"Your Grade in Math is A";
    }
    else if (c >=60 && c<=69.99){
        cout<<"Your Grade in Math is B+";
    }
    else if (c >=50 && c<=59.99){
        cout<<"Your Grade in Math is B";
    }
    else if (c <=50){
        cout<<"Your Grade in Math is F";
    }
    else{
        cout<<"Invalid Number"<<endl;
    }
 return 0;
}
