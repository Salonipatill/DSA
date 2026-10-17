## Graph

A Graph is a non-linear data structure that consists of vertices and edges 

Graph Data Structure is a non-linear structure used to represent relationships between objects. It consists of a set of vertices (nodes) connected by edges (links). Unlike trees, graphs can have cycles and there is no strict parent-child hierarchy.


create graph
vector<vector<int>> adj(V);

adj[u].push_back(v);

## Important syntax to remember:

Task	Syntax

Create graph	vector<vector<int>> adj(V);
Add connection	adj[u].push_back(v);
Access neighbors	adj[u]
Count neighbors	adj[u].size()





1. What is an adjacency matrix?
An adjacency matrix is a 2D matrix used to represent a graph.
- 1 means an edge exists between two vertices.
- 0 means no edge exists between two vertices.


Your graph has 3 vertices: 0, 1, and 2.


2. Understand the input edges
vector<vector<int>> edges = {
    {0, 1},
    {0, 2},
    {1, 2}
};

{0, 1} → vertex 0 is connected to vertex 1.



{0, 2} → vertex 0 is connected to vertex 2.



{1, 2} → vertex 1 is connected to vertex 2.


3. How does your code create the matrix?

Step 1: Initialize the matrix

vector<vector<int>> mat(V, vector<int>(V, 0));


Here, V = 3, so it creates a 3 × 3 matrix filled with zeros.
Initially:

0       0         0
0       0         0
0       0         0

Step 2: Read each edge

for (auto &it : edges) {
    int u = it[0];
    int v = it[1];


The loop takes one edge at a time.
For example, when it = {0, 1}:
- u = 0
- v = 1


Step 3: Add the edge

mat[u][v] = 1;
mat[v][u] = 1;

For the edge {0, 1}, these statements do the following:
mat[0][1] = 1;
mat[1][0] = 1;


Why do we update both positions?
Because your graph is undirected. If vertex 0 connects to vertex 1, vertex 1 also connects to vertex 0.
The loop repeats this process for all three edges.

4. Final output
Your program prints this adjacency matrix:
    0   1    2
0   0   1    1
1   1   0    1
2   1   1    0

For example, mat[0][2] = 1 means vertex 0 is connected to vertex 2.
mat[0][0] = 0 means vertex 0 has no edge to itself.

5. Important points for DSA

Operation	Time complexity
Create matrix	\(O(V^2)\)
Add an edge	\(O(1)\)
Check whether an edge exists	\(O(1)\)
Space complexity	\(O(V^2)\)


Remember: In an adjacency matrix, accessing an edge is easy because you can directly check mat[u][v].

One important distinction: your code is for an undirected graph. For a directed graph, you would normally remove mat[v][u] = 1; because an edge from u to v does not automatically mean there is an edge from v to u.



## 1. What is an adjacency list?
An adjacency list stores the neighbors of each vertex in a list.
For example, our previous graph has these edges:

vector<vector<int>> edges = {
    {0, 1},
    {0, 2},
    {1, 2}
};


This means:
- Vertex 0 has neighbors 1 and 2.
- Vertex 1 has neighbors 0 and 2.
- Vertex 2 has neighbors 0 and 1.

```
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int V = 3;

    vector<vector<int>> edges = {
        {0, 1}, {0, 2}, {1, 2}
    };

    vector<vector<int>> adj(V);

    for (auto &it : edges) {
        int u = it[0];
        int v = it[1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i < V; i++) {
        cout << i << " -> ";

        for (int neighbor : adj[i]) {
            cout << neighbor << " ";
        }

        cout << endl;
    }

    return 0;
}
```

Output
0 -> 1 2
1 -> 0 2
2 -> 0 1


## 3. Understand the important syntax
Creating the adjacency list:

vector<vector<int>> adj(V);

Creates V empty lists, one for each vertex.

# Adding a neighbor:

adj[u].push_back(v);

Adds vertex v to the neighbor list of vertex u.

adj[v].push_back(u);


Adds the reverse connection because the graph is undirected.


Traversing the neighbors:


for (int neighbor : adj[i]) {
    cout << neighbor << " ";
}


Prints all neighbors of vertex i.


4. Adjacency matrix vs adjacency list


Feature	Adjacency Matrix	Adjacency List
Storage	\(O(V^2)\)	\(O(V+E)\)
Check an edge	\(O(1)\)	\(O(\deg(u))\)
Find all neighbors	\(O(V)\)	\(O(\deg(u))\)
Best for	Dense graphs	Sparse graphs
