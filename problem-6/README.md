# Problem 6 - Singly Linked List: Iterative Remove-All with Ownership

This program builds a singly linked list, removes and deletes every node whose value equals `target` (including consecutive matches at the head, middle, or tail), and prints the surviving list or `empty (nullptr)`.

## How to Compile and Run

Open a terminal inside the `problem-6` folder and run:

```bash
g++ -std=c++17 main.cpp -o main
./main
```

## How to Enter Inputs

1. Enter the number of nodes in the list.
2. If the number of nodes is greater than `0`, enter the node values separated by spaces.
3. Enter `target` (the value to remove).

## Example Test Cases (From Exam Table)

### Test Case 1: Matches at head, middle, and tail (`4 -> 4 -> 1 -> 4 -> 4 -> 2 -> 4, target = 4`)

Input:
```text
7
4 4 1 4 4 2 4
4
```

Expected Output:
```text
1 -> 2
```

### Test Case 2: All nodes removed (`4 -> 4, target = 4`)

Input:
```text
2
4 4
4
```

Expected Output:
```text
empty (nullptr)
```

### Test Case 3: Adjacent interior matches (`1 -> 4 -> 4 -> 2, target = 4`)

Input:
```text
4
1 4 4 2
4
```

Expected Output:
```text
1 -> 2
```

### Test Case 4: Target not found (`1 -> 2, target = 4`)

Input:
```text
2
1 2
4
```

Expected Output:
```text
1 -> 2
```
