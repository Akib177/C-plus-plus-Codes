#include<iostream>
using namespace std ;

struct StudentInfo{
    string Name;
    string ID;
    int marks[5],gpa[5];
    float total, cgpa, a;
    string sem;

void Set_StudentInfo(){
    cout<<"Enter student Name:";
    getline(cin,Name);

    cout<<"Enter student ID:";
    cin>>ID;

    cout<<"Enter student Semester:";
    cin>>sem;

      cout<<"Enter student marks for 5 subjects:";
    for (int i=0; i<5; i++){
        cin>>marks[i];
       if (marks[i]>=90&&marks[i]<=100) {
                    a =4.0;
                }
                 else if(marks[i]>=85&&marks[i]<90){
                    a=3.75;
                }

                 else if(marks[i]>=80&&marks[i]<85){
                    a=3.50;
                }

                 else if (marks[i]>=75&&marks[i]<80){
                    a =3.25;
                }

                 else if (marks[i]>=70&&marks[i]<75){
                    a=3.00;
                }

                 else if(marks[i]>=65&&marks[i]<70){
                    a=2.75;
                }

                 else if(marks[i]>=60&&marks[i]<65){
                    a=2.50;
                }

                 else {
                    a=0;
                }

        }
      cgpa=total/5;

    cout<<"Total CGPA: "<<cgpa<<endl;
    cin.ignore();
}


void Print_StudentInfo(){
    cout<<"Student Name: "<<Name<<endl;
    cout<<"Student ID: "<<ID<<endl;
    cout<<"Student CGPA: "<<cgpa<<endl;
    cout<<"Student Semester: "<<sem<<endl;
}
};


int main(){

int a;
cout<<"Enter the number of students:";
cin>>a;
cin.ignore();
StudentInfo students[a];

for (int i=0; i<a; i++){



 students[i].Set_StudentInfo();


  cout<<endl;
  cout<<"Student Information"<<endl;
  cout<<endl;

 students[i].Print_StudentInfo();
  cout<<endl;




}




 /*StudentInfo S1;

  S1.Set_StudentInfo();
  StudentInfo S2;
  S2.Set_StudentInfo();

  cout<<endl;
  cout<<"Student Information"<<endl;
  cout<<endl;

  S1.Print_StudentInfo();
  cout<<endl;

  S2.Print_StudentInfo();
*/

return 0;

}
