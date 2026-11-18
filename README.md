# CCC121 - Take-Home Prelim Exam (C++17)

This repository contains the fixed C++17 solutions and interactive test drivers for all eight debugging problems in the Data Structures and Algorithms Take-Home Prelim Exam.

## Rules and Constraints

All programs follow the exam requirements:
- Compiled using C++17 (`-std=c++17`)
- Uses only `#include <iostream>`, `#include <stdexcept>`, and `#include <algorithm>` as needed, with `using namespace std;`
- Uses only built in fixed capacity C style arrays and manually linked singly linked lists (`struct Node`)
- Does not use `std::vector`, `std::array`, STL containers, or dynamically allocated arrays
- Reads inputs interactively from standard input (`cin`) and prints results to standard output (`cout`)

## Problems

| Problem | Topic | Code | Guide and Test Cases |
| --- | --- | --- | --- |
| Problem 1 | 1D array: inclusive-range update and reverse traversal | [problem-1/main.cpp](problem-1/main.cpp) | [problem-1/README.md](problem-1/README.md) |
| Problem 2 | 1D array: stable deletion during traversal | [problem-2/main.cpp](problem-2/main.cpp) | [problem-2/README.md](problem-2/README.md) |
| Problem 3 | 2D array: rectangular column update | [problem-3/main.cpp](problem-3/main.cpp) | [problem-3/README.md](problem-3/README.md) |
| Problem 4 | 2D array: in-place clockwise matrix rotation | [problem-4/main.cpp](problem-4/main.cpp) | [problem-4/README.md](problem-4/README.md) |
| Problem 5 | Singly linked list: stable sorted insertion | [problem-5/main.cpp](problem-5/main.cpp) | [problem-5/README.md](problem-5/README.md) |
| Problem 6 | Singly linked list: iterative remove-all with ownership | [problem-6/main.cpp](problem-6/main.cpp) | [problem-6/README.md](problem-6/README.md) |
| Problem 7 | Singly linked list: recursive reverse traversal | [problem-7/main.cpp](problem-7/main.cpp) | [problem-7/README.md](problem-7/README.md) |
| Problem 8 | Singly linked list: recursive stable merge sort | [problem-8/main.cpp](problem-8/main.cpp) | [problem-8/README.md](problem-8/README.md) |

## How to Compile and Run Any Problem

Move into the folder of the problem you want to test, compile `main.cpp` with C++17, and run the executable:

```bash
cd problem-1
g++ -std=c++17 main.cpp -o main
./main
```

Each program asks for inputs at runtime. See each problem's `README.md` for the exact prompts, example inputs, and expected outputs matching the exam test tables.
