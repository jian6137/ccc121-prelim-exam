# Problem 5 - Singly Linked List: Stable Sorted Insertion

This program builds a sorted singly linked list, inserts a new integer value into the list in place after any existing nodes with the same value, and prints the resulting list with identity labels (`a`, `b`, `new`) when duplicate values exist.

## How to Compile and Run

Open a terminal inside the `problem-5` folder and run:

```bash
g++ -std=c++17 main.cpp -o main
./main
```

## How to Enter Inputs

1. Enter the number of nodes initially in the list (`0` for an empty list).
2. If the number of nodes is greater than `0`, enter the node values in nondecreasing order separated by spaces.
3. Enter the value to insert.

## Example Test Cases (From Exam Table)

### Test Case 1: Insert duplicate in the middle (`head = 1 -> 3a -> 3b -> 7, value = 3`)

Input:
```text
4
1 3 3 7
3
```

Expected Output:
```text
1 -> 3a -> 3b -> 3new -> 7
```

### Test Case 2: Insert into empty list (`head = nullptr, value = 4`)

Input:
```text
0
4
```

Expected Output:
```text
4
```

### Test Case 3: Insert before head (`head = 2 -> 5, value = 1`)

Input:
```text
2
2 5
1
```

Expected Output:
```text
1 -> 2 -> 5
```

### Test Case 4: Insert duplicate at head group (`head = 2a -> 2b -> 8, value = 2`)

Input:
```text
3
2 2 8
2
```

Expected Output:
```text
2a -> 2b -> 2new -> 8
```
