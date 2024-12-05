gui_blackjack: guimain.c screens.c command_line.c gui_game_logic.c gui_game_logic.h screens.h cardStructs.h
	gcc guimain.c screens.c command_line.c gui_game_logic.c -o gui_blackjack -lSDL2 -lSDL2_ttf 
