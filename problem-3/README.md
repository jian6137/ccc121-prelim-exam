# Problem 3 - 2D Array: Rectangular Column Update

This program adds `amount` to every number in column `col` of a `rows x cols` matrix (`1 <= rows <= 8`, `1 <= cols <= 8`), copies the updated column into `out[]`, and prints the row count, `out[]`, and the updated grid. If the dimensions or column index are invalid, it prints `invalid_argument`.

## How to Compile and Run

Open a terminal inside the `problem-3` folder and run:

```bash
g++ -std=c++17 main.cpp -o main
./main
```

## How to Enter Inputs

1. Enter `rows` and `cols` separated by a space.
2. If both `rows` and `cols` are between `1` and `8`, enter the grid values row by row. (If either dimension is invalid, the program skips asking for grid values.)
3. Enter `col` and `amount` separated by a space.

## Example Test Cases (From Exam Table)

### Test Case 1: Update middle column (`rows=2, cols=3, col=1, amount=10`)

Input:
```text
2 3
1 2 3
4 5 6
1 10
```

Expected Output:
```text
return 2, out={12,15}, grid={{1,12,3},{4,15,6}}
```

### Test Case 2: Update last valid column (`rows=2, cols=3, col=2, amount=10`)

Input:
```text
2 3
1 2 3
4 5 6
2 10
```

Expected Output:
```text
return 2, out={13,16}, grid={{1,2,13},{4,5,16}}
```

### Test Case 3: Column index out of bounds (`rows=3, cols=2, col=2, amount=10`)

Input:
```text
3 2
1 2
3 4
5 6
2 10
```

Expected Output:
```text
invalid_argument
```

### Test Case 4: Invalid row count (`rows=0, cols=3, col=0, amount=10`)

Input:
```text
0 3
0 10
```

Expected Output:
```text
invalid_argument
```

### Test Case 5: Column count exceeds capacity (`rows=2, cols=9, col=0, amount=10`)

Input:
```text
2 9
0 10
```

Expected Output:
```text
invalid_argument
```
