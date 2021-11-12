#include<bits/stdc++.h>
using namespace std ;

void printBoard(int board[9][9])
	{
		for (int i =0 ; i < 9 ; i++)
		{
			for (int j = 0 ; j < 9 ; j++)
			{
				cout << board[i][j] << " " ;
			}
			cout << "\n" ;
		}
	}


    bool canPlace(int board[][9], int i, int j, int num)
	{
        // check if there is other same num in row
		for (int k = 0 ; k < 9 ; k++)
		{
			if (board[i][k] == num) return false ;
		}
		
        // check if there is other same num in column
		for (int k = 0 ; k < 9 ; k++)
		{
			if (board[k][j] == num) return false ;
		}
		
		// check if there is other same num in 3x3 grid
		int x = (i/3)*3, y = (j/3)*3 ;
		
		for (; x < (i/3 + 1)*3; x++)
		{
			for (int k = y ; k < y+3 ; k++)
			{
				if (board[x][k] == num) return false ;
			}
		}
		
		return true ;	
	}


bool sudoku(int board[][9], int i, int j)
	{
		// Base condition
		if (i == 9) {
		        printBoard(board);
			return true ;
		}
		
		// if whole row is checked move to next row
		if (j == 9) return sudoku(board, i+1, 0) ;
		
		// if number is pre-filled move to next pos
		if (board[i][j] != 0) return sudoku(board, i, j+1) ;
		
		// check for each num from 1 to 9, placing board[i][j] = num and solve remaining
		for (int num = 1 ; num <= 9 ; num++)
		{
			if(canPlace(board, i, j, num)) {
				board[i][j] = num ;
				
				bool sub_problem = sudoku(board, i, j+1) ;
				
				// if remaining problem can be solved by placing board[i][j] = num 
				//return true
				if (sub_problem) {
					return true ;
				}
			}
		}
		
		// if remaining problem could not be solved by board[i][j] = num
		// backtrack and try different num at previous position
		board[i][j] = 0 ;
		
		return false ;		
	}
int main()
{
int sudoku_board[9][9] = 
			   {{5, 3, 0, 0, 7, 0, 0, 0, 0},
				{6, 0, 0, 1, 9, 5, 0, 0, 0},
				{0, 9, 8, 0, 0, 0, 0, 6, 0},
				{8, 0, 0, 0, 6, 0, 0, 0, 3},
				{4, 0, 0, 8, 0, 3, 0, 0, 1},
				{7, 0, 0, 0, 2, 0, 0, 0, 6},
				{0, 6, 0, 0, 0, 0, 2, 8, 0},
				{0, 0, 0, 4, 1, 9, 0, 0, 5},
				{0, 0, 0, 0, 8, 0, 0, 7, 0}} ;
		
		sudoku(sudoku_board, 0, 0) ;
}