void put_mine(int cells[][11], int op_x, int op_y) {                            //放置地雷
	srand(time(NULL));          //  亂數種子 
	int  n = 0,
		rand_num,
		cell_x,
		cell_y;

	do {
		rand_num = rand() % 81;     // ( rand() % (最大值-最小值+1)) + 最小值
		cell_x = (rand_num % 9) + 1;
		cell_y = ((rand_num - cell_x) / 9) + 1;
		if (cells[cell_x][cell_y] != -1 && !(cell_x == op_x && cell_y == op_y)) {
			cells[cell_x][cell_y] = -1;
			n++;
		}
	} while (n < 10);
}

void calculate_num_of_cells(int cells[][11]) {                                  //計算非地雷區附近有幾彈地雷 
	int i, j, u, v;
	for (i = 1; i <= 9; i++)
	for (j = 1; j <= 9; j++)
	if (cells[i][j] == 0)
	for (u = i - 1; u <= i + 1; u++)
	for (v = j - 1; v <= j + 1; v++)
	if (cells[u][v] == -1)
		cells[i][j]++;
}

void assign_inf_after_open(int cells[][11], int op_x, int op_y) {               //改變使用者打開的位置之資訊 
	if (cells[op_x][op_y] == -1)
		cells[op_x][op_y] = -2;
	if (cells[op_x][op_y] >= 0 && cells[op_x][op_y] <= 8)
		cells[op_x][op_y] += 10;
}