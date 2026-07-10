/*Create a function called PosNeg(int num) which will check whether a number is positive or negative.
If a number is positive then it will print "The number is a positive number"
 and will call a function namely EvenOdd(int num) which will find out whether the number is Even or ODD.
  Otherwise, the PosNeg() function will print "The number is a negative number".*/

  #include<iostream>
  using namespace std;
          void EvenOdd(int num){

        if (num % 2==0){
                cout<<"Number is a even number."<<endl;

                }
        else {
            cout<<"Number is a odd number."<<endl;
        }
          }
  void PosNeg (int num){
     if (num<0){
        cout<<"Number is a negative number."<<endl;

     }
      else{
        cout<<"Number is a positive number."<<endl;
       EvenOdd(num);
        }
      }

int main(){
  cout<<"Enter a number: ";
  int num;
  cin>>num;
  PosNeg(num);

}
