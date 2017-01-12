void assign_initial(int cells[][11]) {                                          //將格子內資訊初始化為0 
	int i, j;
	for (i = 0; i < 11; i++)
	for (j = 0; j < 11; j++)
		cells[i][j] = 0;
}

void print_blanks(void) {                                                       //印出遊戲初始的格子 
	int i, j;
	printf("    ");
	for (i = 1; i <= 9; i++)
		printf("%2d", i);
	printf("\n");
	for (i = 1; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			if (j == 0)
				printf("%4d", i);
			else
				printf("口");
		}
		printf("\n");
	}
}

void open_cell(int *op_x, int *op_y) {                                          //請使用者輸入要打開的位置
	int x, y;
	printf("\n輸入要開啟的座標 >> ");
	scanf("%d%d", op_x, op_y);
}