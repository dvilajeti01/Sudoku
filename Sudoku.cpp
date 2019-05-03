#include "Sudoku.h"
#include <utility>
#include <queue>
using namespace std;

Sudoku::Sudoku(int initial[9][9])
{
	copyArray(this->a, initial);
}

void Sudoku::solve()
{
    if (Backtracking(a))
	{
		printBoard(a);
		cout << endl;
	}
	else
		cout << "SOLUTION NOT FOUND";
}

bool Sudoku::Backtracking(int board[9][9])
{
	int row, col;

	if (isComplete())
		return true;
	else
	{
		//select next unassinged cell
		findVariables(&row, &col);

		for (int i = 1; i <= 9; i++) //for each value of v of D
		{
			if (alldiff(i,row,col))//check if v is satisfies constraints
			{
				board[row][col] = i; //assign v to unassigned cell
				if (Backtracking(board)) //recursive func call
					return true;
                board[row][col] = 0;
			}
		}
	}
	return false;
}

void Sudoku::copyArray(int to_array[9][9], int from_array[9][9])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			to_array[i][j] = from_array[i][j];
		}
	}
}

bool Sudoku::alldiff(int value, int row, int col)
{
	int row_start = (row/3)*3;
	int col_start = (col/3)*3;

	//row check
	for (int j = 0; j < 9; j++)
	{
		if (a[row][j] == value)
			return false;
	}

	//col check
	for (int i = 0; i < 9; i++)
	{
		if (a[i][col] == value)
			return false;
	}

	//"box" check
	for (int i = row_start; i < row_start + 3; i++)
	{
		for (int j = col_start; j < col_start + 3; j++)
		{
			if (a[i][col] == value)
				return false;
		}
	}

	return true;
}

bool Sudoku::isComplete()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (a[i][j] == 0)
			{
				return false;
			}
		}
	}
	return true;
}

void Sudoku::findVariables(int *row, int * col)
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (a[i][j] == 0)
			{
				*row = i;
				*col = j;
				return;
			}
		}
	}
}

void Sudoku::printBoard(int board[9][9])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << a[j][i] << " ";
		}

		cout << endl;
	}
}
