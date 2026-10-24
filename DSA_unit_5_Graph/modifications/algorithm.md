## Algorithm

1. Start the program.
2. Accept the number of airports and their names from the user.
3. Create an adjacency list to represent the directed graph.
4. Accept the number of initial direct flights.
5. For each flight, accept the source and destination airport numbers and add a directed edge from the source to the destination.
6. Display all outgoing flights from each airport.
7. Ask the user whether they want to add a one-way flight or a return flight.
8. For a **one-way flight**:
   - Accept the source and destination airport numbers.
   - Validate the airport numbers.
   - Add the destination to the source airport's adjacency list.
9. For a **return flight**:
   - Accept the source and destination airport numbers.
   - Validate the airport numbers.
   - Add the destination to the source airport's adjacency list.
   - Add the source to the destination airport's adjacency list as a separate directed edge.
10. Initialize the incoming and outgoing flight counts of all airports to zero.
11. Traverse the adjacency list of each airport:
    - Count the destinations in its adjacency list as outgoing flights.
    - For every directed edge, increment the incoming flight count of its destination airport.
12. Display the incoming and outgoing flight counts for each airport.
13. Accept a selected airport number from the user.
14. Validate the selected airport number.
15. If valid, display all airports reachable through direct outgoing flights from the selected airport.
16. If invalid, display an appropriate error message.
17. Stop the program.
