
#include <iostream>
#include <string>
using namespace std;

struct Book
{
    string name;
    string category;
    Book* next;
};

Book* head = NULL;

// Add a book dynamically
void addBook(string name, string category)
{
    Book* newBook = new Book;
    newBook->name = name;
    newBook->category = category;
    newBook->next = NULL;

    if (head == NULL)
    {
        head = newBook;
    }
    else
    {
        Book* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newBook;
    }
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
    cout << "\n--- Available Books ---\n";

    while (temp != NULL)
    {
        cout << "Name: " << temp->name
             << " | Category: " << temp->category << endl;
        temp = temp->next;
    }
}

// Recommend books from the same category
void recommendBook()
{
    if (head == NULL)
    {
        cout << "No books available!\n";
        return;
    }

    string completedBook;
    cout << "Enter the name of the book you finished reading: ";
    getline(cin >> ws, completedBook);

    Book* temp = head;
    string selectedCategory = "";
    bool found = false;

    // Search for the completed book
    while (temp != NULL)
    {
        if (temp->name == completedBook)
        {
            selectedCategory = temp->category;
            found = true;
            break;
        }
        temp = temp->next;
    }

    if (!found)
    {
        cout << "Book not found!\n";
        return;
    }

    cout << "\nRecommended books in category: "
         << selectedCategory << endl;

    temp = head;
    bool recommendationFound = false;

    while (temp != NULL)
    {
        if (temp->category == selectedCategory &&
            temp->name != completedBook)
        {
            cout << "- " << temp->name << endl;
            recommendationFound = true;
        }
        temp = temp->next;
    }

    if (!recommendationFound)
        cout << "No similar books available.\n";
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

    // Initial book records
    addBook("Harry Potter", "Fantasy");
    addBook("The Hobbit", "Fantasy");
    addBook("The Lord of the Rings", "Fantasy");
    addBook("Wings of Fire", "Biography");
    addBook("My Experiments with Truth", "Biography");
    addBook("A Brief History of Time", "Science");

    do
    {
        cout << "\n===== BOOK RECOMMENDATION SYSTEM =====\n";
        cout << "1. Display All Books\n";
        cout << "2. Recommend Books After Reading\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                displayBooks();
                break;

            case 2:
                recommendBook();
                break;

            case 3:
                freeBooks();
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 3);

    return 0;
}
