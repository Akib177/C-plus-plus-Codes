#include <iostream>
#include <string>
using namespace std;

struct Book {
public:
     string title;
     string author;
     string bookType;

    Book() {}

    Book( string t,  string a,  string bt)
        : title(t), author(a), bookType(bt) {}

    void display() {
        cout << "Title: " << title << ", Author: " << author << ", Type: " << bookType <<  endl;
    }
};

struct BooklistManager {
public:
    static const int a = 100;
    Book books[a];
    int bookCount;

public:
    BooklistManager() : bookCount(0) {}

    void addBook( string title,  string author,  string bookType) {
        if (bookCount < a) {
            books[bookCount] = Book(title, author, bookType);
            bookCount++;
             cout << "Book added. " <<  endl;
        } else {
             cout << "Can not add books!" <<  endl;
        }
    }

    void displayBooks() {
        if (bookCount == 0) {
             cout << "The booklist is empty." <<  endl;
        } else {
            for (int i = 0; i < bookCount; i++) {
                books[i].display();
            }
        }
    }

    void searchByTitle( string title) {
        bool found = false;
        for (int i = 0; i < bookCount; i++) {
            if (books[i].title == title) {
                books[i].display();
                found = true;
            }
        }
        if (!found) {
              cout << "No book found with the title '" << title << "'." <<  endl;
        }
    }
};

int main() {
    BooklistManager manager;


    manager.addBook("Thakurmar Jhuli", " Dakshinaranjan Mitra Majumder", "Story");
    cout<<endl;
    manager.addBook("Abol Tabol", "Sukumar Ray", "Poem");


     cout << "Current booklist:" <<  endl;
    manager.displayBooks();


     string title, author, bookType;
      cout << "Enter the title of the book: ";
     getline( cin, title);
     cout << "Enter the author of the book: ";
     getline( cin, author);
    cout << "Enter the type of the book (e.g., Story, Poem, Novel): ";
     getline( cin, bookType);

    manager.addBook(title, author, bookType);

    cout<<endl;
    cout << "Updated booklist:" <<  endl;
    manager.displayBooks();


     cout << "Enter a title to search for: ";
    getline( cin, title);
    manager.searchByTitle(title);

    return 0;
}
