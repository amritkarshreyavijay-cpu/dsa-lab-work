# Algorithm – Book Recommendation System Using Dynamic Singly Linked List

**Step 1: Start** the program and initialize the head pointer to NULL to indicate that the linked list is initially empty.

**Step 2: Display the Menu** containing options to add a book, search for a book, display all books, recommend books by genre, and exit the program.

**Step 3: Accept the User's Choice** and execute the corresponding operation using a switch statement.

**Step 4: Add a Book:** Allocate memory dynamically for a new node. Enter the Book ID, Book Name, Author Name, and Genre. Insert the new node into the linked list by updating the appropriate pointers.

**Step 5: Search for a Book:** Accept the book name or Book ID to search. Traverse the linked list from the head and compare each node with the given input. If a match is found, display the book details; otherwise, display a message indicating that the book was not found.

**Step 6: Display All Books:** Check whether the linked list is empty. If it is empty, display an appropriate message. Otherwise, traverse the list and display the details of every book until NULL is reached.

**Step 7: Recommend Books:** Accept the user's preferred genre. Traverse the linked list and compare the genre of each book with the user's preference. Display all books matching the selected genre. If no matching books are found, display a suitable message.

**Step 8: Repeat** the menu and operations until the user selects the Exit option.

**Step 9: Free Allocated Memory** by traversing the linked list, deleting each dynamically allocated node, and updating the head pointer.

**Step 10: Stop** the program.
