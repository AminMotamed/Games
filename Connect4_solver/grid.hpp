#ifndef __GRID
#define __GRID

class Board
{
public:
	Board();
	void initBoard();
	void printBoard();
	bool isWinner();
	bool isFull();
	bool placePiece(int col, char piece);

private: 
	char _Board[7][6];	

};
