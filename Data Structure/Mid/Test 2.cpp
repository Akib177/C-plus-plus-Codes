#include <iostream>
using namespace std;
#include <string>

struct Book {
public:
     string title;
     string author;
     string bookType;
     int prize;
    Book() {}

    Book( string t,  string a,  string bt,int p): title(t), author(a), bookType(bt) ,prize(p) {}

    void display() {
        cout << "Title: " << title << ", Author: " << author << ", Type: " << bookType << "prize" <<prize<< endl;
    }
};

struct Booklist {
private:
    static const int TOTAL_BOOKS = 100;
    Book books[TOTAL_BOOKS];
    int uniquebookCount;

public:
    Booklist() :uniquebookCount(0) {}

    void addBook( string title,  string author,  string bookType,int prize) {
        if (uniquebookCount <TOTAL_BOOKS) {
            books[uniquebookCount] = Book(title, author, bookType,prize);
            uniquebookCount++;
             cout << "Book added. " <<  endl;
        } else {
             cout << "Can not add books!" <<  endl;
        }
    }

    void displayBooks() {
        if (uniquebookCount == 0) {
             cout << "The booklist is empty." <<  endl;
        } else {
            for (int i = 0; i <uniquebookCount; ++i) {
                books[i].display();
            }
        }
    }

    void searchByName( string title) {
        bool flag = false;
        for (int i = 0; i <uniquebookCount; ++i) {
            if (books[i].title == title) {
                books[i].display();
                flag = true;
            }
        }
        if (!flag) {
              cout << "No book found with the title '" << title << "'." <<  endl;
        }
    }
};

int main() {
    Booklist b;


    b.addBook("raibow fish", "Maurice pfister", "Story",150);
    b.addBook("why a son need a dad", "gragory L lang", "story",200);


     cout << "Current booklist:" <<  endl;
   b.displayBooks();


     string title, author, bookType,prize;
      cout << "Enter the title : ";
     getline( cin, title);
     cout << "Enter the author name: ";
     getline( cin, author);
    cout << "Enter the type of the book : ";
     getline( cin, bookType);
     cout<<"Enter book prize:";
    cin>>prize;
b.addBook(title, author, bookType,prize);


    cout<<endl;

   b.displayBooks();


     cout << "Enter a title to search for: ";
    getline( cin, title);
    b.searchByName(title);
    }
