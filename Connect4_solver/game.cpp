/*
*This file contains function declared in game.hpp
*this functions handle the game play and checking the winner
* @author : Amin Motamed
*/
#include <iostream>
#include <random>
#include "game.hpp"




int Game::play(int placement,int joueur){
	if(placement>=L){
		std::cout<<"This placment does'nt exist ! \n";
		return 0;
	}
	for(int i=0;i<H;i++){
		if (grid[placement][i]==0){
			grid[placement][i]=joueur;
			show_grid();
			return 1;
		}
	}
	std::cout<<"injection rejected colone is full !\n";
	return 0;
	
}

void Game::show_grid(){
	for(int j=H-1;j>=0;j--){
		for(int i=0;i<L;i++){
			if(grid[i][j]==1)
				std::cout<<"O";
			else if(grid[i][j]==2)
				std::cout<<"X";
			else
				std::cout<<".";
			std::cout<<" ";
		}
		std::cout<<"\n";
	}
}

void Game::init_grid(){
	grid[L][H]={0};
}
int* Game::get_grid(){
	return grid[L*H];
}
int Game::check_winner(){
	played--;
	if(played==0){
		std::cout<<"Null Game\n";
		return 1;
	}
	//check vertical
	for(int i=0;i<L;i++){
		for(int j=3;j<H;j++){
			if( 	(grid[i][j] != 0) 
				 && ( grid[i][j]== grid[i][j-1] )
				 && ( grid[i][j]== grid[i][j-2] )
				 && ( grid[i][j]== grid[i][j-3] )
				 ){
				std::cout<<"We have a winner Player Number  "<<grid[i][j]<<"\n";
				return 1;
			}
		}
	}

	//check horizontal
	for(int i=3;i<L;i++){
		for(int j=0;j<H;j++){
			if( 	(grid[i][j] != 0) 
				 && ( grid[i][j]== grid[i-1][j] )
				 && ( grid[i][j]== grid[i-2][j] )
				 && ( grid[i][j]== grid[i-3][j] )
				 ){
				std::cout<<"We have a winner Player Number  "<<grid[i][j]<<"\n";
				return 1;
			}
		}
	}

	//check diagonal
	for(int i=3;i<L;i++){
		for(int j=3;j<H;j++){
			if( 	(grid[i][j] != 0) 
				 && ( grid[i][j]== grid[i-1][j-1] )
				 && ( grid[i][j]== grid[i-2][j-2] )
				 && ( grid[i][j]== grid[i-3][j-3] )
				 ){
				std::cout<<"We have a winner Player Number  "<<grid[i][j]<<"\n";
				return 1;
			}
			
		}
	}
	
	//check diagonal
	for(int i=3;i<L;i++){
		for(int j=0;j<H-4;j++){

			if( 	(grid[i][j] != 0) 
				 && ( grid[i][j]== grid[i-1][j+1] )
				 && ( grid[i][j]== grid[i-2][j+2] )
				 && ( grid[i][j]== grid[i-3][j+3] )
				 ){
				std::cout<<"We have a winner Player Number  "<<grid[i][j]<<"\n";
				return 1;
			}
			
		}
	}
	

	return 0;
}
