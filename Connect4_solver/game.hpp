/**
* This file contains the game rules
* @author Amin Motamed
*/
#include <array>
#define L 7
#define H 6

typedef struct board_t board_t;
struct board_t{
    int line;
    int column;
    int bord[L][H];
};

class Game{
	public:
		board_t _grid;
		int grid[L][H]={0};
		int played=L*H;
	public:
		void    init_grid();
		int 	play(int placement,int player); 
		void 	show_grid();
		int  	check_winner();
		void 	swap();
		void 	game_engine();
		int*    get_grid();
        
};
