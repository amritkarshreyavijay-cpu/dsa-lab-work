## Program for Library Management System
#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int bookId;
    string bookName;
    string author;
    string genre;
    Book* next;
};

Book* head = NULL;

// Add a book to the list
void addBook()
{
    Book* newBook = new Book;

    cout << "Enter Book ID: ";
    cin >> newBook->bookId;
    cin.ignore();

    cout << "Enter Book Name: ";
    getline(cin, newBook->bookName);

    cout << "Enter Author Name: ";
    getline(cin, newBook->author);

    cout << "Enter Genre: ";
    getline(cin, newBook->genre);

    newBook->next = NULL;

    if (head == NULL)
    {
        head = newBook;
    }
    else
    {
        Book* temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newBook;
    }

    cout << "Book added successfully!\n";
}

// Search for a book using its ID
void searchBook()
{
    int id;

    cout << "Enter Book ID to search: ";
    cin >> id;

    Book* temp = head;

    while (temp != NULL)
    {
        if (temp->bookId == id)
        {
            cout << "\nBook Found!\n";
            cout << "Book ID: " << temp->bookId << endl;
            cout << "Book Name: " << temp->bookName << endl;
            cout << "Author: " << temp->author << endl;
            cout << "Genre: " << temp->genre << endl;
            return;
        }

        temp = temp->next;
    }

    cout << "Book not found!\n";
}

// Display all books
void displayBooks()
{
    if (head == NULL)
    {
        cout << "No books available!\n";
        return;
    }

    Book* temp = head;

    cout << "\n===== AVAILABLE BOOKS =====\n";

    while (temp != NULL)
    {
        cout << "\nBook ID: " << temp->bookId << endl;
        cout << "Book Name: " << temp->bookName << endl;
        cout << "Author: " << temp->author << endl;
        cout << "Genre: " << temp->genre << endl;
        cout << "--------------------------\n";

        temp = temp->next;
    }
}

// Recommend books based on genre
void recommendBooks()
{
    string preferredGenre;
    bool found = false;

    if (head == NULL)
    {
        cout << "No books available for recommendation!\n";
        return;
    }

    cin.ignore();

    cout << "Enter your preferred genre: ";
    getline(cin, preferredGenre);

    Book* temp = head;

    cout << "\n===== RECOMMENDED BOOKS =====\n";

    while (temp != NULL)
    {
        if (temp->genre == preferredGenre)
        {
            cout << "\nBook ID: " << temp->bookId << endl;
            cout << "Book Name: " << temp->bookName << endl;
            cout << "Author: " << temp->author << endl;
            cout << "Genre: " << temp->genre << endl;

            found = true;
        }

        temp = temp->next;
    }

    if (!found)
    {
        cout << "No books found in this genre!\n";
    }
}

// Free dynamically allocated memory
void freeBooks()
{
    while (head != NULL)
    {
        Book* temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== BOOK RECOMMENDATION SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Search Book\n";
        cout << "3. Display All Books\n";
        cout << "4. Recommend Books by Genre\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                searchBook();
                break;

            case 3:
                displayBooks();
                break;

            case 4:
                recommendBooks();
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 5);

    freeBooks();

    return 0;
}
```
