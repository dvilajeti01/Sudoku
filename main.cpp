#include "Sudoku.h"
#include <iostream>
using namespace std;

int main()
{
	int matrixA[9][9] = 
	{
		{0,0,0,9,0,2,6,0,4},
		{6,0,4,3,0,0,0,7,0},
		{0,7,0,1,0,4,0,0,0},
		{0,0,3,0,1,9,8,0,0},
		{1,5,0,0,4,0,0,9,7},
		{0,0,7,8,2,0,3,0,0},
		{0,0,0,2,0,6,0,5,0},
		{0,3,0,0,0,7,1,0,2},
		{9,0,2,5,0,1,0,0,0}
	};

	int matrixB[9][9] =
	{
		{6,8,0,0,0,0,0,5,0},
		{0,0,0,0,0,5,0,0,0},
		{0,0,3,8,0,0,2,6,0},
		{1,0,7,0,2,0,0,0,0},
		{0,0,9,5,0,8,6,0,0},
		{0,0,0,0,1,0,7,0,2},
		{0,2,1,0,0,9,4,0,0},
		{0,0,0,4,0,0,0,0,0},
		{0,3,0,0,0,0,0,2,8}
	};

	Sudoku game1(matrixA);
	Sudoku game2(matrixB);



	game1.solve();
	system("pause");
	game2.solve();
	system("pause");
	return 0;
}
