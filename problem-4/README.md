# Problem 4 - 2D Array: In-Place Clockwise Matrix Rotation

This program rotates an `n x n` matrix 90 degrees clockwise in place (`1 <= n <= 8`) and prints the rotated matrix. If `n` is less than `1` or greater than `8`, it prints `invalid_argument`.

## How to Compile and Run

Open a terminal inside the `problem-4` folder and run:

```bash
g++ -std=c++17 main.cpp -o main
./main
```

## How to Enter Inputs

1. Enter `n` (the size of the square matrix).
2. If `n` is between `1` and `8`, enter the `n x n` matrix values row by row. (If `n` is invalid, the program skips asking for matrix values.)

## Example Test Cases (From Exam Table)

### Test Case 1: 3x3 matrix (`m={{1,2,3},{4,5,6},{7,8,9}}, n=3`)

Input:
```text
3
1 2 3
4 5 6
7 8 9
```

Expected Output:
```text
m={{7,4,1},{8,5,2},{9,6,3}}
```

### Test Case 2: 1x1 matrix (`m={{1}}, n=1`)

Input:
```text
1
1
```

Expected Output:
```text
m={{1}}
```

### Test Case 3: 2x2 matrix (`m={{1,2},{3,4}}, n=2`)

Input:
```text
2
1 2
3 4
```

Expected Output:
```text
m={{3,1},{4,2}}
```

### Test Case 4: Invalid size zero (`n=0`)

Input:
```text
0
```

Expected Output:
```text
invalid_argument
```

### Test Case 5: Size exceeds capacity (`n=9`)

Input:
```text
9
```

Expected Output:
```text
invalid_argument
```
