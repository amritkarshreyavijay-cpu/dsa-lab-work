
#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int bookId;
    string bookName;
    string author;
    Book* next;
};

Book* head = NULL;

// Insert book at beginning
void insertBeginning()
{
    Book* newBook = new Book;

    cout << "Enter Book ID: ";
    cin >> newBook->bookId;

    cout << "Enter Book Name: ";
    cin.ignore();
    getline(cin, newBook->bookName);

    cout << "Enter Author Name: ";
    getline(cin, newBook->author);

    newBook->next = head;
    head = newBook;

    cout << "Book inserted successfully!\n";
}

// Insert book at end
void insertEnd()
{
    Book* newBook = new Book;

    cout << "Enter Book ID: ";
    cin >> newBook->bookId;

    cout << "Enter Book Name: ";
    cin.ignore();
    getline(cin, newBook->bookName);

    cout << "Enter Author Name: ";
    getline(cin, newBook->author);

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

    cout << "Book inserted successfully!\n";
}

// Delete book using Book ID
void deleteBook()
{
    int id;

    cout << "Enter Book ID to delete: ";
    cin >> id;

    if (head == NULL)
    {
        cout << "Library is empty!\n";
        return;
    }

    if (head->bookId == id)
    {
        Book* temp = head;
        head = head->next;
        delete temp;

        cout << "
