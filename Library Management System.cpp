#include <bits/stdc++.h>

using namespace std;

class Book {
public:
    Book(const string& title, const string& author, int year)
        : title(title), author(author), year(year) {}

    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    int getYear() const {
        return year;
    }

private:
    string title;
    string author;
    int year;
};

class Library {
public:
    void addBook(const Book& book) {
        books.push_back(book);
        cout << "Book added to the library.\n";
    }

    void displayBooks() const {
        cout << "Library Books:\n";
        for (const Book& book : books) {
            cout << "Title: " << book.getTitle() << "\n";
            cout << "Author: " << book.getAuthor() << "\n";
            cout << "Year: " << book.getYear() << "\n\n";
        }
    }

private:
    vector<Book> books;
};

int main() {
    Library library;

    // Adding books to the library
    library.addBook(Book("The Great Gatsby", "F. Scott Fitzgerald", 1925));
    library.addBook(Book("To Kill a Mockingbird", "Harper Lee", 1960));
    library.addBook(Book("1984", "George Orwell", 1949));

    // Displaying the library's books
    library.displayBooks();

    return 0;
}
