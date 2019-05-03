#pragma once
//#define 9 9

#include <iostream>
using namespace std;

class Sudoku
{
private:
	 
	int a[9][9];
	int num_var;
	
public:

    //Constructor which accepts a board configuration as a parameter
	Sudoku(int initial[9][9]);

    //Calls the Backtracking function
	void solve();

    //Implementation of the Backtracking Algorithm
	bool Backtracking(int board[9][9]);

    //copies the contents of one array to the other
	void copyArray(int to_array[9][9], int fromArray[9][9]);

    //Checks for constraint satisfaction
	bool alldiff(int value, int row, int col);

    //checks if there are any un-completed cells in the board
	bool isComplete();

    //finds the next un-assigned cell in the board
	void findVariables(int *row, int *col);

    //prints the board
	void printBoard(int board[9][9]);
};
