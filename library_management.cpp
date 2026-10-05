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

// Delete book
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

        cout << "Book deleted successfully!\n";
        return;
    }

    Book* temp = head;

    while (temp->next != NULL && temp->next->bookId != id)
    {
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        cout << "Book not found!\n";
    }
    else
    {
        Book* deleteNode = temp->next;
        temp->next = deleteNode->next;
        delete deleteNode;

        cout << "Book deleted successfully!\n";
    }
}

// Search book
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
            return;
        }

        temp = temp->next;
    }

    cout << "Book not found!\n";
}

// Display books
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
        cout << "Book ID: " << temp->bookId << endl;
        cout << "Book Name: " << temp->bookName << endl;
        cout << "Author: " << temp->author << endl;
        cout << "--------------------------\n";

        temp = temp->next;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Insert Book at Beginning\n";
        cout << "2. Insert Book at End\n";
        cout << "3. Delete Book\n";
        cout << "4. Search Book\n";
        cout << "5. Display Books\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                insertBeginning();
                break;

            case 2:
                insertEnd();
                break;

            case 3:
                deleteBook();
                break;

            case 4:
                searchBook();
                break;

            case 5:
                displayBooks();
                break;

            case 6:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}
