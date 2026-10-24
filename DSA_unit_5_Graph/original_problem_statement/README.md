# Airport Flight Network Using Adjacency List in C++

## 1. Problem Statement

Develop a C++ program to represent airports as vertices and direct flights as directed edges in a graph. Store the graph using an adjacency list. Accept airport names and flight information from the user, display all outgoing flights from each airport, and allow the user to select an airport to display all destinations reachable through direct outgoing flights.

## 2. Approach

The program uses a directed graph and an adjacency list to represent the airport flight network.

1. **Input Airports:** Accept the number of airports and their names from the user.
2. **Create Graph:** Create an adjacency list using a vector of vectors, where each airport represents a vertex.
3. **Input Flights:** Accept the source and destination airport numbers for each direct flight.
4. **Store Flights:** Add the destination airport to the source airport's adjacency list. Since the graph is directed, the reverse connection is not added automatically.
5. **Display Outgoing Flights:** Traverse the adjacency list and display all direct destinations for every airport.
6. **Search Direct Destinations:** Accept an airport number and display all airports reachable through its outgoing edges.
7. **Handle Invalid Input:** Check airport indices to prevent invalid graph access.

### Data Structure Used

- **Directed Graph:** Represents airports and one-way flight connections.
- **Adjacency List:** Stores the destinations connected directly to each airport.
- **Vector:** Dynamically stores airport names and adjacency lists.

## 3. Complexity Analysis

Let:
- \(V\) = Number of airports (vertices)
- \(E\) = Number of direct flights (edges)
- \(d\) = Number of outgoing flights from the selected airport

| Operation | Time Complexity |
|---|---|
| Initialize the graph | \(O(V)\) |
| Add all direct flights | \(O(E)\) amortized |
| Display outgoing flights from all airports | \(O(V+E)\) |
| Display direct destinations of a selected airport | \(O(d)\) |
| Overall graph construction | \(O(V+E)\) |

**Space Complexity:** \(O(V+E)\), because the program stores all airport names and direct flight connections using an adjacency list.

The adjacency list is memory-efficient for sparse graphs, where the number of direct flights is relatively small compared with the maximum possible number of connections.

## 4. Conclusion

The program successfully represents an airport network using a directed graph and an adjacency list. It accepts flight information, displays outgoing flights from every airport, and identifies all direct destinations reachable from a selected airport. This implementation demonstrates the practical application of graph data structures in airline route management systems.
