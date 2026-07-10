
#include <iostream>
using namespace std;

struct Student {
    string id;
    int credit;
    float cgpa;
};

void printcgpa(Student students[], int size) {
    cout << "Students with CGPA more than 3.60:" << endl;
    for (int i = 0; i < size; i++) {
        if (students[i].cgpa > 3.60) {
            cout << "ID: " << students[i].id << endl;
        }
    }
}

void printcredit(Student students[], int size) {
    cout << "Students with more than 60 credits:" << endl;
    for (int i = 0; i < size; i++) {
        if (students[i].credit > 60) {
            cout << "ID: " << students[i].id << endl;
        }
    }
}

int main() {
    const int size = 5;
    Student students[size];

    students[0] = {"23-53177-3", 65, 3.8};
    students[1] = {"23-53176-3", 31, 3.4};
    students[2] = {"23-53178-3", 67, 3.9};
    students[3] = {"23-53179-3", 35, 2.9};
    students[4] = {"23-53180-3", 30, 3.7};



    printcgpa(students, size);
    printcredit(students, size);

    return 0;
}
