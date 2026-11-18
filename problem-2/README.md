# Problem 2 - 1D Array: Stable Deletion During Traversal

This program removes all occurrences of `target` from the array `a[]` in place while keeping the remaining elements in their original order. It updates `n` to the new length and prints the number of removed items, the new length, and the remaining elements.

## How to Compile and Run

Open a terminal inside the `problem-2` folder and run:

```bash
g++ -std=c++17 main.cpp -o main
./main
```

## How to Enter Inputs

1. Enter `n` (the number of elements in the array, up to `100`).
2. If `n` is greater than `0`, enter the `n` integer elements separated by spaces or new lines.
3. Enter `target` (the integer value to remove).

## Example Test Cases (From Exam Table)

### Test Case 1: Repeated and scattered target values (`a={5,5,2,5,3,5,5}, n=7, target=5`)

Input:
```text
7
5 5 2 5 3 5 5
5
```

Expected Output:
```text
return 5, n=2, a[0..1]={2,3}
```

### Test Case 2: All elements match target (`a={5,5,5}, n=3, target=5`)

Input:
```text
3
5 5 5
5
```

Expected Output:
```text
return 3, n=0
```

### Test Case 3: Target not found (`a={1,2,3}, n=3, target=9`)

Input:
```text
3
1 2 3
9
```

Expected Output:
```text
return 0, n=3, a[0..2]={1,2,3}
```

### Test Case 4: Alternating target values (`a={5,1,5,2,5}, n=5, target=5`)

Input:
```text
5
5 1 5 2 5
5
```

Expected Output:
```text
return 3, n=2, a[0..1]={1,2}
```
