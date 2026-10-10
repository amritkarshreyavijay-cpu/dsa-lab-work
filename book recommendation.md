# Book Recommendation System Using Dynamic Singly Linked List

## 1. Introduction

A Book Recommendation System helps readers discover new books after completing a book. It recommends other books based on the category or genre of the book the user has already read.

This project is developed in C++ using a Dynamic Singly Linked List. Each node stores the book name, category, and pointer to the next node. The system searches for the completed book and recommends other books belonging to the same category.

## 2. Problem Statement

Design and implement a console-based Book Recommendation System in C++ using a Dynamic Singly Linked List. The system should store book records dynamically, allow users to search for a completed book, and recommend other books from the same category. It should also display appropriate messages when the book is not found or no similar books are available.

## 3. Objectives

1. To implement a Dynamic Singly Linked List in C++.
2. To store book names and categories using dynamically allocated nodes.
3. To search for a book that the user has completed reading.
4. To recommend other books belonging to the same category.
5. To understand pointers, dynamic memory allocation, searching, and traversal.
6. To apply data structure concepts to a real-world application.

## 4. Data Structure Used

**Dynamic Singly Linked List**

Each node contains three parts:

- `name` – stores the name of the book.
- `category` – stores the category or genre of the book.
- `next` – stores the address of the next node.

### Example

`Harry Potter → The Hobbit → Wings of Fire → NULL`

The `head` pointer points to the first node in the linked list. Each new book node is created dynamically using the `new` operator in C++.

## 5. Features

- Display all available books.
- Search for a completed book by name.
- Identify the category of the completed book.
- Recommend other books from the same category.
- Display a message if the book is not found.
- Display a message if no similar books are available.
- Use dynamic memory allocation.
- Release allocated memory when exiting the program.

## 6. Technologies Used

- **Programming Language:** C++
- **Data Structure:** Dynamic Singly Linked List
- **Concepts:** Structures, pointers, functions, dynamic memory allocation, searching, and traversal
- **Interface:** Console-based application

## 7. Operations Performed

### 7.1 Adding Books

Book records are inserted into the linked list by creating nodes dynamically. Each node stores a book name and its category.

### 7.2 Displaying Books

The program traverses the linked list from the head pointer to `NULL` and displays the name and category of every book.

### 7.3 Searching for a Completed Book

The user enters the name of the book they have finished reading. The system traverses the linked list to find the matching book.

### 7.4 Recommending Books

After finding the completed book, the system identifies its category and searches the linked list again. Other books belonging to the same category are displayed as recommendations. The completed book itself is excluded.

### 7.5 Memory Deallocation

The program uses the `delete` operator to release dynamically allocated nodes when the user exits the system.

## 8. Algorithm

1. Start the program.
2. Initialize the head pointer to `NULL`.
3. Create book records dynamically and insert them into the linked list.
4. Display the main menu.
5. Accept the user's choice.
6. If the user selects Display All Books, traverse the linked list and display all book records.
7. If the user selects Recommend Books, accept the name of the completed book.
8. Search for the entered book by traversing the linked list.
9. If the book is not found, display "Book not found."
10. If the book is found, identify its category.
11. Traverse the linked list again and find other books belonging to the same category.
12. Display the matching books, excluding the completed book.
13. If no matching books are found, display "No similar books available."
14. Repeat the menu until the user selects Exit.
15. Release all dynamically allocated nodes.
16. Stop the program.

## 9. Flowchart
<img width="1112" height="1414" alt="Book Recommendation Flowchart" src="https://github.com/user-attachments/assets/f08024e7-39e2-4d35-993d-dfd7e72c1f14" />


## 11. Time Complexity

Let `n` be the total number of books stored in the linked list.

| Operation | Time Complexity |
|---|---|
| Insertion at the end | O(n) |
| Display all books | O(n) |
| Search for a completed book | O(n) |
| Find recommended books | O(n) |
| Free all allocated nodes | O(n) |

The recommendation process takes O(n) time to search for the completed book and another O(n) time to find books in the same category. Therefore, the overall time complexity of generating recommendations is **O(n)**.

## 12. Advantages

1. The number of books can increase or decrease dynamically.
2. No fixed array size is required.
3. Memory is allocated only when a new node is created.
4. Recommendations can be generated using simple category matching.
5. The project demonstrates the practical use of pointers and linked lists.
6. The program is simple and easy to understand.


## 14. Applications

- Library management systems
- Digital libraries
- E-book applications
- Online bookstores
- Personal reading-list applications
- Book discovery platforms


## 17. Conclusion

The Book Recommendation System successfully demonstrates the application of a Dynamic Singly Linked List in C++. It allows users to view available books and receive recommendations based on the category of a completed book. The project provides practical knowledge of pointers, dynamic memory allocation, searching, and traversal while demonstrating a simple real-world application of data structures.
