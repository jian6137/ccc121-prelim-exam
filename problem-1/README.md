# Problem 1 - 1D Array: Inclusive-Range Update and Reverse Traversal

This program adds `delta` to all elements in `a[left..right]` inclusively, copies that updated range in reverse order into `out[]`, and prints the number of copied items along with both arrays. If `n`, `left`, or `right` is invalid, it prints `invalid_argument`.

## How to Compile and Run

Open a terminal inside the `problem-1` folder and run:

```bash
g++ -std=c++17 main.cpp -o main
./main
```

## How to Enter Inputs

1. Enter `n` (the number of elements in the array).
2. If `n` is between `1` and `100`, enter the `n` integer elements separated by spaces or new lines. (If `n` is `0` or greater than `100`, the program skips asking for elements.)
3. Enter `left`, `right`, and `delta` separated by spaces.

## Example Test Cases (From Exam Table)

### Test Case 1: Normal range update (`a={2,4,6,8,10}, n=5, l=1, r=3, d=5`)

Input:
```text
5
2 4 6 8 10
1 3 5
```

Expected Output:
```text
count=3, a={2,9,11,13,10}, out={13,11,9}
```

### Test Case 2: Single-element array (`a={7}, n=1, l=0, r=0, d=-2`)

Input:
```text
1
7
0 0 -2
```

Expected Output:
```text
count=1, a={5}, out={5}
```

### Test Case 3: Empty array rejected (`n=0`)

Input:
```text
0
0 0 0
```

Expected Output:
```text
invalid_argument
```

### Test Case 4: Right index out of bounds rejected (`n=2, r=2`)

Input:
```text
2
1 2
0 2 0
```

Expected Output:
```text
invalid_argument
```
