#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <vector>

using namespace std;

class Book
{
public:
    int bookID;
    string title;
    string author;
    float price;
    bool isIssued;

    Book(int id, string t, string a, float p) : bookID(id), title(t), author(a), price(p), isIssued(false) {}

    void display() const
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Book ID: " << bookID << endl;
        cout << "Price: " << price << endl;
        cout << "Status: " << (isIssued ? "Issued" : "Available") << endl;
    }

    void writeToFile(ofstream &file) const
    {
        file << "Details for " << title << "----" << endl;
        file << "Title: " << title << endl;
        file << "Author: " << author << endl;
        file << "Book ID: " << bookID << endl;
        file << "Price: " << price << endl;
        file << "Status: " << (isIssued ? "Issued" : "Available") << endl;
        file << "------------------------" << endl;
    }
};

class Library
{
private:
    vector<Book> books;
    string input;

    void loadBooksFromFile()
    {
        ifstream file("library.txt");
        if (!file.is_open())
            return;

        string line;
        int id;
        string title, author;
        float price;
        bool issued;

        while (getline(file, line))
        {
            if (line.find("Book ID: ") != string::npos)
            {
                id = stoi(line.substr(9));
                getline(file, title);  // Skip title line
                getline(file, author); // Skip author line
                getline(file, line);   // Price line
                price = stof(line.substr(8));
                getline(file, line); // Status line
                issued = (line.find("Issued") != string::npos);

                Book book(id, title, author, price);
                book.isIssued = issued;
                books.push_back(book);
            }
        }
        file.close();
    }

    void saveBooksToFile()
    {
        ofstream file("library.txt");
        for (const Book &book : books)
        {
            book.writeToFile(file);
        }
        file.close();
    }

    Book *findBookByID(int id)
    {
        for (Book &book : books)
        {
            if (book.bookID == id)
                return &book;
        }
        return nullptr;
    }

    Book *findBookByTitle(const string &title)
    {
        for (Book &book : books)
        {
            if (book.title == title)
                return &book;
        }
        return nullptr;
    }

public:
    Library()
    {
        loadBooksFromFile();
        input1();
    }

    void input1()
    {
        while (true)
        {
            cout << "What you wanna do (add, delete, issue, return, list books) or quit to exit: ";
            cin >> input;
            transform(input.begin(), input.end(), input.begin(), ::tolower);

            if (input == "add")
            {
                addBook();
            }
            else if (input == "delete")
            {
                deleteBook();
            }
            else if (input == "issue")
            {
                issueBook();
            }
            else if (input == "return")
            {
                returnBook();
            }
            else if (input == "list")
            {
                listAllBook();
            }
            else if (input == "quit")
            {
                cout << "Exit System successfully!" << endl;
                break;
            }
            else
            {
                cout << "Please enter a valid argument!" << endl;
            }
        }
    }

    void listAllBook()
    {
        if (books.empty())
        {
            cout << "No books in library!" << endl;
            return;
        }

        cout << "-----Books in Library-----" << endl;
        for (const Book &book : books)
        {
            book.display();
            cout << "------------------------" << endl;
        }
    }

    void addBook()
    {
        string title, author;
        int bookID;
        float price;

        cout << "Enter the title of book: ";
        cin.ignore();
        getline(cin, title);

        cout << "Enter author name: ";
        getline(cin, author);

        cout << "Enter book ID: ";
        cin >> bookID;

        // Check if book ID already exists
        if (findBookByID(bookID) != nullptr)
        {
            cout << "Book with this ID already exists!" << endl;
            return;
        }

        cout << "Enter the price of book: ";
        cin >> price;

        Book newBook(bookID, title, author, price);
        books.push_back(newBook);

        // Save to file
        saveBooksToFile();
        cout << "Book added in library successfully!" << endl;
    }

    void deleteBook()
    {
        int bookID;
        cout << "Enter the Book ID: ";
        cin >> bookID;

        Book *book = findBookByID(bookID);
        if (book == nullptr)
        {
            cout << "Book not found!" << endl;
            return;
        }

        if (book->isIssued)
        {
            cout << "Cannot delete issued book!" << endl;
            return;
        }

        // Remove book from vector
        books.erase(remove_if(books.begin(), books.end(),
                              [bookID](const Book &b)
                              { return b.bookID == bookID; }),
                    books.end());

        // Save to file
        saveBooksToFile();
        cout << "Book deleted successfully!" << endl;
    }

    void returnBook()
    {
        string title;
        cout << "Enter book title: ";
        cin.ignore();
        getline(cin, title);

        Book *book = findBookByTitle(title);
        if (book == nullptr)
        {
            cout << "Book not found!" << endl;
            return;
        }

        if (!book->isIssued)
        {
            cout << "Book is already available!" << endl;
            return;
        }

        book->isIssued = false;
        saveBooksToFile();
        cout << "Book returned successfully!" << endl;
    }

    void issueBook()
    {
        string title;
        cout << "Enter book title: ";
        cin.ignore();
        getline(cin, title);

        Book *book = findBookByTitle(title);
        if (book == nullptr)
        {
            cout << "Book not found!" << endl;
            return;
        }

        if (book->isIssued)
        {
            cout << "Book is not available!" << endl;
            return;
        }

        book->isIssued = true;
        saveBooksToFile();
        cout << "Book issued successfully!" << endl;
    }

    ~Library()
    {
        saveBooksToFile();
    }
};

int main()
{
    Library l1;
    return 0;
}