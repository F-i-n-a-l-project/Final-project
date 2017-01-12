void print_condition_over(int cells[][11], int over) {                          //�L�X�C�����������p(�C�Ӯ�l����T) 
	int i, j;
	printf("  �z�ССССССССТ{\n");
	for (i = 1; i <= 9; i++) {
		for (j = 0; j <= 10; j++) {
			if (j == 0)
				printf("  �U");
			else if (j == 10)
				printf("�U");
			else if (cells[i][j] % 10 == 0)
				printf("�D");
			else if (cells[i][j] == -1)
				printf(" *");
			else if (cells[i][j] == -2)
				printf("��");
			else
				printf("%2d", cells[i][j] % 10);
		}
		printf("\n");
	}
	printf("  �|�ССССССССТ}\n");
	if (over == 1)
		printf("[���ߧA���Ĺ�F�I]\n\n");
	else
		printf("  [�z�F]   \n\n");
	printf("�Ʀr�N��P��K��a�p�`�ƶq\n");
	printf("*�N��a�p\n");
	printf("�D�N��P��S�a�p\n");
	printf("��N���z�����a�p�C\n");
}

void print_cells(int cells[][11], int op_x, int op_y, int over) {               //�L�X�ثe�����p
	system("cls");
	printf("\n");
	int i, j;
	if (over == 0) {
		print_condition_playing(cells);
	}
	else
		print_condition_over(cells, over);
}

int  check_over(int cells[][11], int op_x, int op_y) {                          //�ˬd�C���O�_����(���Ĺ)
	//result == 0 ->�|�������Aresult == 1 ->Ĺ�Aresult == -1 ->��
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