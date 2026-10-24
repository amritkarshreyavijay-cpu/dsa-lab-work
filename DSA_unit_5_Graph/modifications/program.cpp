//C++ Program: Airport Flight Network

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n, flights;
    int choice, src, dest, selected;

    cout << "Enter number of airports: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid number of airports!";
        return 0;
    }

    vector<string> names(n);
    vector<vector<int> > adj(n);

    cout << "Enter airport names:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }

    cout << "Enter number of direct flights: ";
    cin >> flights;

    cout << "Enter source and destination numbers (0 to "
         << n - 1 << "):\n";

    for (int i = 0; i < flights; i++)
    {
        cin >> src >> dest;

        if (src >= 0 && src < n && dest >= 0 && dest < n)
        {
            adj[src].push_back(dest);
        }
        else
        {
            cout << "Invalid airport numbers! Try again:\n";
            i--;
        }
    }

    do
    {
        cout << "\n--- AIRPORT FLIGHT NETWORK ---\n";
        cout << "1. Add one-way flight\n";
        cout << "2. Add return flight\n";
        cout << "3. Display all outgoing flights\n";
        cout << "4. Display incoming and outgoing counts\n";
        cout << "5. Display direct destinations of an airport\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter source and destination numbers: ";
                cin >> src >> dest;

                if (src >= 0 && src < n &&
                    dest >= 0 && dest < n)
                {
                    adj[src].push_back(dest);
                    cout << "One-way flight added successfully.\n";
                }
                else
                {
                    cout << "Invalid airport numbers!\n";
                }
                break;

            case 2:
                cout << "Enter source and destination numbers: ";
                cin >> src >> dest;

                if (src >= 0 && src < n &&
                    dest >= 0 && dest < n)
                {
                    adj[src].push_back(dest);
                    adj[dest].push_back(src);
                    cout << "Return flights added successfully.\n";
                }
                else
                {
                    cout << "Invalid airport numbers!\n";
                }
                break;

            case 3:
                cout << "\n--- OUTGOING FLIGHTS ---\n";

                for (int i = 0; i < n; i++)
                {
                    cout << names[i] << " -> ";

                    if (adj[i].empty())
                    {
                        cout << "No outgoing flights";
                    }
                    else
                    {
                        for (int j = 0; j < adj[i].size(); j++)
                        {
                            cout << names[adj[i][j]] << " ";
                        }
                    }

                    cout << endl;
                }
                break;

            case 4:
                {
                    vector<int> incoming(n, 0);
                    vector<int> outgoing(n, 0);

                    for (int i = 0; i < n; i++)
                    {
                        outgoing[i] = adj[i].size();

                        for (int j = 0; j < adj[i].size(); j++)
                        {
                            dest = adj[i][j];
                            incoming[dest]++;
                        }
                    }

                    cout << "\n--- FLIGHT COUNTS ---\n";

                    for (int i = 0; i < n; i++)
                    {
                        cout << "Airport: " << names[i] << endl;
                        cout << "Incoming flights: "
                             << incoming[i] << endl;
                        cout << "Outgoing flights: "
                             << outgoing[i] << endl;
                        cout << endl;
                    }
                }
                break;

            case 5:
                cout << "Enter airport number (0 to "
                     << n - 1 << "): ";
                cin >> selected;

                if (selected >= 0 && selected < n)
                {
                    cout << "Direct destinations from "
                         << names[selected] << ":\n";

                    if (adj[selected].empty())
                    {
                        cout << "No direct outgoing flights.\n";
                    }
                    else
                    {
                        for (int j = 0;
                             j < adj[selected].size(); j++)
                        {
                            cout << names[adj[selected][j]]
                                 << endl;
                        }
                    }
                }
                else
                {
                    cout << "Invalid airport number!\n";
                }
                break;

            case 6:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 6);

    return 0;
}
