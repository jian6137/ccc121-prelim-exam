# Problem 7 - Singly Linked List: Recursive Reverse Traversal

This program builds a singly linked list and uses recursion to print its values from tail to head inside double quotes, separated by single spaces with no extra leading or trailing spaces.

## How to Compile and Run

Open a terminal inside the `problem-7` folder and run:

```bash
g++ -std=c++17 main.cpp -o main
./main
```

## How to Enter Inputs

1. Enter the number of nodes in the list (`0` for an empty list).
2. If the number of nodes is greater than `0`, enter the node values separated by spaces.

## Example Test Cases (From Exam Table)

### Test Case 1: Four-node list (`2 -> 4 -> 6 -> 8`)

Input:
```text
4
2 4 6 8
```

Expected Output:
```text
"8 6 4 2"
```

### Test Case 2: Empty list (`empty (nullptr)`)

Input:
```text
0
```

Expected Output:
```text
""
```

### Test Case 3: Single-node list (`9`)

Input:
```text
1
9
```

Expected Output:
```text
"9"
```

### Test Case 4: Three-node list (`1 -> 2 -> 3`)

Input:
```text
3
1 2 3
```

Expected Output:
```text
"3 2 1"
```
