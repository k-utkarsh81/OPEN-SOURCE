Here is the documentation for the provided C++ program implementing Dijkstra's algorithm:
Forked from : https://github.com/amitbansal7/Data-Structures-and-Algorithms/blob/master/10.Graphs/DijkstrasShortestPathAlgorithm.cpp

# Program Documentation: Dijkstra's Algorithm

## Overview
This program implements Dijkstra's algorithm to find the shortest path from a source vertex to all other vertices in a graph. The graph is represented using an adjacency list and the priority queue is used to efficiently fetch the vertex with the smallest distance.

## Dependencies
The program uses the following standard libraries:
- `<bits/stdc++.h>`: This header file includes all standard C++ libraries.
- `priority_queue`, `vector`, `pair`, etc. from the C++ Standard Library.

## Macros and Typedefs
- `lli`: Typedef for `long long int`.
- `llu`: Typedef for `unsigned long long int`.
- `S(x)`: Macro for scanning an integer.
- `Sl(x)`: Macro for scanning a long long integer.
- `Mset(p,i)`: Macro for setting all elements of array `p` to value `i`.
- `mlc(t,n)`: Macro for allocating memory for `n` elements of type `t`.
- `NIL`: Defined as `-1`, typically used to denote a null value.
- `INF`: Defined as a large value (`0x3f3f3f3f`) to represent infinity.

## Function Documentation

### `void printpath(int parent[], int v)`
This function prints the path from the source vertex to vertex `v` using the `parent` array.
- **Parameters**:
  - `parent[]`: An array where `parent[i]` holds the parent node of vertex `i` in the shortest path tree.
  - `v`: The target vertex.
- **Functionality**: The function recursively prints the parent vertices starting from the source to the target vertex `v`.

### `void addEdge(vector<pair<int,int> > adj[], int src, int dest, int w)`
This function adds an undirected edge to the graph.
- **Parameters**:
  - `adj[]`: Adjacency list of the graph.
  - `src`: Source vertex.
  - `dest`: Destination vertex.
  - `w`: Weight of the edge.
- **Functionality**: The function adds an edge from `src` to `dest` with weight `w` and vice versa (since the graph is undirected).

### `void Dijkstra(vector<pair<int, int> > adj[], int src, int v)`
This function implements Dijkstra's algorithm to find the shortest paths from the source vertex `src` to all other vertices.
- **Parameters**:
  - `adj[]`: Adjacency list of the graph.
  - `src`: Source vertex.
  - `v`: Total number of vertices in the graph.
- **Functionality**: 
  - Initializes the distance of all vertices as infinite (`INF`) and the distance of the source vertex as 0.
  - Uses a priority queue to pick the vertex with the minimum distance.
  - Updates the distance of adjacent vertices of the picked vertex.
  - Prints the shortest distance from the source vertex to all other vertices along with the path.

## Main Function

### `int main(int argc, char const *argv[])`
The main function sets up the graph, adds edges, and calls the Dijkstra function.
- **Functionality**:
  - Defines the number of vertices `v`.
  - Initializes the adjacency list `adj`.
  - Adds edges to the graph using `addEdge`.
  - Calls the `Dijkstra` function with the source vertex set to 1.
  - Prints the shortest paths and distances.

### Example Usage
In the main function, the graph has 9 vertices, and edges with specific weights are added between vertices. The Dijkstra function is called with vertex 1 as the source, and it prints the shortest paths and distances from vertex 1 to all other vertices.

## Output
The program outputs the shortest distance from the source vertex to each vertex and the corresponding path:
```
Vertex   distance from  1       Path
0         4              1->0 
1         0              1 
2         8              1->2 
3         15             1->2->3 
4         24             1->2->3->4 
5         12             1->2->5 
6         14             1->2->5->6 
7         11             1->7 
8         10             1->2->8 
```

This output shows the shortest distances and paths from the source vertex 1 to all other vertices in the graph.