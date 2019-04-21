#pragma once
//#define 9 9

#include <iostream>
#include <queue>
#include <utility>
using namespace std;

class Sudoku
{
private:
	 
	int a[9][9];
	int num_var;
	
public:

	Sudoku(int initial[9][9]);

	void solve();

	bool Backtracking(int board[9][9]);

	void copyArray(int to_array[9][9], int fromArray[9][9]);

	bool alldiff(int value, int row, int col);

	bool isComplete();

	void findVariables(int *row, int *col);

	void printBoard(int board[9][9]);
};