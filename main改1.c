void assign_initial(int cells[][11]) {                                          //�N��l����T��l�Ƭ�0 
	int i, j;
	for (i = 0; i < 11; i++)
	for (j = 0; j < 11; j++)
		cells[i][j] = 0;
}

void print_blanks(void) {                                                       //�L�X�C����l����l 
	int i, j;
	printf("              �C�������G\n");
	printf("---------------------------------------\n");
	printf("�� �n�}�ҳ̥��W������п�J1 1\n");
	printf("   ���U�@��h���䪺��+1(��J�G2 1)\n");
	printf("   ���k�@��h�k�䪺��+1(��J�G1 2)\n");
	printf("   ��l�H�������A�q1 1 ~ 9 9\n");
	printf("   ��J�榡���G�Ʀr�Ů�Ʀr�A�p�G8 2\n\n");
	printf("�� �i�@����J�h��y�СA\n");
	printf("   �y�ж��u�ݥH�D�Ʀr�Ÿ��j�}�N�i�H�F�I\n");
	printf("   ���z�C���r�֡I:)\n");
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
				printf("�f");
		}
		printf("\n");
	}
}

void open_cell(int *op_x, int *op_y) {                                          //�ШϥΪ̿�J�n���}����m
	int x, y;
	printf("\n��J�z�n�}�Ҫ��y�� >> ");
	scanf("%d%d", op_x, op_y);
}