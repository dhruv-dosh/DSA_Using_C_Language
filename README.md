# Data Structures and Algorithms Implementations (in C)

This repository is a focused collection of fundamental **Data Structures** and **Algorithms** implemented purely in **C language**. The primary goal is to provide **manual, ground-up implementations** to deepen the understanding of how these concepts work internally, which is crucial for mastering computer science fundamentals and avoiding the abstraction found in higher-level languages.

## Table of Contents

1.  [Getting Started](https://www.google.com/search?q=%23getting-started)
2.  [Search Algorithms](https://www.google.com/search?q=%23search-algorithms)
3.  [Data Structures](https://www.google.com/search?q=%23data-structures)
      * [Linked Lists](https://www.google.com/search?q=%23linked-lists)
      * [Trees](https://www.google.com/search?q=%23trees)
      * [Graphs](https://www.google.com/search?q=%23graphs)
4.  [Sorting Algorithms](https://www.google.com/search?q=%23sorting-algorithms)
5.  [Contributing](https://www.google.com/search?q=%23contributing)
6.  [License](https://www.google.com/search?q=%23license)

## Getting Started

### Prerequisites

To compile and run the codes, you will need:

  * A C compiler (e.g., GCC, Clang).

### Installation and Setup

1.  **Clone the repository:**

    ```bash
    git clone [https://github.com/dhruv-dosh/DSA_Using_C_Language](https://github.com/dhruv-dosh/DSA_Using_C_Language)
    cd DSA_Using_C_Language
    ```

2.  **Compile and Run the Code:**
    Navigate to the specific directory and use your compiler to build the executable.

    *Example (using GCC for a file named `singly_ll.c`):*

    ```bash
    # Navigate to the file location
    cd DataStructures/LinkedList/

    # Compile the source file
    gcc -o singly_ll singly_ll.c

    # Run the executable
    ./singly_ll
    ```

    *No special compiler flags are required.*

## Search Algorithms

Implementations of basic searching techniques.

| Algorithm | Implementation File(s) | Description |
| :--- | :--- | :--- |
| **Linear Search** | `Searching/linear_search.c` | Sequential check of every element. |
| **Binary Search** | `Searching/binary_search.c` | Efficient search on **sorted** arrays. |

## Data Structures

Manual implementations of core data structures using C pointers, structs, and dynamic memory allocation (`malloc`/`free`).

### Linked Lists

Detailed implementations focusing on pointer manipulation.

  * **Singly Linked List** (`DataStructures/LinkedList/singly_ll.c`)
      * Basic implementation with functions for insertion, deletion, and traversal.
  * **Doubly Linked List** (`DataStructures/LinkedList/doubly_ll.c`)
      * Nodes contain explicit pointers to both the previous and the next node.
  * **Circular Linked List** (`DataStructures/LinkedList/circular_ll.c`)
      * The last node's `next` pointer points back to the head of the list.

### Trees

Hierarchical structures with focus on node creation and balancing logic.

  * **Binary Tree** (`DataStructures/Tree/binary_tree.c`)
      * Standard implementation covering insertion and traversal (In-order, Pre-order, Post-order).
  * **AVL Tree** (`DataStructures/Tree/avl_tree.c`)
      * Implementation of the self-balancing logic using rotations (Left, Right, Left-Right, Right-Left) to maintain balance.

### Graphs

Representation of networks using matrices and lists.

  * **Graph Implementations** (`DataStructures/Graph/graph.c`)
      * Includes definitions for **Adjacency Matrix** and **Adjacency List** representations.
  * **Graph Traversal Algorithms** (often included in the main graph file or separate traversal files)
      * **Breadth-First Search (BFS)**
      * **Depth-First Search (DFS)**

## Sorting Algorithms

A comprehensive set of algorithms covering various performance characteristics.

| Category | Algorithm | Implementation File(s) | Time Complexity (Avg) |
| :--- | :--- | :--- | :--- |
| **Simple** | **Bubble Sort** | `Sorting/bubble_sort.c` | $O(n^2)$ |
| | **Selection Sort** | `Sorting/selection_sort.c` | $O(n^2)$ |
| | **Insertion Sort** | `Sorting/insertion_sort.c` | $O(n^2)$ |
| **Efficient** | **Merge Sort** | `Sorting/merge_sort.c` | $O(n \log n)$ |
| | **Quick Sort** | `Sorting/quick_sort.c` | $O(n \log n)$ |
| | **Heap Sort** | `Sorting/heap_sort.c` | $O(n \log n)$ |
| **Non-Comparison** | **Counting Sort** | `Sorting/counting_sort.c` | $O(n+k)$ |
| | **Radix Sort** | `Sorting/radix_sort.c` | $O(nk)$ |

## Contributing

Contributions are welcome\! If you have a more optimized or different implementation of a structure/algorithm, or want to add a new one, please follow these steps:

1.  **Fork** the repository.
2.  Create your feature branch (`git checkout -b feature/NewImplementation`).
3.  Commit your changes (`git commit -m 'Add detailed C implementation for XYZ'`).
4.  Open a **Pull Request**.


 *Created and maintained by [dhruv-doshi](https://github.com/dhruv-dosh)*
