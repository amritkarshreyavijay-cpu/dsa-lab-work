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

