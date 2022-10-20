/*
- Author: Yeonjin Choi
- Data: 22.09.29
- Description: RPG game
- Patch note :
	1. introducing pointer variables.
*/
#include "game.h"

int main() {

	int player_hp;
	int player_att;
	int player_def;
	short inventory[INVENTORY_SIZE];

	int monster_hp;
	int monster_att;
	int monster_def;

	init_game(&player_hp, &player_att, &player_def, inventory, &monster_hp, &monster_att, &monster_def);
	run_game(&player_hp, &player_att, &player_def, inventory, &monster_hp, &monster_att, &monster_def);

	return 0;
}

