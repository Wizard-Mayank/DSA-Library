# DSA Library in C++

## Overview
The DSA Library is a collection of commonly used data structures implemented from scratch in C++. It includes both basic and advanced data structures, with a focus on modularity, performance, and ease of use. Each data structure is thoroughly tested and documented, providing a reusable codebase for various applications.

### Key Features
- **Dynamic Array**
- **Singly Linked List**
- **Stack**
- **Queue**
- **Binary Tree**
- **Heap**
- **Graph (BFS, DFS)**

## Project Structure

DSA-Library/
│
├── src/                   # Source code directory for data structures
│   ├── arrays/            # Folder for Array-related implementations
│   │   ├── DynamicArray.cpp
│   │   └── DynamicArray.h
│   ├── linked_lists/      # Folder for Linked List-related implementations
│   │   ├── SinglyLinkedList.cpp
│   │   └── SinglyLinkedList.h
│   ├── stacks/            # Folder for Stack implementations
│   │   ├── Stack.cpp
│   │   └── Stack.h
│   ├── queues/            # Folder for Queue implementations
│   │   ├── Queue.cpp
│   │   └── Queue.h
│   ├── trees/             # Folder for Tree implementations
│   │   ├── BinaryTree.cpp
│   │   └── BinaryTree.h
│   ├── heaps/             # Folder for Heap implementations
│   │   ├── MaxHeap.cpp
│   │   └── MaxHeap.h
│   ├── graphs/            # Folder for Graph implementations
│   │   ├── Graph.cpp
│   │   └── Graph.h
│   └── main.cpp           # Main program to test various data structures
│
├── include/               # Header files directory (if separate from src)
│   ├── DynamicArray.h
│   ├── SinglyLinkedList.h
│   ├── Stack.h
│   ├── Queue.h
│   └── BinaryTree.h
│
├── tests/                 # Unit tests for data structures
│   ├── test_array.cpp
│   ├── test_linked_list.cpp
│   ├── test_stack.cpp
│   └── test_queue.cpp
│
├── docs/                  # Documentation folder
│   ├── README.md          # Project overview and instructions
│   ├── DataStructures.md  # Detailed description of each data structure
│   └── TimeComplexity.md  # Time and space complexity of implemented operations
│
├── build/                 # Build files generated during compilation


## Installation

### Prerequisites
- C++ compiler (e.g., GCC or Clang)

### Steps

1. **Clone the repository:**

    ```bash
    git clone https://github.com/your-username/DSA-Library.git
    cd DSA-Library
    ```

2. **Compile the code using a C++ compiler:**

    For example, to compile the `DynamicArray`:

    ```bash
    g++ src/DynamicArray.cpp -o dynamic_array
    ```

3. **Run the executable:**

    ```bash
    ./dynamic_array
    ```

## Usage

You can create and use any data structure from the library by including the corresponding header file in your project.

## Contribution

Contributions are welcome! If you have an idea for improving the library, feel free to create an issue or submit a pull request. Please follow these steps:

1. **Fork the repository.**
2. **Create a new branch** for your feature:

    ```bash
    git checkout -b feature-branch
    ```

3. **Commit your changes** with a message:

    ```bash
    git commit -m "Add new feature"
    ```

4. **Push to the branch**:

    ```bash
    git push origin feature-branch
    ```

5. **Open a pull request** on GitHub.

## Author

**Name:** Mayank Pandey
**Email:** 30517csaiml@gmail.com
**GitHub:** (https://github.com/Wizard-Mayank) 
**LinkedIn:** (https://www.linkedin.com/in/pandeymayank369/)  

### About Me
I am a student with a passion for software development and data structures. This project showcases my understanding and implementation of various data structures in C++. I am committed to continuous learning and development in the field of computer science.
