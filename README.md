# Sudoku

AI project 5 : Solving a sudoku game using a backtracking algorith.

Project Members: Daniel Vilajeti

Test Runs:

# INPUTS

Puzzle 1
```
. . .   9 . 2   6 . 4
6 . 4   3 . .   . 7 .
. 7 .   1 . 4   . . .

. . 3   . 1 9   8 . .
1 5 .   . 4 .   . 9 7
. . 7   8 2 .   3 . .

. . .   2 . 6   . 5 .
. 3 .   . . 7   1 . 2
9 . 2   5 . 1   . . .

```
Puzzle 2

```
6 8 .   . . .   . 5 .
. . .   . . 5   . . .
. . 3   8 . .   2 6 .

1 . 7   . 2 .   . . .
. . 9   5 . 8   6 . .
. . .   . 1 .   7 . 2

. 2 1   . . 9   4 . .
. . .   4 . .   . . .
. 3 .   . . .   . 2 8

```
# OUTPUTS

```
3 6 8 2 1 4 7 5 9 
1 2 7 6 5 9 8 3 4 
5 4 6 3 8 7 1 9 2 
9 3 1 7 6 8 2 4 5 
7 5 3 1 4 2 9 8 6 
2 8 4 9 3 5 6 7 1 
6 9 5 8 2 3 4 1 7 
8 7 2 4 9 1 5 6 3 
4 1 9 5 7 6 3 2 8 

6 3 4 1 2 5 8 7 9 
8 1 7 6 4 9 2 5 3 
2 4 3 7 9 8 1 6 5 
1 2 8 9 5 3 7 4 6 
3 6 9 2 7 1 5 8 4 
4 5 1 3 8 6 9 2 7 
9 8 2 5 6 7 4 3 1 
5 7 6 8 1 4 3 9 2 
7 9 5 4 3 2 6 1 8 

Program ended with exit code: 0

```
# Explanation of the ``` Sudoku ``` class and its respective member functions:

The most important member function in the ``` Sudoku ``` class are:

``` c++

bool Backtracking(int board[9][9]);

bool alldiff(int value, int row, int col);

```
``` Backtarcking ``` function accepts an incomplete board as a parameter. Here the Backtracking algorith itslef is implemented
using recursion.

The ``` alldiff ``` function ensures that a give cell assignment meets all three criteria. 
1. It is a unique value in its row.
2. It is a unique value in its column.
3. It is a unique value in its own box.
