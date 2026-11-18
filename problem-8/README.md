# Problem 8 - Singly Linked List: Recursive Stable Merge Sort

This program builds a singly linked list, sorts it in ascending order using stable recursive merge sort by relinking the original nodes, and prints the sorted list with identity labels (`a`, `b`, `c`) for duplicate values so you can verify stability.

## How to Compile and Run

Open a terminal inside the `problem-8` folder and run:

```bash
g++ -std=c++17 main.cpp -o main
./main
```

## How to Enter Inputs

1. Enter the number of nodes in the list (`0` for an empty list).
2. If the number of nodes is greater than `0`, enter the node values separated by spaces.

## Example Test Cases (From Exam Table)

### Test Case 1: List with three equal values (`3a -> 1 -> 3b -> 2 -> 3c`)

Input:
```text
5
3 1 3 2 3
```

Expected Output:
```text
1 -> 2 -> 3a -> 3b -> 3c
```

### Test Case 2: Empty list (`empty (nullptr)`)

Input:
```text
0
```

Expected Output:
```text
empty (nullptr)
```

### Test Case 3: Single-node list (`7`)

Input:
```text
1
7
```

Expected Output:
```text
7
```

### Test Case 4: List with multiple duplicate pairs (`4a -> 1a -> 4b -> 2 -> 1b`)

Input:
```text
5
4 1 4 2 1
```

Expected Output:
```text
1a -> 1b -> 2 -> 4a -> 4b
```
