#include "logic.h"

int sum_elements_up_main_diagonale(int matrix[SIZE][SIZE], int size) {
	if (size <= 0 || !matrix) {
		return 0;
	}

	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j > i) {
				sum += matrix[i][j];
			}
		}
	}

	return sum;
}