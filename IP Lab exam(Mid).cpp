#include<iostream>
using namespace std;
int main (){

 int a=6;
 int arr[a];
 double cgpa[a];
  for (int i=0; i<a; i++){
    cout<<"Enter student ID of student "<< i+1 <<": ";
    cin>> arr[i];
    cout << "Enter the CGPA of "<<i+1<< " student : ";
    cin>> cgpa[i];
  }
  for ( int i=0; i<a; i++){

    cout<< i+1<<"student ID ("<< arr[i]<<" and CGPA is : "<<cgpa[i]<<" so ";

     if (cgpa[i] < 2.50) {
            cout << "The student is a probation student" << endl;
        }
         else if (cgpa[i] >= 2.50 && cgpa[i] <= 3.84) {
            cout << "The student is a regular student" << endl;
        }
         else {
            cout << "The student is a scholarship student" << endl;
        }

  }



}
