void assign_initial(int cells[][11]) {                                          //�N��l����T��l�Ƭ�0 
	int i, j;
	for (i = 0; i < 11; i++)
	for (j = 0; j < 11; j++)
		cells[i][j] = 0;
}

void print_blanks(void) {                                                       //�L�X�C����l����l 
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
				printf("�f");
		}
		printf("\n");
	}
}

void open_cell(int *op_x, int *op_y) {                                          //�ШϥΪ̿�J�n���}����m
	int x, y;
	printf("\n��J�n�}�Ҫ��y�� >> ");
	scanf("%d%d", op_x, op_y);
}