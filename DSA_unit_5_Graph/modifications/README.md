# Airport Flight Network Using Directed Graph in C++

## 1. Problem Statement

Develop a C++ program to represent airports as vertices and flights as directed edges using an adjacency list. Modify the program to support adding a one-way flight between two airports and adding a return flight as a separate directed edge. Calculate and display the incoming and outgoing flight counts for each airport.

The program demonstrates how directed graphs can be used to represent flight connections and analyze airport connectivity.

## 2. Approach

The program uses a directed graph implemented through an adjacency list to store flight information.

### A. Representing Airports and Flights

- Each airport is represented as a vertex in the graph.
- Each direct flight is represented as a directed edge from the source airport to the destination airport.
- An adjacency list stores all outgoing flights from each airport.

### B. Adding a One-Way Flight

1. Accept the source and destination airport numbers.
2. Validate the airport numbers.
3. Add the destination airport to the source airport's adjacency list.
4. Do not add a reverse edge, because the flight operates in only one direction.

### C. Adding a Return Flight

1. Accept the source and destination airports.
2. Add the destination to the source airport's adjacency list.
3. Add the source to the destination airport's adjacency list as a separate directed edge.
4. This represents flights in both directions.

### D. Calculating Incoming and Outgoing Flights

- **Outgoing flights:** Count the destinations stored in an airport's adjacency list.
- **Incoming flights:** Traverse the adjacency lists of all airports and count the edges that point to the selected airport.
- Display the incoming and outgoing flight counts for every airport.

### Data Structures Used

- **Directed Graph:** Represents airports and directional flight connections.
- **Adjacency List:** Stores outgoing flight destinations.
- **Vector:** Stores airport names and adjacency lists dynamically.

## 3. Complexity Analysis

Let:

- \(V\) = Number of airports (vertices)
- \(E\) = Number of directed flight edges

| Operation | Time Complexity |
|---|---|
| Initialize the graph | \(O(V)\) |
| Add a one-way flight | \(O(1)\) amortized |
| Add a return flight | \(O(1)\) amortized |
| Calculate outgoing flight counts for all airports | \(O(V)\) |
| Calculate incoming flight counts for all airports | \(O(V+E)\) |
| Display incoming and outgoing counts for all airports | \(O(V+E)\) |

**Space Complexity:** \(O(V+E)\), because the graph stores all airports and directed flight edges using an adjacency list.

The adjacency list is suitable for sparse graphs because it stores only the existing flight connections rather than every possible connection between airports.

## 4. Conclusion

The modified program successfully represents airport connections using a directed graph and supports adding one-way and return flights as directed edges. It also calculates incoming and outgoing flight counts for each airport, demonstrating the practical application of graph data structures in airline route management systems.
