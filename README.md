# Heap Data Structure in C++

This repository contains C++ implementations of the fundamental concepts of the **Heap Data Structure**. It demonstrates how heaps are built, maintained, and used for efficient sorting and priority-based operations.

## 📂 Contents

- **MaxHeap.cpp**
  - Implementation of a Max Heap
  - Insertion
  - Deletion
  - Heapify operation

- **Step_down_Method.cpp**
  - Heapify (Step Down / Sift Down)
  - Building a Max Heap from an array

- **Heap_Sort.cpp**
  - Heap Sort implementation
  - Build Max Heap
  - Sort an array using Heap Sort

- **Priority_queue.cpp**
  - STL `priority_queue`
  - Max Heap
  - Min Heap
  - Basic operations (`push`, `pop`, `top`)

## 🚀 Concepts Covered

- Binary Heap
- Max Heap
- Heapify (Step Down / Sift Down)
- Build Max Heap
- Heap Sort
- STL Priority Queue

## ⏱️ Time Complexity

| Operation | Time |
|-----------|------|
| Insertion | O(log n) |
| Deletion | O(log n) |
| Heapify | O(log n) |
| Build Heap | O(n) |
| Heap Sort | O(n log n) |

## 🛠️ Language

- C++
- Standard Template Library (STL)

## ▶️ How to Run

Compile any file using:

```bash
g++ heap-data-structure.cpp -o output
./output
```

## 📖 Purpose

This repository was created as part of my Data Structures & Algorithms (DSA) learning journey to understand the working of heaps and their practical implementations in C++.