void assign_initial(int cells[][11]) {                                          //將格子內資訊初始化為0 
	int i, j;
	for (i = 0; i < 11; i++)
	for (j = 0; j < 11; j++)
		cells[i][j] = 0;
}

void print_blanks(void) {                                                       //印出遊戲初始的格子 
	int i, j;
	printf("              遊戲說明：\n");
	printf("---------------------------------------\n");
	printf("※ 要開啟最左上角那格請輸入1 1\n");
	printf("   往下一格則左邊的值+1(輸入：2 1)\n");
	printf("   往右一格則右邊的值+1(輸入：1 2)\n");
	printf("   其餘以此類推，從1 1 ~ 9 9\n");
	printf("   輸入格式為：數字空格數字，如：8 2\n\n");
	printf("※ 可一次輸入多格座標，\n");
	printf("   座標間只需以非數字符號隔開就可以了！\n");
	printf("   祝您遊戲愉快！:)\n");
	printf("---------------------------------------\n\n");
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
	printf("\n輸入您要開啟的座標 >> ");
	scanf("%d%d", op_x, op_y);
}