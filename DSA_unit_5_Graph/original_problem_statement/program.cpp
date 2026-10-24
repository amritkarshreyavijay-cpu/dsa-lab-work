//C++ Program: Airport Flight Network

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n, flights;
    string airport;
    
    cout << "Enter number of airports: ";
    cin >> n;

    vector<string> names(n);
    vector<vector<int>> adj(n);

    cout << "Enter airport names:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }

    cout << "Enter number of direct flights: ";
    cin >> flights;

    cout << "Enter source and destination airport numbers (0 to "
         << n - 1 << "):\n";

    for (int i = 0; i < flights; i++)
    {
        int src, dest;
        cin >> src >> dest;

        if (src >= 0 && src < n && dest >= 0 && dest < n)
        {
            adj[src].push_back(dest);
        }
        else
        {
            cout << "Invalid airport number!\n";
            i--;
        }
    }

    cout << "\n--- Outgoing Flights from Each Airport ---\n";

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

    int selected;
    cout << "\nEnter airport number to find direct destinations: ";
    cin >> selected;

    if (selected >= 0 && selected < n)
    {
        cout << "Direct flights from " << names[selected] << ":\n";

        if (adj[selected].empty())
        {
            cout << "No direct outgoing flights.\n";
        }
        else
        {
            for (int dest : adj[selected])
            {
                cout << names[dest] << endl;
            }
        }
    }
    else
    {
        cout << "Invalid airport number!\n";
    }

    return 0;
}
