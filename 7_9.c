void open_surrounding(int cells[][11], int op_x, int op_y) {                    //打開附近的區域（當格子附近無地雷時） 
	int i, j;
	for (i = op_x - 1; i <= op_x + 1; i++) {
		for (j = op_y - 1; j <= op_y + 1; j++) {
			if (cells[i][j] >= 0 && cells[i][j] <= 8 && i % 10 != 0 && j % 10 != 0) {
				cells[i][j] += 10;
				check_no_mine(cells, i, j);
			}
		}
	}
}

void check_no_mine(int cells[][11], int op_x, int op_y) {                       //檢查附近的區域有沒有地雷
	if (cells[op_x][op_y] == 10)        //附近沒地雷 
		open_surrounding(cells, op_x, op_y);
}

void print_condition_playing(int cells[][11]) {                                 //印出尚未結束的狀況
	int i, j;
	printf("      ");
	for (i = 1; i <= 9; i++)
		printf("%2d", i);
	printf("\n    ┌－－－－－－－－－┐\n");
	for (i = 1; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			if (j == 0)
				printf("%4d｜", i);
			else if (cells[i][j] < 10)
				printf("口");
			else if (cells[i][j] == 10)
				printf(" 0");
			else if (cells[i][j] > 10 && cells[i][j] <= 18)
				printf(" %d", cells[i][j] - 10);
			if (j == 9)
				printf("｜%d", i);
		}
		printf("\n");
	}
	printf("    └－－－－－－－－－┘\n");
	printf("      ");
	for (i = 1; i <= 9; i++)
		printf("%2d", i);
	printf("\n");
}