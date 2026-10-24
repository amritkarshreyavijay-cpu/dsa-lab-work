```mermaid
graph TD
    Start([Start]) --> Input1["Input: Number of airports (n)"]
    Input1 --> Init1["Create vectors:<br/>names: size n<br/>adj: size n"]
    Init1 --> Input2["Input airport names<br/>for i = 0 to n - 1"]
    Input2 --> Input3["Input: Number of direct flights"]
    Input3 --> InitFlights["Set i = 0"]
    InitFlights --> FlightLoop{"i < flights?"}
    FlightLoop -->|Yes| Input4["Input source and destination numbers"]
    Input4 --> Validate{"0 <= src < n and<br/>0 <= dest < n?"}
    Validate -->|No| Error1["Print: Invalid airport number!<br/>Retry the same flight"]
    Error1 --> FlightLoop
    Validate -->|Yes| AddEdge["adj[src].push_back(dest)"]
    AddEdge --> NextFlight["i++"]
    NextFlight --> FlightLoop

    FlightLoop -->|No| Display["Print outgoing flights heading<br/>Set i = 0"]
    Display --> Loop1{"i < n?"}
    Loop1 -->|Yes| PrintAirport["Print names[i] and arrow"]
    PrintAirport --> AirportEmpty{"adj[i] empty?"}
    AirportEmpty -->|Yes| ShowEmpty["Print: No outgoing flights"]
    AirportEmpty -->|No| ShowFlights1["For each destination in adj[i],<br/>print its airport name"]
    ShowEmpty --> NextAirport["Print newline<br/>i++"]
    ShowFlights1 --> NextAirport
    NextAirport --> Loop1

    Loop1 -->|No| Input5["Input: Selected airport number"]
    Input5 --> ValidateSelect{"0 <= selected < n?"}
    ValidateSelect -->|No| Error2["Print: Invalid airport number!"]
    Error2 --> End(["Return 0 / End"])
    ValidateSelect -->|Yes| SelectedHeading["Print direct flights heading<br/>for names[selected]"]
    SelectedHeading --> CheckFlights{"Has outgoing flights?"}
    CheckFlights -->|No| NoFlights["Print: No direct outgoing flights"]
    CheckFlights -->|Yes| ShowSelected["For each destination in adj[selected],<br/>print its airport name"]
    NoFlights --> End
    ShowSelected --> End

    classDef inputNode stroke:#38bdf8,fill:#f0f9ff
    classDef processNode stroke:#4ade80,fill:#f0fdf4
    classDef decisionNode stroke:#facc15,fill:#fefce8
    classDef outputNode stroke:#a78bfa,fill:#f5f3ff
    classDef errorNode stroke:#f87171,fill:#fef2f2
    classDef startEnd stroke:#818cf8,fill:#eef2ff

    class Input1,Input2,Input3,Input4,Input5 inputNode
    class Init1,AddEdge,Display,ShowFlights1,ShowEmpty,ShowSelected,InitFlights,NextFlight,PrintAirport,NextAirport,SelectedHeading processNode
    class Validate,ValidateSelect,CheckFlights,Loop1,FlightLoop,AirportEmpty decisionNode
    class Error1,Error2,NoFlights errorNode
    class Start,End startEnd
```
