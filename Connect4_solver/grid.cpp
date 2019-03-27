#include <grid.hpp>
#include <iostream>

using namespace std;
grid::grid()
{
}


void grid::initBoard(){
	for (int x = 0; x < 7; x++){
		
		for (int y = 0; y < 6; y++){
			
			_Board[x][y] = '*';
		}
	}
}


void grid::printBoard(){
	cout << "  1  2  3  4  5  6  7\n";
	cout << " ---------------------\n";
	for (int y = 0; y < 6; y++){
		cout << "| ";
		for (int x = 0; i < 7; x++)
		{
			cout << "| ";
		}
		cout << endl;
	}
	cout << " ---------------------\n";
}


bool grid::placePiece(int col, char piece){
	for (int y = 5; y >=0; y--){
		if ( _Board[col-1][y] == '.') {
			_Board[col-1][y] = piece;
			printBoard();
			return true;
		}
	}
	return false;
}

bool grid::isFull(){
	for (int x = 0; x < 7; x++){
		if(_Board[x][0] == '.') {
			return false;
		}
	}
}


bool Board::isWinner() {
	for (int y = 0; y < 6; y++) {
		for (int x = 3; x < 7; x++) {
			if ((_board[x][y] != '.') && (_board[x][y] == _board[x - 1][y]) && (_board[x][y] == _board[x - 2][y]) && (_board[x][y] == _board[x - 3][y])) {
				return true;
			}
		}
	}

	for (int y = 3; y < 6; y++) {
		for (int x = 0; x < 7; x++) {
			if ((_board[x][y] != '.') && (_board[x][y] == _board[x][y-1]) && (_board[x][y] == _board[x][y-2]) && (_board[x][y] == _board[x][y-3])) {
				return true;
			}
		}
	}

	for (int y = 3; y < 6; y++) {
		for (int x = 3; x < 7; x++) {
			if ((_board[x][y] != '.') && (_board[x][y] == _board[x-1][y - 1]) && (_board[x][y] == _board[x-2][y - 2]) && (_board[x][y] == _board[x-3][y - 3])) {
				return true;
			}
		}
	}

	for (int y = 3; y < 6; y++) {
		for (int x = 0; x < 4; x++) {
			if ((_board[x][y] != '.') && (_board[x][y] == _board[x + 1][y - 1]) && (_board[x][y] == _board[x + 2][y - 2]) && (_board[x][y] == _board[x + 3][y - 3])) {
				return true;
			}
		}
	}
	return false;
}