## Algorithm – Library Management System Using Singly Linked List

**Step 1: Start** the program and initialize the head pointer to NULL to indicate that the linked list is empty.

**Step 2: Display the Menu** containing the options to insert a book at the beginning, insert a book at the end, delete a book, search for a book, display all books, and exit.

**Step 3: Accept the User's Choice** and perform the corresponding operation using a switch statement.

**Step 4: Insert at Beginning:** Create a new node and accept the Book ID, Book Name, and Author Name. Set the next pointer of the new node to the current head and update head to point to the new node.

**Step 5: Insert at End:** Create a new node and accept the book details. Set its next pointer to NULL. If the list is empty, make the new node the head; otherwise, traverse to the last node and link it to the new node.

**Step 6: Delete a Book:** Accept the Book ID to be deleted. If the list is empty, display an appropriate message. Otherwise, search for the specified Book ID. If found, adjust the links, delete the corresponding node, and display a success message. If the book is not found, display an appropriate message.

**Step 7: Search for a Book:** Accept the Book ID and traverse the linked list from the head. If a matching ID is found, display the book details; otherwise, display a message indicating that the book was not found.

**Step 8: Display Books:** Check whether the list is empty. If it is empty, display a message. Otherwise, traverse the linked list and display the Book ID, Book Name, and Author Name of every node until NULL is reached.

**Step 9: Repeat** the menu and operations until the user selects the Exit option.

**Step 10: Stop** the program.
