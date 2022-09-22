#include <stdio.h>
#include <Windows.h>

void initialize(char board[3][3]) {
	for (int y=0; y<3; y++) {
		for (int x=0; x<3; x++) {
			board[y][x] = '-';
		}
	}
}

void printBoard(char board[3][3]) {
	for (int y=0; y<3; y++) {
		for (int x=0; x<3; x++) {
			printf ("%c ", board[y][x]);
		}
		printf ("\n");
	}
}

void fillBoard(char board[3][3], int turn) {
	int x, y;
	do {
		scanf ("%d %d", &x, &y);	
	} while (board[y][x] != '-');
	
	if (turn % 2 == 0) {
		board[y][x] = 'X';	
	}
	else {
		board[y][x] = 'O';
	}
}

int main() {
	bool isPlaying = true;
	char board[3][3];
	int turn = 1;
	
	initialize(board);
	
	while (isPlaying) {
		system("cls");
		printBoard(board);
		
		fillBoard(board, turn);
		turn++;
		
		getchar();
	}
	
	return 0;
}
