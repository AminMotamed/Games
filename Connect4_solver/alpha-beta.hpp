/**
* This file contains the class of minmax algorithme
* @author Amin Motamed
**/
class MinMax{
	private:
		
	public:
		int play();
		void show_grid(int** grid);
		void get_possible_shot();
		void get_shot();
		void shot_score();
		void minmax();
		void calculate_best_shot(void* player_position);
		void generate_shot(void* player_position);
		void evaluate(void* player_position);
		void get_score();
};
