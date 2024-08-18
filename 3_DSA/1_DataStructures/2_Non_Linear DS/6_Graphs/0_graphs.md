# Graphs:

A Graph is a `non-linear data structure` consisting of **vertices and edges**. The vertices are sometimes also referred to as nodes and the edges are lines or arcs that connect any two nodes in the graph. More formally a **Graph is composed of a set of vertices( V ) and a set of edges( E ). The graph is denoted by G(V, E)**.

### 1. **Graph: Basic Terminologies**
<img src = "https://media.geeksforgeeks.org/wp-content/cdn-uploads/undirectedgraph.png" width="300" align = "right">

   - **Graph**: A graph consists of vertices (nodes) and edges (connections between nodes).
   - **Vertex/Node**: A fundamental part of a graph that can have connections with other nodes.
   - **Edge**: A connection between two vertices. It can be directed (one-way) or undirected (two-way).
   - **Adjacency**: Two vertices are adjacent if there is an edge connecting them.
   - **Degree of a Vertex**: The number of edges connected to a vertex.
     - **In-degree**: Number of incoming edges to a vertex.
     - **Out-degree**: Number of outgoing edges from a vertex.
   - **Path**: A sequence of vertices where each adjacent pair is connected by an edge.
   - **Cycle**: A path that starts and ends at the same vertex.
   - **Connected Graph**: A graph in which there is a path between every pair of vertices.
   - **Disconnected Graph**: A graph where not all vertices are connected.

### 2. **Graph Representations**
   There are two main ways to represent a graph in a program:

1. **Adjacency Matrix:-** 
    <img src = "https://media.geeksforgeeks.org/wp-content/uploads/20230727130331/Undirected_to_Adjacency_matrix.png" width="300" height="250" align = "right">

    - An adjacency matrix is a way of representing a graph as a matrix of boolean (0’s and 1’s).

    - Let’s assume there are n vertices in the graph So, create a 2D matrix adjMat[n][n] having dimension n x n.

    ```c
    If there is an edge from vertex i to j, mark adjMat[i][j] as 1.
    If there is no edge from vertex i to j, mark adjMat[i][j] as 0
    ```
    
2. **Adjacency List:-**

    <img src = "https://media.geeksforgeeks.org/wp-content/uploads/20230727154843/Graph-Representation-of-Undirected-graph-to-Adjacency-List.png" width="300" height="250" align = "right">
    - An array of Lists is used to store edges between two vertices. The size of array is equal to the number of vertices (i.e, n). 

    - Each index in this array represents a specific vertex in the graph. The entry at the index i of the array contains a linked list containing the vertices that are adjacent to vertex i.

    - Let’s assume there are n vertices in the graph So, create an array of list of size n as adjList[n].

    ```c
    adjList[0] will have all the nodes which are connected (neighbour) to vertex 0.
    adjList[1] will have all the nodes which are connected (neighbour) to vertex 1 and so on.
    ```
    



### 3. **Graph Search and Traversal Algorithms:**

#### a. **BFS (Breadth-First Search)**
   - Explores the graph level by level starting from a given node.
   - Uses a **queue** data structure.
   - Visits all neighboring nodes before moving to the next level.

   **BFS Algorithm Steps**:
   1. Start from a node (source).
   2. Visit and enqueue all its unvisited neighbors.
   3. Dequeue a node and repeat until all nodes are visited.
   
   More on BFS Algo => https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/?ref=lbp

  
   

#### b. **DFS (Depth-First Search)**
   - Explores the graph by going as deep as possible down one path before backtracking.
   - Uses a **stack** (or recursion).
   - Visits all nodes in a branch before backtracking to explore other branches.

   **DFS Algorithm Steps**:
   1. Start from a node (source).
   2. Visit an unvisited neighbor and recursively continue until all nodes are visited.
   3. Backtrack when no unvisited neighbors are left.
   
   More on DFS Algo => https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/

