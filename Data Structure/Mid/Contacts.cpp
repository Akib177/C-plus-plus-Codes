#include <iostream>
using namespace std;

 struct Contact {
 public:

  string name;
  string contact;
  string group;

  Contact(){}

  Contact (string name, string contact, string group)
     : name(name), contact(contact), group(group){}

      void Display(){

         cout<<"Name: "<<name<<endl;
         cout<<"Contact: "<<contact<<endl;
         cout<<"Group: "<<group<<endl;

      }

 };

struct ContactList{


    static const int a= 1000;
    Contact contacts [a];
  Contact contacts1[a];
int contactcount =0;

 public :
    ContactList () : contactcount(0){}
        void addContact ( string name,  string contact,  string group) {
        if (contactcount < a) {
            contacts [contactcount] = Contact(name, contact, group);
            contactcount++;
             cout << "Contact added. " <<  endl;
        }
        else {
             cout << "Can not add contacts!" <<  endl;
        }
    }

    void displayContacts() {

            for (int i = 0; i < 1000; i++) {
                contacts[i].Display();
            }
        }


 void sortByGroup (string group){

   bool found = false;
    for (int i=0;i<contactcount; i++) {


            if (contacts [i].group<contacts[i+1].group ) {
                    contacts1[i] = contacts[i];

                 found=true;

            }
        }
    if (found==true){
    for (int i=0;i<1000;i++) {

         cout << contacts1[i].Display() <<  " ";
    }
}
else {
    cout<<"Sorry!!"<<endl;
}
}

 };






int main(){
    while(true){
cout<<"press 1 for add books."<<endl;
cout<<"press 2 for sort."<<endl;
cout<<"press 3 for display."<<endl;
cout<<"press 4 for exit."<<endl;
int b;
cin>>b;
cin.ignore();
if (b==1){
 ContactList c1;
  string name, contact, group;
      cout << "Enter the name: ";
     getline( cin, name);
     cout << "Enter the contact number: ";
     getline( cin, contact);
    cout << "Enter the group: ";
     getline( cin, group);
     cin.ignore();

    c1.addContact(name, contact, group);
}
 else if (b==3){
        ContactList c1;
    cout<<endl;
    cout << "Updated contactlist:" <<  endl;
    c1.displayContacts();
 }
else if (b==2){
    string group;
        cout<<"Enter the group: ";
    getline( cin, group);
     ContactList c1;
     c1.sortByGroup(group);
}
else if (b==4){
break;
}
    }


return 0;
}
