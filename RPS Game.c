#include "rpcGame.h"
#include <string.h>


char* rcsGame(char player1[], char player2[]) {
	if (strcmp(player1, "rock") != 0 && strcmp(player1, "paper") != 0 && strcmp(player1, "scissors") != 0 || strcmp(player2, "rock") != 0 && strcmp(player2, "paper") != 0 && strcmp(player2, "scissors") != 0) {
		return "Invalid";
	}
	if (strcmp(player1, player2) == 0) {
		return "Draw";
	}
	if ((strcmp(player1, "rock") == 0 && strcmp(player2, "scissors") == 0) || (strcmp(player1, "scissors") == 0 && strcmp(player2, "paper") == 0) || (strcmp(player1, "paper") == 0 && strcmp(player2, "rock") == 0)) {
		return "Player 1";
	}
	return "Player 2";
}