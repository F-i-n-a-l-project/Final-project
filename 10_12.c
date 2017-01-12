void print_condition_over(int cells[][11], int over) {                          //印出遊戲結束的狀況(每個格子之資訊) 
	int i, j;
	printf("  ┌－－－－－－－－－┐\n");
	for (i = 1; i <= 9; i++) {
		for (j = 0; j <= 10; j++) {
			if (j == 0)
				printf("  ｜");
			else if (j == 10)
				printf("｜");
			else if (cells[i][j] % 10 == 0)
				printf("．");
			else if (cells[i][j] == -1)
				printf(" *");
			else if (cells[i][j] == -2)
				printf("⊕");
			else
				printf("%2d", cells[i][j] % 10);
		}
		printf("\n");
	}
	printf("  └－－－－－－－－－┘\n");
	if (over == 1)
		printf("[恭喜你～～贏了！]\n\n");
	else
		printf("  [爆了]   \n\n");
	printf("數字代表周圍八格地雷總數量\n");
	printf("*代表地雷\n");
	printf("．代表周圍沒地雷\n");
	printf("⊕代表爆掉的地雷。\n");
}

void print_cells(int cells[][11], int op_x, int op_y, int over) {               //印出目前的狀況
	system("cls");
	printf("\n");
	int i, j;
	if (over == 0) {
		print_condition_playing(cells);
	}
	else
		print_condition_over(cells, over);
}

int  check_over(int cells[][11], int op_x, int op_y) {                          //檢查遊戲是否結束(輸或贏)
	//result == 0 ->尚未結束，result == 1 ->贏，result == -1 ->輸
	int i, j, result = 1;
	if (cells[op_x][op_y] == -2) {
		result = -1;
	}
	else {
		for (i = 1; i <= 9 && result == 1; i++)
		for (j = 1; j <= 9 && result == 1; j++)
		if ((cells[i][j] >= 0 && cells[i][j] <= 8))
			result = 0;
	}
	return(result);
}