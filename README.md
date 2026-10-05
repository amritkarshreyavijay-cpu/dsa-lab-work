# Library Management System Using Singly Linked List

## Problem Statement

Implement a singly linked list to maintain library book records. Perform insertion of books at the beginning/end, deletion of book records, searching for a book, and displaying all available book records.

## Objective

To develop a menu-driven Library Management System using a Singly Linked List in C++ for managing book records efficiently.

## Data Structure Used

**Singly Linked List**

Each node contains:

* Book ID
* Book Name
* Author Name
* Pointer to the next node

## Features

* Insert a book at the beginning
* Insert a book at the end
* Delete a book record
* Search for a book using Book ID
* Display all available books
* Menu-driven program

## Algorithm
1. Start
2. Create an empty singly linked list.
3. Display the menu.
4. Accept the user's choice.
5. If choice is insertion:
   - Create a new book node.
   - Enter Book ID, Book Name and Author.
   - Insert at beginning or end.
6. If choice is deletion:
   - Accept Book ID.
   - Search for the book.
   - Delete the corresponding node.
7. If choice is searching:
   - Accept Book ID.
   - Traverse the linked list.
   - Display the book if found.
8. If choice is display:
   - Traverse the list.
   - Display all book records.
9. Repeat the menu until the user selects Exit.
10. Stop.
    
## Flowchart
<img width="1024" height="1536" alt="ChatGPT Image Oct 5, 2026, 06_31_45 PM" src="https://github.com/user-attachments/assets/5fbd1dd6-d692-40d1-be53-f77f0b08abb3" />

## Program
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

## Operations

### 1. Insertion at Beginning

Adds a new book record at the beginning of the linked list.

### 2. Insertion at End

Adds a new book record at the end of the linked list.

### 3. Deletion

Deletes a book record using its Book ID.

### 4. Searching

Searches for a book using its Book ID and displays its details.

### 5. Display

Displays all the available book records stored in the linked list.

## Technologies Used

* C++
* Singly Linked List
* Dynamic Memory Allocation
* GitHub

## Sample Book Record

```text
Book ID: 101
Book Name: Data Structures
Author: Seymour Lipschutz
```

## Learning Outcomes

Through this project, we learn:

* Implementation of Singly Linked List
* Dynamic memory allocation
* Node creation and traversal
* Insertion and deletion operations
* Searching in a linked list
* Practical application of data structures

## Output
<img width="1915" height="1075" alt="Screenshot 2026-10-05 191641" src="https://github.com/user-attachments/assets/95d12155-576d-4f00-a032-376a5302197b" />


## Conclusion

The Library Management System successfully demonstrates the implementation of a Singly Linked List in C++. It provides basic operations such as insertion, deletion, searching, and displaying book records. This project helps in understanding the practical use of linked lists in real-world applications.

